package npu.core

import chisel3._
import chisel3.util._

// M=1 expansion: row0 transfers directly, followed by fifteen zero rows.
// The source supplies the next compact vector only when busy is false.
class ZeroPadder(val numLines: Int = 16) extends Module {
  require(numLines == 16)
  val io = IO(new Bundle {
    val in_vec = Input(Vec(numLines, UInt(8.W)))
    val in_valid = Input(Bool())
    val compact_en = Input(Bool())
    val stall = Input(Bool())
    val soft_reset = Input(Bool())
    val out_vec = Output(Vec(numLines, UInt(8.W)))
    val out_valid = Output(Bool())
    val busy = Output(Bool())
    val sync_alert = Output(Bool())
  })

  val row = RegInit(0.U(4.W))
  val padding = row =/= 0.U
  val run = !io.stall && !io.soft_reset
  io.out_vec := Mux(io.compact_en && padding,
    VecInit(Seq.fill(numLines)(0.U(8.W))), io.in_vec)
  io.out_valid := run && (io.in_valid || (io.compact_en && padding))
  io.busy := padding
  io.sync_alert := run && padding && (!io.compact_en || io.in_valid)

  when(io.soft_reset) {
    row := 0.U
  }.elsewhen(io.compact_en && io.out_valid) {
    row := row + 1.U
  }
}
