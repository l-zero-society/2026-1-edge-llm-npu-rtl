package npu.core

import chisel3._
import chisel3.util._

object LutTarget {
  val ACT = 0.U(3.W)
  val EXP = 1.U(3.W)
  val SCALE = 2.U(3.W)
  val SIN = 3.U(3.W)
  val COS = 4.U(3.W)
  val IDLE = 5.U(3.W)
}

// WB configuration stream, always 16B per accepted beat. start is sampled on
// an unstalled idle edge; data may start on the following cycle. done pulses
// for one clock after the final write's one-cycle ACK has been observed.
class LutProgrammingController(
  val actIndexBits: Int = 10,
  val normIndexBits: Int = 8,
  val ropeIndexBits: Int = 10
) extends Module {
  val writeBits = 128
  val actBeats = (1 << actIndexBits) * 8 / writeBits
  val normBeats = (1 << normIndexBits) * 16 / writeBits
  val ropeBeats = (1 << ropeIndexBits) * 16 / writeBits
  require(Seq(actBeats, normBeats, ropeBeats).forall(_ > 1))
  val actAddrBits = log2Ceil(actBeats)
  val normAddrBits = log2Ceil(normBeats)
  val ropeAddrBits = log2Ceil(ropeBeats)
  private val addrBits = Seq(actAddrBits, normAddrBits, ropeAddrBits).max

  val io = IO(new Bundle {
    val start = Input(Bool())
    val lut_write = Input(UInt(5.W)) // [4:0] = Act, Exp, Scale, Sin, Cos
    val in_data = Input(UInt(writeBits.W))
    val in_valid = Input(Bool())
    val in_ready = Output(Bool())
    val stall = Input(Bool())
    val soft_reset = Input(Bool())
    val busy = Output(Bool())
    val done = Output(Bool())
    val alert = Output(Bool())
    val target = Output(UInt(3.W))
    val target_addr = Output(UInt(addrBits.W))
    val act_wr_en = Output(Bool())
    val exp_wr_en = Output(Bool())
    val scale_wr_en = Output(Bool())
    val sin_wr_en = Output(Bool())
    val cos_wr_en = Output(Bool())
    val act_wr_addr = Output(UInt(actAddrBits.W))
    val norm_wr_addr = Output(UInt(normAddrBits.W))
    val rope_wr_addr = Output(UInt(ropeAddrBits.W))
    val act_wr_data = Output(Vec(16, UInt(8.W)))
    val wide_wr_data = Output(Vec(8, UInt(16.W)))
  })

  val idle :: stream :: waitAck :: Nil = Enum(3)
  val state = RegInit(idle)
  val selection = RegInit(0.U(5.W))
  val target = RegInit(LutTarget.IDLE)
  val address = RegInit(0.U(addrBits.W))
  val done = RegInit(false.B)
  def firstTarget(mask: UInt): UInt =
    MuxCase(LutTarget.IDLE, (0 until 5).map(i => mask(4 - i) -> i.U(3.W)))

  val remaining = selection & MuxLookup(target, 0.U(5.W))(Seq(
    LutTarget.ACT -> "b01111".U,
    LutTarget.EXP -> "b00111".U,
    LutTarget.SCALE -> "b00011".U,
    LutTarget.SIN -> "b00001".U
  ))
  val lastAddr = MuxLookup(target, (ropeBeats - 1).U(addrBits.W))(Seq(
    LutTarget.ACT -> (actBeats - 1).U(addrBits.W),
    LutTarget.EXP -> (normBeats - 1).U(addrBits.W),
    LutTarget.SCALE -> (normBeats - 1).U(addrBits.W)
  ))
  io.busy := state =/= idle
  io.done := done
  io.in_ready := state === stream && !io.stall && !io.soft_reset
  val fire = io.in_valid && io.in_ready
  io.alert := io.start && io.busy && !io.stall && !io.soft_reset
  io.target := target
  io.target_addr := address
  io.act_wr_en := fire && target === LutTarget.ACT
  io.exp_wr_en := fire && target === LutTarget.EXP
  io.scale_wr_en := fire && target === LutTarget.SCALE
  io.sin_wr_en := fire && target === LutTarget.SIN
  io.cos_wr_en := fire && target === LutTarget.COS
  io.act_wr_addr := address
  io.norm_wr_addr := address
  io.rope_wr_addr := address
  // byte0 is WB lane0 / bits[7:0]. UInt16 words are little-endian byte pairs.
  for (i <- 0 until 16) io.act_wr_data(i) := io.in_data(8 * i + 7, 8 * i)
  for (i <- 0 until 8) io.wide_wr_data(i) := io.in_data(16 * i + 15, 16 * i)

  done := false.B
  when(io.soft_reset) {
    state := idle
    selection := 0.U
    target := LutTarget.IDLE
    address := 0.U
  }.elsewhen(!io.stall) {
    when(state === idle && io.start) {
      selection := io.lut_write
      target := firstTarget(io.lut_write)
      address := 0.U
      when(io.lut_write.orR) { state := stream }
        .otherwise { done := true.B }
    }.elsewhen(fire) {
      when(address === lastAddr) {
        when(remaining.orR) {
          target := firstTarget(remaining)
          address := 0.U
        }.otherwise { state := waitAck }
      }.otherwise { address := address + 1.U }
    }.elsewhen(state === waitAck) {
      // Writes commit independently of stall. Retain pending completion during
      // stall and report it on the next enabled edge (never before the ACK).
      state := idle
      target := LutTarget.IDLE
      done := true.B
    }
  }
}
