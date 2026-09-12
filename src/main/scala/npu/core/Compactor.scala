package npu.core

import chisel3._

// Online M=1 extraction: retain row0 of each tile, drop rows1..15.
// No tile collection or data storage. Hold compact_en until the tile drains.
class Compactor(val numLines: Int = 16) extends Module {
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
  val fire = io.in_valid && !io.stall && !io.soft_reset
  io.out_vec := io.in_vec
  io.out_valid := fire && (!io.compact_en || row === 0.U)
  io.busy := row =/= 0.U
  io.sync_alert := !io.stall && !io.soft_reset && io.busy && !io.compact_en

  when(io.soft_reset) {
    row := 0.U
  }.elsewhen(io.compact_en && fire) {
    row := row + 1.U
  }
}
