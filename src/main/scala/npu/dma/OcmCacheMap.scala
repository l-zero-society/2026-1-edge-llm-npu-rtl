package npu.dma

import chisel3._
import chisel3.util._

/** Compiler-chosen placement. pageSlots refer to allocated page-table entries,
  * whose ibPageBase values need not be contiguous. Capacity is instruction-fixed.
  */
class OcmCacheConfig(p: DmaReadParams) extends Bundle {
  val target = UInt(3.W); val stream = UInt(3.W)
  val contextId = UInt(16.W); val epoch = UInt(16.W); val logicalId = UInt(16.W)
  val mappedStartAddr = UInt(64.W); val mappedSize = UInt(32.W)
  val rowBytes = UInt(46.W)
  val localReuse = Bool(); val rollingRows = Bool()
  val pageCount = UInt((p.regionBits + 1).W)
  val pageSlots = Vec(p.cachePages, UInt(p.regionBits.W))
}
class IbRowAdvance(p: DmaReadParams) extends Bundle {
  val identity = new ReadIdentity
  val nextCanonical = UInt(64.W); val validBytes = UInt(32.W)
  val pageCount = UInt((p.regionBits + 1).W)
  val pageSlots = Vec(p.cachePages, UInt(p.regionBits.W))
}
class CacheLookup extends Bundle {
  val identity = new ReadIdentity; val stream = UInt(3.W)
  val address = UInt(64.W); val bytes = UInt(13.W)
}
class CacheResolution(p: DmaReadParams) extends Bundle {
  val bytes = UInt(13.W); val hit = Bool(); val unavailable = Bool()
  val fill = Bool(); val address = UInt(64.W); val fillAddress = UInt(64.W)
  val page = UInt(p.regionBits.W); val generation = UInt(32.W)
}
/** Static OCM/stream map owner. WB has independent W1 and W2 entries. Lookup
  * observes committed page state; it never allocates/replaces automatically.
  */
class OcmCacheMap(p: DmaReadParams) extends Module {
  val io = IO(new Bundle {
    val config = Flipped(Valid(new OcmCacheConfig(p)))
    val pages = Input(Vec(p.cachePages, new IbPageState))
    val query = Input(Vec(ReadTarget.Count, new CacheLookup))
    val result = Output(Vec(ReadTarget.Count, new CacheResolution(p)))
    val rowCommit = Flipped(Valid(new ReadPlan(p)))
    val rowAdvance = Output(Valid(new IbRowAdvance(p)))
    val transitions = Output(UInt(32.W))
    val windows = Output(Vec(ReadStream.Count, new OcmCacheConfig(p)))
  })
  val configured = RegInit(VecInit(Seq.fill(ReadStream.Count)(false.B)))
  val windows = Reg(Vec(ReadStream.Count, new OcmCacheConfig(p)))
  val row = RegInit(0.U(32.W)); val transitions = RegInit(0.U(32.W))
  io.transitions := transitions; io.windows := windows
  when(io.config.valid) {
    val c = io.config.bits; val end = c.mappedStartAddr +& c.mappedSize
    assert(c.stream < ReadStream.Count.U && c.target < ReadTarget.Count.U)
    assert(c.mappedStartAddr(3,0) === 0.U && c.mappedSize(3,0) === 0.U && c.rowBytes(3,0) === 0.U && !end(64))
    assert(c.pageCount <= p.cachePages.U && c.mappedSize <= c.pageCount * 4096.U)
    assert(!c.rollingRows || (c.stream === ReadStream.Input.U && c.target === ReadTarget.UB.U && !c.localReuse))
    val valid = Mux(c.mappedSize < c.rowBytes, c.mappedSize, c.rowBytes)
    for (i <- 0 until p.cachePages) {
      when(i.U < c.pageCount) {
        val pg = io.pages(c.pageSlots(i)); val offset = (i * 4096).U
        val length = Mux(valid > offset, Mux(valid - offset > 4096.U, 4096.U, valid - offset), 0.U)
        assert(c.pageSlots(i) < p.cachePages.U && pg.allocated && pg.metadata.writer =/= IbWriter.Norm.U)
        assert(pg.metadata.contextId === c.contextId && pg.metadata.epoch === c.epoch && pg.metadata.logicalId === c.logicalId)
        assert(pg.metadata.canonicalStart === c.mappedStartAddr + offset && pg.metadata.validBytes === length)
        when(c.rollingRows) { assert(pg.metadata.writer === IbWriter.DramFill.U && pg.metadata.dramReadable && pg.metadata.consumers === 1.U && !pg.metadata.keepWeight) }
        for (j <- 0 until i) { when(j.U < c.pageCount) { assert(c.pageSlots(i) =/= c.pageSlots(j)) } }
        for (s <- 0 until ReadStream.Count; j <- 0 until p.cachePages) {
          when(configured(s) && s.U =/= c.stream && j.U < windows(s).pageCount) {
            assert(c.pageSlots(i) =/= windows(s).pageSlots(j), "live static windows cannot share allocation ownership")
          }
        }
      }
    }
    configured(c.stream) := true.B; windows(c.stream) := c
    when(c.stream === ReadStream.Input.U) { row := 0.U; transitions := 0.U }
  }
  val completed = io.rowCommit.bits
  val w = windows(ReadStream.Input)
  val advance = io.rowCommit.valid && completed.stream === ReadStream.Input.U && completed.rowLastUse &&
    completed.hasNextRow && configured(ReadStream.Input) && w.rollingRows && w.mappedSize =/= 0.U
  io.rowAdvance.valid := advance
  io.rowAdvance.bits.identity := completed.identity
  io.rowAdvance.bits.nextCanonical := completed.nextRowBase
  io.rowAdvance.bits.validBytes := Mux(w.mappedSize < completed.nextRowBytes, w.mappedSize, completed.nextRowBytes)
  io.rowAdvance.bits.pageCount := w.pageCount; io.rowAdvance.bits.pageSlots := w.pageSlots
  when(advance) {
    assert(!(completed.nextRowBase +& w.mappedSize)(64))
    assert(completed.row === row, "a row transition can commit only once and in order")
    windows(ReadStream.Input).mappedStartAddr := completed.nextRowBase
    windows(ReadStream.Input).rowBytes := completed.nextRowBytes
    row := row + 1.U; transitions := transitions + 1.U
  }
  for (t <- 0 until ReadTarget.Count) {
    val q = io.query(t); val cfg = windows(q.stream)
    val matches = Wire(Vec(p.cachePages, Bool())); val blocked = Wire(Vec(p.cachePages, Bool()))
    val boundaries = Wire(Vec(p.cachePages, UInt(13.W)))
    for (r <- 0 until p.cachePages) {
      val pg = io.pages(r); val m = pg.metadata
      val canonical = pg.allocated && m.writer =/= IbWriter.Norm.U
      val same = canonical && IbPageChecks.identity(m,q.identity)
      val relative = q.address - m.canonicalStart
      val inRange = canonical && q.address >= m.canonicalStart && relative < m.validBytes
      matches(r) := same && inRange; blocked(r) := inRange && !m.dramReadable
      val before = q.address < m.canonicalStart && (same || (canonical && !m.dramReadable))
      val distance = m.canonicalStart - q.address
      boundaries(r) := Mux(matches(r), Mux(q.bytes < m.validBytes-relative,q.bytes,m.validBytes-relative),
        Mux(before && distance < q.bytes,distance,q.bytes))
    }
    val page = PriorityEncoder(matches); val pg = io.pages(page); val m = pg.metadata
    val relative = q.address - m.canonicalStart
    val hit = matches.asUInt.orR && pg.pageValid && m.consumers.orR
    val valid = Mux(cfg.mappedSize < cfg.rowBytes,cfg.mappedSize,cfg.rowBytes)
    val windowRelative = q.address - cfg.mappedStartAddr
    val inside = q.address >= cfg.mappedStartAddr && windowRelative < valid
    val index = (windowRelative >> 12)(p.regionBits-1,0)
    val assigned = inside && cfg.pageSlots(index) === page
    val population = !configured(q.stream) || (!cfg.localReuse && cfg.mappedSize =/= 0.U &&
      cfg.target === q.identity.target && cfg.contextId === q.identity.contextId && cfg.epoch === q.identity.epoch && cfg.logicalId === q.identity.logicalId && assigned)
    io.result(t).bytes := boundaries.reduce((a,b) => Mux(a<b,a,b))
    io.result(t).hit := hit; io.result(t).unavailable := !hit && blocked.asUInt.orR
    io.result(t).fill := matches.asUInt.orR && !pg.pageValid && pg.writerOpen &&
      m.writer === IbWriter.DramFill.U && m.dramReadable && population
    io.result(t).page := page; io.result(t).generation := m.generation
    io.result(t).address := Mux(hit,m.ibPageBase+relative,q.address)
    io.result(t).fillAddress := m.ibPageBase+relative
  }
}
