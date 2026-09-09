package npu.core

import chisel3._
import chisel3.util._
import npu.utils.Universal_Wide_LUT

object QuantParamMode {
  val PER_MATRIX  = 0.U(1.W)
  val PER_CHANNEL = 1.U(1.W)
}

// One shared activation LUT per lane, with four enabled edges of latency.
// TPU: signed requant -> INT8 saturation or signed INT10 activation.
// DIRECT: signed INT10 -> activation, independently of all qparams.
// Packed parameter format is preserved:
//   [31:16] multiplier
//   [15:13] reserved
//   [12:8]  shift
//   [7:0]   zero-point
class QuantActCore(
  val writeBits: Int,
  val indexBits: Int,
  val inBits: Int,
  val outBits: Int
) extends Module {

  require(inBits == 32 && outBits == 8 && indexBits == 10)

  private val numEntries = 1 << indexBits
  private val wordsPerBurst = writeBits / outBits
  private val burstAddrBits =
    math.max(1, log2Ceil(numEntries / wordsPerBurst))

  val io = IO(new Bundle {
    val in_tpu   = Input(SInt(inBits.W))
    val in_direct = Input(SInt(10.W))
    val input_mode = Input(UInt(1.W))
    val in_valid = Input(Bool())
    val param    = Input(UInt(32.W))
    val act_mask = Input(UInt(2.W))
    val fusion_second = Input(Bool())
    val stall    = Input(Bool())

    val lut_wr_en   = Input(Bool())
    val lut_wr_addr = Input(UInt(burstAddrBits.W))
    val lut_wr_data = Input(Vec(wordsPerBurst, UInt(outBits.W)))

    val out_qact  = Output(UInt(outBits.W))
    val out_valid = Output(Bool())

    // One-cycle lookahead for a synchronous VB read, gated during stall.
    val out_lookahead = Output(Bool())
    val busy = Output(Bool())
    val lut_ready  = Output(Bool())
    val sync_alert = Output(Bool())
  })

  val run = !io.stall
  val direct = io.input_mode === VPU1InputMode.DIRECT
  val selectedActEn = Mux(io.fusion_second, io.act_mask(1), io.act_mask(0))

  val zp    = io.param(7, 0).asSInt
  val shift = io.param(12, 8)
  val mult  = io.param(31, 16)

  val s1Sub    = Reg(SInt((inBits + 1).W))
  val s1Mult   = Reg(UInt(16.W))
  val s1Shift  = Reg(UInt(5.W))
  val s1ActEn  = Reg(Bool())
  val s1Direct = Reg(Bool())
  val s1Valid  = RegInit(false.B)

  when(run) {
    s1Valid := io.in_valid
    when(io.in_valid) {
      s1Sub   := Mux(direct, io.in_direct.pad(inBits + 1),
        io.in_tpu.pad(inBits + 1) - zp.pad(inBits + 1))
      s1Mult  := Mux(direct, 1.U, mult)
      s1Shift := Mux(direct, 0.U, shift)
      s1ActEn := direct || selectedActEn
      s1Direct := direct
    }
  }

  val s2MultRes = Reg(SInt((inBits + 17).W))
  val s2Shift   = Reg(UInt(5.W))
  val s2ActEn   = Reg(Bool())
  val s2Valid   = RegInit(false.B)

  when(run) {
    s2Valid := s1Valid
    when(s1Valid) {
      s2MultRes := Mux(s1Direct, s1Sub, s1Sub * s1Mult.zext.asSInt)
      s2Shift   := s1Shift
      s2ActEn   := s1ActEn
    }
  }

  val shifted = s2MultRes >> s2Shift
  val clampedSigned10 = Wire(SInt(10.W))
  clampedSigned10 := Mux(shifted < (-512).S, (-512).S,
    Mux(shifted > 511.S, 511.S, shifted))
  // Offset binary: -512 -> 0, 0 -> 512, 511 -> 1023.
  val lutAddress = (clampedSigned10.pad(11) + 512.S(11.W)).asUInt
  val clampedSigned8 = Wire(SInt(8.W))
  clampedSigned8 := Mux(shifted < (-128).S, (-128).S,
    Mux(shifted > 127.S, 127.S, shifted))

  val s3Idx = Reg(UInt(indexBits.W))
  val s3Linear = Reg(UInt(outBits.W))
  val s3ActEn = Reg(Bool())
  val s3Valid = RegInit(false.B)

  when(run) {
    s3Valid := s2Valid
    when(s2Valid) {
      s3Idx := lutAddress
      s3Linear := clampedSigned8.asUInt
      s3ActEn := s2ActEn
    }
  }

  val actLut =
    Module(new Universal_Wide_LUT(
      indexBits = indexBits,
      dataBits = outBits,
      writeBits = writeBits
    ))

  actLut.io.wr_en   := io.lut_wr_en
  actLut.io.wr_addr := io.lut_wr_addr
  actLut.io.wr_data := io.lut_wr_data

  val actReq = s3Valid && s3ActEn && run
  val linearReq = s3Valid && !s3ActEn && run

  actLut.io.rd_en   := actReq
  actLut.io.rd_addr := s3Idx

  val linearDataD1 = RegEnable(s3Linear, 0.U, linearReq)
  val linearValidD1 = RegNext(linearReq, false.B)

  val rawValid = actLut.io.rd_valid || linearValidD1
  val rawData = Mux(actLut.io.rd_valid, actLut.io.rd_data, linearDataD1)

  // A LUT response can arrive in the first wall-clock stall cycle after an
  // issued request. Retain it until the pipeline resumes.
  val holdValid = RegInit(false.B)
  val holdData  = Reg(UInt(outBits.W))

  when(io.stall && rawValid && !holdValid) {
    holdValid := true.B
    holdData := rawData
  }.elsewhen(run && holdValid) {
    holdValid := false.B
  }

  io.out_qact := Mux(holdValid, holdData, rawData)
  io.out_valid := run && (holdValid || rawValid)

  val expectedRdValid = RegNext(actReq, false.B)
  val expectedWrValid = RegNext(io.lut_wr_en, false.B)

  io.sync_alert :=
    (expectedRdValid =/= actLut.io.rd_valid) ||
    (expectedWrValid =/= actLut.io.wr_valid) ||
    (holdValid && rawValid && run)

  io.out_lookahead := s3Valid && run
  io.busy := s1Valid || s2Valid || s3Valid || rawValid || holdValid
  io.lut_ready := actLut.io.lut_ready
}

// ============================================================================
// 16-lane Quant/Act Unit
//
// PER_MATRIX:
//   One 32-bit packed parameter from npu_struct is broadcast to all 16 lanes.
//   QB is not accessed.
//
// PER_CHANNEL:
//   QB supplies one 64-byte line = 16 x 32-bit channel parameters.
//   active[16] serves the current 16-column output tile.
//   shadow[16] prefetches the next tile.
//   Every 16 accepted input rows, shadow -> active and the next QB line is
//   requested. QB circular addressing is responsible for N-wrap/reuse.
// ============================================================================
class QuantActUnit(
  val numLines: Int = 16,
  val writeBits: Int = 256,
  val indexBits: Int = 10,
  val inBits: Int = 32,
  val outBits: Int = 8
) extends Module {

  require(numLines == 16)
  require(inBits == 32 && outBits == 8 && indexBits == 10)

  private val wordsPerBurst = writeBits / outBits
  private val burstAddrBits =
    math.max(1, log2Ceil((1 << indexBits) / wordsPerBurst))

  val io = IO(new Bundle {
    val in_tpu   = Input(Vec(numLines, SInt(inBits.W)))
    val in_direct = Input(Vec(numLines, SInt(10.W)))
    val input_mode = Input(UInt(1.W))
    val in_valid = Input(Vec(numLines, Bool()))

    val param_mode   = Input(UInt(1.W))
    val matrix_param = Input(UInt(32.W))
    val act_mask     = Input(UInt(2.W))
    val fusion_second = Input(Bool())

    val stall      = Input(Bool())
    val soft_reset = Input(Bool())

    // QB 64-byte line interface.
    val qparam_req_line = Output(Bool())
    val qparam_line_in = Input(Vec(numLines, UInt(32.W)))
    val qparam_line_valid = Input(Bool())

    val lut_wr_en   = Input(Bool())
    val lut_wr_addr = Input(UInt(burstAddrBits.W))
    val lut_wr_data = Input(Vec(wordsPerBurst, UInt(outBits.W)))

    val out_vec   = Output(Vec(numLines, UInt(outBits.W)))
    val out_valid = Output(Vec(numLines, Bool()))

    val out_lookahead = Output(Vec(numLines, Bool()))
    val busy = Output(Bool())

    // Initializer barrier/status.
    val prefetch_ready = Output(Bool())
    val lut_ready      = Output(Bool())
    val sync_alert     = Output(Bool())
  })

  val run = !io.stall
  val perChannel = io.input_mode === VPU1InputMode.TPU &&
    io.param_mode === QuantParamMode.PER_CHANNEL

  val anyValid = io.in_valid.asUInt.orR
  val allValid = io.in_valid.asUInt.andR
  val inputFire = allValid && run

  val rowCounter = RegInit(0.U(4.W))
  val tileStart = inputFire && (rowCounter === 0.U)
  val tileEnd   = inputFire && (rowCounter === 15.U)

  when(io.soft_reset || !perChannel) {
    rowCounter := 0.U
  }.elsewhen(inputFire) {
    when(tileEnd) {
      rowCounter := 0.U
    }.otherwise {
      rowCounter := rowCounter + 1.U
    }
  }

  val activeParam =
    RegInit(VecInit(Seq.fill(numLines)(0.U(32.W))))

  val shadowParam =
    RegInit(VecInit(Seq.fill(numLines)(0.U(32.W))))

  val activeValid = RegInit(false.B)
  val shadowValid = RegInit(false.B)
  val reqOutstanding = RegInit(false.B)

  // Initial line is pulled before data starts. On each tileStart the currently
  // prefetched line is consumed and the following line is requested immediately.
  val consumeShadow =
    perChannel && tileStart

  io.qparam_req_line :=
    perChannel && !io.soft_reset &&
    !reqOutstanding &&
    (!shadowValid || consumeShadow)

  // Leaving TPU PER_CHANNEL invalidates prefetched operation state.
  // soft_reset resets this scheduler only; callers must first drain the datapath.
  when(io.soft_reset || !perChannel) {
    activeValid := false.B
    shadowValid := false.B
    reqOutstanding := false.B
  }.otherwise {
    when(io.qparam_req_line) {
      reqOutstanding := true.B
    }

    when(consumeShadow) {
      when(shadowValid) {
        activeParam := shadowParam
        activeValid := true.B
      }
      shadowValid := false.B
    }

    // Response priority allows same-cycle refill after a consume event.
    when(io.qparam_line_valid && perChannel) {
      shadowParam := io.qparam_line_in
      shadowValid := true.B
      reqOutstanding := false.B
    }
  }

  // Update-cycle bypass: row0 of a new tile uses shadow directly.
  val effectiveParam =
    Wire(Vec(numLines, UInt(32.W)))

  for (i <- 0 until numLines) {
    effectiveParam(i) :=
      Mux(
        perChannel,
        Mux(tileStart, shadowParam(i), activeParam(i)),
        io.matrix_param
      )
  }

  val primed = RegInit(false.B)
  when(io.soft_reset || !perChannel) {
    primed := false.B
  }.elsewhen(shadowValid) {
    primed := true.B
  }

  val cores =
    Seq.fill(numLines)(
      Module(new QuantActCore(
        writeBits = writeBits,
        indexBits = indexBits,
        inBits = inBits,
        outBits = outBits
      ))
    )

  for (i <- 0 until numLines) {
    cores(i).io.in_tpu := io.in_tpu(i)
    cores(i).io.in_direct := io.in_direct(i)
    cores(i).io.input_mode := io.input_mode
    cores(i).io.in_valid := io.in_valid(i)
    cores(i).io.param := effectiveParam(i)
    cores(i).io.act_mask := io.act_mask
    cores(i).io.fusion_second := io.fusion_second
    cores(i).io.stall := io.stall

    cores(i).io.lut_wr_en := io.lut_wr_en
    cores(i).io.lut_wr_addr := io.lut_wr_addr
    cores(i).io.lut_wr_data := io.lut_wr_data

    io.out_vec(i) := cores(i).io.out_qact
    io.out_valid(i) := cores(i).io.out_valid
    io.out_lookahead(i) := cores(i).io.out_lookahead
  }

  io.busy := VecInit(cores.map(_.io.busy)).asUInt.orR

  io.lut_ready :=
    VecInit(cores.map(_.io.lut_ready)).asUInt.andR

  io.prefetch_ready :=
    !perChannel || (primed && io.lut_ready)

  val coreAlert =
    VecInit(cores.map(_.io.sync_alert)).asUInt.orR

  val laneMismatch = anyValid && !allValid
  val firstTileWithoutShadow = consumeShadow && !shadowValid
  val laterTileWithoutActive =
    perChannel && inputFire && !tileStart && !activeValid

  val unexpectedResponse =
    perChannel && io.qparam_line_valid &&
    shadowValid &&
    !consumeShadow

  io.sync_alert :=
    coreAlert ||
    laneMismatch ||
    firstTileWithoutShadow ||
    laterTileWithoutActive ||
    unexpectedResponse
}
