package npu.dma

import chisel3._
import chisel3.util._

/** Metadata/coverage owner. Physical storage lives behind the durable write ACK.
  * Destructive control is globally drained; Release has a scoped consumer fence.
  * FinishWriter also needs producer ACK drain.
  */
class IbPageTable(p: DmaReadParams) extends Module {
  val io = IO(new Bundle {
    val command = Flipped(Decoupled(new IbPageCommand(p)))
    val result = Decoupled(new IbPageResult(p))
    val controlDrained = Input(Bool())
    val writersDrained = Input(Bool())
    val fillDrained = Input(Bool())
    val rowAdvance = Flipped(Valid(new IbRowAdvance(p)))
    val commits = Flipped(Vec(4,Valid(new IbFillWrite)))
    val commitFinal = Input(Bool()) // final derived write of the DRAM raw beat
    val acquire = Flipped(Valid(new IbReaderLease(p)))
    val release = Flipped(Valid(new IbReaderLease(p)))
    val pages = Output(Vec(p.cachePages, new IbPageState))
  })
  val pages = RegInit(VecInit(Seq.fill(p.cachePages)(0.U.asTypeOf(new IbPageState))))
  io.pages := pages
  val resultValid = RegInit(false.B)
  val result = Reg(new IbPageResult(p))
  io.result.valid := resultValid; io.result.bits := result
  when(io.result.fire) { resultValid := false.B }
  val finish = io.command.bits.op === IbPageOp.FinishWriter.U
  val releaseLease = io.command.bits.op === IbPageOp.Release.U
  // Release neither retags storage nor touches writer ownership/coverage. It
  // needs the scoped consumer fence and this page's approved readers drained.
  val releaseReady = io.controlDrained &&
    (io.command.bits.page >= p.cachePages.U || pages(io.command.bits.page).readers === 0.U) &&
    !(io.acquire.valid && io.acquire.bits.page === io.command.bits.page)
  io.command.ready := !resultValid && Mux(releaseLease, releaseReady,
    io.writersDrained && (finish || io.controlDrained))
  when(io.command.fire) {
    val c = io.command.bits
    val old = pages(c.page)
    val m = c.replacement
    val exact = old.allocated && c.expectedGeneration === old.metadata.generation &&
      c.expectedContext === old.metadata.contextId && c.expectedEpoch === old.metadata.epoch &&
      c.expectedLogicalId === old.metadata.logicalId
    val end = m.canonicalStart +& m.validBytes
    val physicalEnd = m.ibPageBase +& 4096.U
    val rangeOK = m.canonicalStart(3, 0) === 0.U && m.ibPageBase(11, 0) === 0.U &&
      m.validBytes > 0.U && m.validBytes <= 4096.U && m.validBytes(3, 0) === 0.U &&
      !end(64) && !physicalEnd(64) && physicalEnd <= p.ibCapacityBytes.U && m.generation > 0.U
    val aliases = (0 until p.cachePages).map { i =>
      val o = pages(i)
      val same = o.metadata.contextId === m.contextId && o.metadata.epoch === m.epoch &&
        o.metadata.logicalId === m.logicalId &&
        ((o.metadata.writer === IbWriter.Norm.U) === (m.writer === IbWriter.Norm.U))
      val overlap = m.canonicalStart < o.metadata.canonicalStart +& o.metadata.validBytes &&
        o.metadata.canonicalStart < end
      i.U =/= c.page && o.allocated && (o.metadata.ibPageBase === m.ibPageBase || (same && overlap))
    }.reduce(_ || _)
    val reusable = !old.allocated || (!old.writerOpen && !old.metadata.consumers.orR &&
      !old.metadata.keepWeight && old.readers === 0.U)
    val outputsClosed = pages.map(x => !x.allocated || x.metadata.writer === IbWriter.DramFill.U || !x.writerOpen).reduce(_ && _)
    val full = old.coverage === IbPageChecks.lengthMask(old.metadata.validBytes)
    val error = WireDefault(IbPageError.None.U(3.W))
    when(c.page >= p.cachePages.U || c.op > IbPageOp.Invalidate.U) { error := IbPageError.Range.U }
      .elsewhen(c.op === IbPageOp.Allocate.U) {
        when(!rangeOK || m.generation <= old.metadata.generation ||
          (m.writer === IbWriter.DramFill.U && !m.dramReadable) ||
          (m.writer =/= IbWriter.DramFill.U && (m.consumers.orR || m.keepWeight))) { error := IbPageError.Range.U }
          .elsewhen(old.allocated && !exact) { error := IbPageError.Identity.U }
          .elsewhen(!reusable || (old.metadata.generation =/= 0.U && !outputsClosed)) { error := IbPageError.Lifetime.U }
          .elsewhen(aliases) { error := IbPageError.Alias.U }
      }.otherwise {
        when(!exact) { error := IbPageError.Identity.U }
          .elsewhen(old.readers =/= 0.U) { error := IbPageError.Lifetime.U }
          .elsewhen(c.op === IbPageOp.Rebind.U) {
            when(!old.pageValid || old.writerOpen || old.metadata.consumers.orR || !outputsClosed) { error := IbPageError.Lifetime.U }
              .elsewhen(!rangeOK || m.generation =/= old.metadata.generation || m.validBytes =/= old.metadata.validBytes ||
                m.ibPageBase =/= old.metadata.ibPageBase) { error := IbPageError.Range.U }
              .elsewhen(m.layout =/= old.metadata.layout) { error := IbPageError.Layout.U }
              .elsewhen(old.metadata.keepWeight && !m.keepWeight) { error := IbPageError.Lifetime.U }
              .elsewhen(aliases) { error := IbPageError.Alias.U }
          }.elsewhen(c.op === IbPageOp.FinishWriter.U) {
            when(!old.writerOpen || old.metadata.writer === IbWriter.DramFill.U) { error := IbPageError.Lifetime.U }
              .elsewhen(!full) { error := IbPageError.Incomplete.U }
          }.elsewhen(c.op === IbPageOp.AbortWriter.U && (!old.writerOpen || old.pageValid)) {
            error := IbPageError.Lifetime.U
          }.elsewhen(c.op === IbPageOp.Invalidate.U && !reusable) { error := IbPageError.Lifetime.U }
      }
    resultValid := true.B
    result.page := c.page; result.op := c.op; result.error := error
    when(error === 0.U) {
      switch(c.op) {
        is(IbPageOp.Allocate.U) {
          old := 0.U.asTypeOf(new IbPageState)
          old.allocated := true.B; old.metadata := m; old.writerOpen := true.B
        }
        is(IbPageOp.Rebind.U) { old.metadata := m } // retain data, generation and publication
        is(IbPageOp.Release.U) {
          old.metadata.consumers := old.metadata.consumers & ~c.releaseConsumers
          when(c.releaseWeight) { old.metadata.keepWeight := false.B }
        }
        is(IbPageOp.FinishWriter.U) { old.writerOpen := false.B; old.pageValid := true.B }
        is(IbPageOp.AbortWriter.U) { old.writerOpen := false.B; old.pageValid := false.B }
        is(IbPageOp.Invalidate.U) { old.allocated := false.B; old.pageValid := false.B; old.coverage := 0.U }
      }
    }
  }
  for (i <- 0 until p.cachePages) {
    val s = pages(i)
    when(s.pageValid && s.metadata.writer === IbWriter.DramFill.U && io.fillDrained && !io.command.fire) {
      s.writerOpen := false.B
    }
    val acq = io.acquire.valid && io.acquire.bits.page === i.U
    val rel = io.release.valid && io.release.bits.page === i.U
    when(acq) {
      assert(s.allocated && s.pageValid && s.metadata.consumers.orR)
      assert(io.acquire.bits.generation === s.metadata.generation)
    }
    when(rel) { assert(s.readers > 0.U && io.release.bits.generation === s.metadata.generation) }
    when(acq || rel) { s.readers := s.readers + acq.asUInt - rel.asUInt }
    val committedHere = io.commits.map(w => w.valid && w.bits.page === i.U)
    assert(PopCount(committedHere) <= 1.U, "one allocation has one writer owner")
    when(committedHere.reduce(_||_)) {
      val w = Mux1H(committedHere,io.commits.map(_.bits))
      val offset = w.wordAddress - s.metadata.ibPageBase
      assert(s.allocated && s.writerOpen && w.generation === s.metadata.generation)
      assert(IbPageChecks.identity(s.metadata, w.identity))
      assert(w.wordAddress >= s.metadata.ibPageBase && offset < 4096.U && w.wordAddress(5, 0) === 0.U)
      assert(w.laneMask.orR)
      when(s.metadata.writer =/= IbWriter.DramFill.U) {
        assert(!s.metadata.consumers.orR && !s.metadata.keepWeight && s.readers === 0.U)
      }
      val committed = (w.laneMask.asUInt << (offset >> 4)(7, 0))(255, 0)
      val mask = IbPageChecks.lengthMask(s.metadata.validBytes)
      assert((committed & ~mask) === 0.U, "padding cannot acquire coverage")
      val next = s.coverage | committed
      s.coverage := next
      when(next === mask && io.commitFinal && s.metadata.writer === IbWriter.DramFill.U) {
        s.pageValid := true.B
      }
    }
    for (slot <- 0 until p.cachePages) {
      when(io.rowAdvance.valid && slot.U < io.rowAdvance.bits.pageCount && io.rowAdvance.bits.pageSlots(slot) === i.U) {
        val r = io.rowAdvance.bits
        val offset = (slot*4096).U
        val length = Mux(r.validBytes > offset, Mux(r.validBytes-offset > 4096.U,4096.U,r.validBytes-offset),0.U)
        assert(s.allocated && IbPageChecks.identity(s.metadata,r.identity) && (s.readers === 0.U || (s.readers === 1.U && rel)))
        assert(s.metadata.writer === IbWriter.DramFill.U && s.metadata.consumers === 1.U && !s.metadata.keepWeight)
        assert(!io.command.fire && !acq)
        assert(!(r.nextCanonical +& r.validBytes)(64))
        assert(s.metadata.generation =/= "hffffffff".U)
        for(other <- 0 until p.cachePages) {
          val o=pages(other)
          val managed=(0 until p.cachePages).map(k=>k.U<r.pageCount && r.pageSlots(k)===other.U).reduce(_||_)
          when(!managed && o.allocated && o.metadata.writer =/= IbWriter.Norm.U && IbPageChecks.identity(o.metadata,r.identity) && length =/= 0.U) {
            assert(!(r.nextCanonical+offset < o.metadata.canonicalStart +& o.metadata.validBytes &&
              o.metadata.canonicalStart < r.nextCanonical+offset+length), "row window overlaps another live allocation")
          }
        }
        s.metadata.canonicalStart := r.nextCanonical + offset
        s.metadata.validBytes := length
        s.metadata.generation := s.metadata.generation + 1.U
        s.coverage := 0.U; s.pageValid := false.B; s.writerOpen := length =/= 0.U
      }
    }

  }
}
