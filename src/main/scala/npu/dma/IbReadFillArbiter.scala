package npu.dma

import chisel3._
import chisel3.util._

/** Conservative single-ported IB adapter: grant at most one backing read or
  * committed fill per cycle, with round-robin fairness and a held reservation
  * under backpressure. A banked backend may replace it with bank-aware grants.
  * Read responses remain ordered on IbBurstReader's independent return port.
  */
class IbReadFillArbiter extends Module {
  val io = IO(new Bundle {
    val read = Flipped(Decoupled(new IbWordRead))
    val fill = Flipped(Decoupled(new IbFillWrite))
    val backingRead = Decoupled(new IbWordRead)
    val backingFill = Decoupled(new IbFillWrite)
  })
  val preferFill = RegInit(false.B)
  val locked = RegInit(false.B)
  val lockedFill = Reg(Bool())
  val chooseFill = Mux(locked, lockedFill, io.fill.valid && (!io.read.valid || preferFill))
  io.backingRead.bits := io.read.bits
  io.backingFill.bits := io.fill.bits
  io.backingRead.valid := io.read.valid && !chooseFill
  io.backingFill.valid := io.fill.valid && chooseFill
  io.read.ready := !chooseFill && io.backingRead.ready
  io.fill.ready := chooseFill && io.backingFill.ready
  val selectedValid = Mux(chooseFill, io.fill.valid, io.read.valid)
  val selectedReady = Mux(chooseFill, io.backingFill.ready, io.backingRead.ready)
  when(selectedValid && !selectedReady) { locked := true.B; lockedFill := chooseFill }
  when(selectedValid && selectedReady) { locked := false.B; preferFill := !chooseFill }
  when(locked) { assert(selectedValid, "IB backing command withdrawn under backpressure") }
}
