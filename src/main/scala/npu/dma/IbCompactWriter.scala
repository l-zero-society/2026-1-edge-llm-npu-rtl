package npu.dma

import chisel3._
import chisel3.util._

/** Input ready acknowledges ALL derived durable writes. The input is held
  * stable until then. Aligned full words take one write; crossing beats two.
  */
class IbCompactWriter extends Module {
  val io = IO(new Bundle {
    val input = Flipped(Decoupled(new IbCompactWrite))
    val write = Decoupled(new IbFillWrite)
  })
  val second = RegInit(false.B)
  val x = io.input.bits
  val firstLane = x.address(5, 4)
  val room = 4.U(3.W) - firstLane
  val firstCount = Mux(x.laneCount < room, x.laneCount, room)
  val rest = x.laneCount - firstCount
  val count = Mux(second, rest, firstCount)
  val lane = Mux(second, 0.U, firstLane)
  val data = Mux(second, x.data >> (firstCount << 7), x.data)
  val prefix = ((1.U(5.W) << count) - 1.U)(3, 0)
  val dataMask = Cat((0 until 4).reverse.map(i => Fill(128, prefix(i))))
  io.write.valid := io.input.valid
  io.write.bits.identity := x.identity
  io.write.bits.page := x.page
  io.write.bits.generation := x.generation
  io.write.bits.wordAddress := (x.address & "hffffffffffffffc0".U) + Mux(second, 64.U, 0.U)
  io.write.bits.data := ((data & dataMask) << (lane << 7))(511, 0)
  io.write.bits.laneMask := (prefix << lane)(3, 0)
  io.input.ready := io.write.ready && (second || rest === 0.U)
  when(io.write.fire && rest =/= 0.U && !second) { second := true.B }
  when(io.input.fire) { second := false.B }
  when(io.input.valid) {
    assert(x.laneCount > 0.U && x.laneCount <= 4.U && x.address(3, 0) === 0.U)
  }
}

/** Two commit-ACK writers share one port. Lock selection under backpressure;
  * using a plain combinational RR here could withdraw a stalled command.
  */
class IbWriteArbiter extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Vec(2, Decoupled(new IbFillWrite)))
    val out = Decoupled(new IbFillWrite)
  })
  val prefer = RegInit(false.B)
  val locked = RegInit(false.B)
  val held = Reg(Bool())
  val pick = Mux(locked, held, io.in(1).valid && (!io.in(0).valid || prefer))
  io.out.valid := io.in(pick).valid; io.out.bits := io.in(pick).bits
  for (i <- 0 until 2) io.in(i).ready := pick === i.U && io.out.ready
  when(io.out.valid && !io.out.ready) { locked := true.B; held := pick }
  when(io.out.fire) { locked := false.B; prefer := !pick }
}

/** Bounded output-writer adapter, not a DMA output writer. Producer requests
  * acquire one local slot; the result is emitted only after durable commit(s).
  */
class IbProducerAdapter(p: DmaReadParams) extends Module {
  val io = IO(new Bundle {
    val request = Flipped(Decoupled(new IbProducerWrite(p)))
    val result = Decoupled(new IbProducerResult)
    val pages = Input(Vec(p.cachePages, new IbPageState))
    val write = Decoupled(new IbFillWrite)
    val drained = Output(Bool())
  })
  val active = RegInit(false.B)
  val resultValid = RegInit(false.B)
  val request = Reg(new IbProducerWrite(p))
  val result = Reg(new IbProducerResult)
  val writer = Module(new IbCompactWriter)
  io.request.ready := !active && !resultValid
  io.result.valid := resultValid; io.result.bits := result
  io.drained := !active && !resultValid
  when(io.result.fire) { resultValid := false.B }
  val incoming = io.request.bits
  val s = io.pages(incoming.page)
  val end = incoming.offset +& (incoming.laneCount << 4)
  val legal = incoming.page < p.cachePages.U && s.allocated && s.writerOpen &&
    s.metadata.writer === IbWriter.Output.U && !s.metadata.consumers.orR &&
    !s.metadata.keepWeight && s.readers === 0.U && incoming.generation === s.metadata.generation &&
    IbPageChecks.identity(s.metadata, incoming.identity) && incoming.offset(3, 0) === 0.U &&
    incoming.laneCount > 0.U && incoming.laneCount <= 4.U && end <= s.metadata.validBytes
  when(io.request.fire) {
    request := incoming
    when(legal) { active := true.B }.otherwise {
      resultValid := true.B; result.identity := incoming.identity; result.error := true.B
    }
  }
  val current = io.pages(request.page)
  writer.io.input.valid := active
  writer.io.input.bits.identity := request.identity
  writer.io.input.bits.page := request.page
  writer.io.input.bits.generation := request.generation
  writer.io.input.bits.address := current.metadata.ibPageBase + request.offset
  writer.io.input.bits.laneCount := request.laneCount
  writer.io.input.bits.data := request.data
  io.write <> writer.io.write
  when(writer.io.input.fire) {
    active := false.B; resultValid := true.B
    result.identity := request.identity; result.error := false.B
  }
}
