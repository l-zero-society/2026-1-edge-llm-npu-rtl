package npu.dma

import chisel3._
import chisel3.util._

/** One segment outstanding; pipelined ordered backing reads, one 64B word/cycle.
  * Backing response must be stable until accepted and ordered with wordRead.
  * Port/bank arbitration with fill writes belongs to the backing adapter, using
  * wordRead.ready/fill.ready. No compute stall enters this module.
  */
class IbBurstReader(p: DmaReadParams = DmaReadParams()) extends Module {
  val io = IO(new Bundle {
    val burst = Flipped(new ReadBurstPort(p))
    val wordRead = Decoupled(new IbWordRead)
    val wordResponse = Flipped(Decoupled(UInt(512.W)))
  })
  val active = RegInit(false.B)
  val plan = Reg(new ReadPlan(p))
  val issued = RegInit(0.U(13.W))
  val metadata = Module(new Queue(new ReadBurstResponse, 2, pipe = true))
  io.burst.request.ready := !active
  when(io.burst.request.fire) {
    plan := io.burst.request.bits.plan
    active := true.B
    issued := 0.U
    assert(io.burst.request.bits.plan.address(3, 0) === 0.U)
    assert(io.burst.request.bits.plan.payloadBytes > 0.U)
    assert(io.burst.request.bits.plan.payloadBytes(3, 0) === 0.U)
  }
  val address = plan.address + issued
  val firstLane = address(5, 4)
  val remaining = plan.payloadBytes - issued
  val room = 64.U(7.W) - address(5, 0)
  val bytes = Mux(remaining < room, remaining, room)
  val lanes = bytes >> 4
  io.wordRead.valid := active && issued < plan.payloadBytes && metadata.io.enq.ready
  io.wordRead.bits.wordAddress := address & "hffffffffffffffc0".U
  io.wordRead.bits.laneMask := (((1.U(5.W) << lanes) - 1.U) << firstLane)(3, 0)
  metadata.io.enq.valid := io.wordRead.fire
  metadata.io.enq.bits := 0.U.asTypeOf(new ReadBurstResponse)
  metadata.io.enq.bits.identity := plan.identity
  metadata.io.enq.bits.payloadOffset := issued
  metadata.io.enq.bits.firstLane := firstLane
  metadata.io.enq.bits.laneCount := lanes
  metadata.io.enq.bits.segmentLast := issued + bytes === plan.payloadBytes
  when(io.wordRead.fire) { issued := issued + bytes }

  io.burst.response.valid := metadata.io.deq.valid && io.wordResponse.valid
  io.burst.response.bits := metadata.io.deq.bits
  io.burst.response.bits.data := io.wordResponse.bits
  metadata.io.deq.ready := io.burst.response.ready && io.wordResponse.valid
  io.wordResponse.ready := io.burst.response.ready && metadata.io.deq.valid
  when(io.burst.response.fire && io.burst.response.bits.segmentLast) { active := false.B }
}
