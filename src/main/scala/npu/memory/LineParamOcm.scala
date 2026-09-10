package npu.core.memory

import chisel3._
import chisel3.util._

// Ping/pong parameter SRAM with a fixed 64B DMA write and a configurable CU
// read width. Each bank is 4KB. tensor_read_units is expressed in the CU read
// granularity, so QB counts 64B units and FB counts 32B units.
class ParamPingPongSRAM(
  val writeWidthBytes: Int = 64,
  val readWidthBytes: Int,
  val capacityBytes: Int = 4096
) extends Module {
  require(writeWidthBytes == 64, "Parameter DMA writes exactly 64B per beat")
  require(writeWidthBytes % readWidthBytes == 0)
  require(capacityBytes % writeWidthBytes == 0)

  private val ratio = writeWidthBytes / readWidthBytes
  private val writeBits = writeWidthBytes * 8
  private val readBits = readWidthBytes * 8
  private val physicalRowsPerBank = capacityBytes / writeWidthBytes
  private val readUnitsPerBank = capacityBytes / readWidthBytes
  private val totalCacheUnits = 2 * readUnitsPerBank
  private val rowAddrBits = math.max(1, log2Ceil(physicalRowsPerBank))
  private val unitAddrBits = math.max(1, log2Ceil(readUnitsPerBank))
  private val cacheAddrBits = math.max(1, log2Ceil(totalCacheUnits))
  private val unitCountBits = math.max(1, log2Ceil(readUnitsPerBank + 1))
  private val sliceBits = math.max(1, log2Ceil(ratio))

  val io = IO(new Bundle {
    val soft_reset = Input(Bool())
    val enable = Input(Bool())
    val shoot = Input(Bool())
    val cache_mode = Input(Bool())

    // Logical tensor length in consumer read units: QB=64B, FB=32B.
    val tensor_read_units = Input(UInt(32.W))

    val dma_valid = Input(Bool())
    val dma_data = Input(UInt(writeBits.W))
    val dma_chunk_last = Input(Bool())
    val dma_tensor_last = Input(Bool())

    val req_line = Input(Bool())
    val line_data = Output(UInt(readBits.W))
    val line_valid = Output(Bool())

    val ready = Output(Bool())
    val hungry = Output(Bool())
    val impending = Output(Bool())
    val working = Output(Bool())
    val tensor_wrap = Output(Bool())
    val sync_alert = Output(Bool())
  })

  val ping = SyncReadMem(physicalRowsPerBank, UInt(writeBits.W))
  val pong = SyncReadMem(physicalRowsPerBank, UInt(writeBits.W))

  val bankFull = RegInit(VecInit(Seq.fill(2)(false.B)))
  val bankValidUnits =
    RegInit(VecInit(Seq.fill(2)(0.U(unitCountBits.W))))
  val bankLastTag = RegInit(VecInit(Seq.fill(2)(false.B)))

  val writeBank = RegInit(0.U(1.W))
  val writePtr = RegInit(0.U(rowAddrBits.W))
  val unitsCommitted = RegInit(0.U(32.W))

  val activeBank = RegInit(0.U(1.W))
  val spillReadPtr = RegInit(0.U(unitAddrBits.W))
  val cacheReadPtr = RegInit(0.U(cacheAddrBits.W))
  val tensorLoaded = RegInit(false.B)
  val started = RegInit(false.B)

  // ------------------------------------------------------------------------
  // 64B DMA write and logical-unit commit bookkeeping.
  // ------------------------------------------------------------------------
  val writeBlocked = bankFull(writeBank)
  val dmaFire = io.dma_valid && io.enable && !writeBlocked
  val physicalLast = writePtr === (physicalRowsPerBank - 1).U
  val closeBank =
    dmaFire && (io.dma_chunk_last || io.dma_tensor_last || physicalLast)

  val physicalUnitsInClosingBank =
    (writePtr +& 1.U) * ratio.U
  val remainingLogicalUnits =
    Mux(
      io.tensor_read_units > unitsCommitted,
      io.tensor_read_units - unitsCommitted,
      0.U
    )
  val closingValidUnits =
    Mux(
      physicalUnitsInClosingBank > remainingLogicalUnits,
      remainingLogicalUnits,
      physicalUnitsInClosingBank
    )

  when(dmaFire) {
    when(writeBank === 0.U) {
      ping.write(writePtr, io.dma_data)
    }.otherwise {
      pong.write(writePtr, io.dma_data)
    }

    when(closeBank) {
      bankFull(writeBank) := true.B
      bankValidUnits(writeBank) := closingValidUnits(unitCountBits - 1, 0)
      bankLastTag(writeBank) := io.dma_tensor_last
      writePtr := 0.U
      writeBank := ~writeBank

      when(io.dma_tensor_last) {
        unitsCommitted := 0.U
        tensorLoaded := true.B
      }.otherwise {
        unitsCommitted := unitsCommitted + closingValidUnits
      }
    }.otherwise {
      writePtr := writePtr + 1.U
    }
  }

  // ------------------------------------------------------------------------
  // Start barrier and consumer request mapping.
  // ------------------------------------------------------------------------
  val cacheTensorSizeOk =
    io.tensor_read_units =/= 0.U &&
    io.tensor_read_units <= totalCacheUnits.U

  io.ready :=
    !io.enable ||
    Mux(io.cache_mode, tensorLoaded && cacheTensorSizeOk, bankFull(0))

  when(io.soft_reset || !io.enable) {
    started := false.B
  }.elsewhen(io.shoot && io.ready) {
    started := true.B
  }
  io.working := started

  val cacheReqOk = started && io.cache_mode && cacheTensorSizeOk
  val spillReqOk = started && !io.cache_mode && bankFull(activeBank)
  val readFire = io.req_line && (cacheReqOk || spillReqOk)

  val readBank = Wire(UInt(1.W))
  val readUnitAddr = Wire(UInt(unitAddrBits.W))
  when(io.cache_mode) {
    readBank := Mux(cacheReadPtr < readUnitsPerBank.U, 0.U, 1.U)
    readUnitAddr := Mux(
      cacheReadPtr < readUnitsPerBank.U,
      cacheReadPtr(unitAddrBits - 1, 0),
      (cacheReadPtr - readUnitsPerBank.U)(unitAddrBits - 1, 0)
    )
  }.otherwise {
    readBank := activeBank
    readUnitAddr := spillReadPtr
  }

  val readRow = if (ratio == 1) {
    readUnitAddr(rowAddrBits - 1, 0)
  } else {
    (readUnitAddr >> log2Ceil(ratio))(rowAddrBits - 1, 0)
  }
  val readSlice = if (ratio == 1) 0.U(sliceBits.W)
    else readUnitAddr(log2Ceil(ratio) - 1, 0)

  val pingRead = ping.read(readRow, readFire && readBank === 0.U)
  val pongRead = pong.read(readRow, readFire && readBank === 1.U)
  val readBankD1 = RegEnable(readBank, 0.U, readFire)
  val readSliceD1 = RegEnable(readSlice, 0.U, readFire)
  val readFireD1 = RegNext(readFire, false.B)
  val physicalReadData = Mux(readBankD1 === 0.U, pingRead, pongRead)
  val readSlices = physicalReadData.asTypeOf(Vec(ratio, UInt(readBits.W)))

  io.line_data := readSlices(readSliceD1)
  io.line_valid := readFireD1

  // ------------------------------------------------------------------------
  // CACHE wraps only at the logical length, never at physical padding.
  // ------------------------------------------------------------------------
  val cacheLastUnit = cacheReadPtr === io.tensor_read_units - 1.U
  val cacheWrapFire = readFire && io.cache_mode && cacheLastUnit
  when(readFire && io.cache_mode) {
    cacheReadPtr := Mux(cacheLastUnit, 0.U, cacheReadPtr + 1.U)
  }

  // ------------------------------------------------------------------------
  // SPILL switches according to each bank's logical valid-unit count. Release
  // is delayed until the synchronous response has completed.
  // ------------------------------------------------------------------------
  val activeValidUnits = bankValidUnits(activeBank)
  val spillLastUnit = spillReadPtr === activeValidUnits - 1.U
  val spillLastReq = readFire && !io.cache_mode && spillLastUnit
  val spillLastTagNow = bankLastTag(activeBank)
  val freePending = RegNext(spillLastReq, false.B)
  val freeBankD1 = RegEnable(activeBank, 0.U, spillLastReq)

  when(spillLastReq) {
    activeBank := ~activeBank
    spillReadPtr := 0.U
  }.elsewhen(readFire && !io.cache_mode) {
    spillReadPtr := spillReadPtr + 1.U
  }

  when(freePending) {
    bankFull(freeBankD1) := false.B
    bankValidUnits(freeBankD1) := 0.U
    bankLastTag(freeBankD1) := false.B
    when(bankFull(writeBank)) {
      writeBank := freeBankD1
      writePtr := 0.U
    }
  }

  val spillWrapFire = spillLastReq && spillLastTagNow
  io.tensor_wrap := cacheWrapFire || spillWrapFire

  val bothFull = bankFull(0) && bankFull(1)
  io.hungry := io.enable && Mux(
    io.cache_mode,
    !tensorLoaded && !bothFull,
    !bothFull
  )

  val activeRemaining = Mux(
    bankFull(activeBank),
    bankValidUnits(activeBank) - spillReadPtr,
    0.U
  )
  io.impending :=
    started && !io.cache_mode && activeRemaining <= 8.U &&
    !bankFull(~activeBank)

  // ------------------------------------------------------------------------
  // Reset and DFD.
  // ------------------------------------------------------------------------
  when(io.soft_reset) {
    bankFull := VecInit(Seq.fill(2)(false.B))
    bankValidUnits := VecInit(Seq.fill(2)(0.U(unitCountBits.W)))
    bankLastTag := VecInit(Seq.fill(2)(false.B))
    writeBank := 0.U
    writePtr := 0.U
    unitsCommitted := 0.U
    activeBank := 0.U
    spillReadPtr := 0.U
    cacheReadPtr := 0.U
    tensorLoaded := false.B
    started := false.B
  }

  val badTensorSize =
    io.enable && (io.tensor_read_units === 0.U ||
      (io.cache_mode && !cacheTensorSizeOk))
  val readUnderflow = io.req_line && started && !(cacheReqOk || spillReqOk)
  val dmaOverflow = io.dma_valid && io.enable && writeBlocked
  val prematureTensorLast =
    closeBank && io.dma_tensor_last &&
    physicalUnitsInClosingBank < remainingLogicalUnits
  val emptyClosingBank = closeBank && closingValidUnits === 0.U

  io.sync_alert :=
    badTensorSize || readUnderflow || dmaOverflow ||
    prematureTensorLast || emptyClosingBank
}

// QB: 64B DMA write and 64B CU read, 64 units per 4KB bank.
class QbController extends ParamPingPongSRAM(readWidthBytes = 64)

// FB: 64B DMA write split into two ordered 32B CU blocks, 128 units per bank.
class FbController extends ParamPingPongSRAM(readWidthBytes = 32)
