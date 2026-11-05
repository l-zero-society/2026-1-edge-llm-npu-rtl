package npu.dma

import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable

/** Production IB burst controller is included; DRAM/TL and IB SRAM live only
  * in the Scala testbench. No dependency on UB/WB/RF or Rocket Chip.
  */
class DmaReadHarness(val p: DmaReadParams = DmaReadParams(pagesPerRegion = 2),
                     sharedIbPort: Boolean = false) extends Module {
  val io = IO(new Bundle {
    val config = Flipped(Decoupled(new ReadStreamConfig))
    val mapping = Flipped(Decoupled(new IbMappingUpdate(p)))
    val refill = Flipped(Decoupled(new RefillRequest))
    val dram = new ReadBurstPort(p)
    val fill = Decoupled(new IbFillWrite)
    val memory = Vec(ReadTarget.Count, Decoupled(new MemoryReadData))
    val done = Vec(ReadTarget.Count, Decoupled(new RefillDone))
    val acceptedPlan = Output(Vec(2, Valid(new ReadPlan(p))))
    val nextReadRequest = Output(Vec(ReadTarget.Count, Valid(new ReadPlan(p))))
    val sourceAvailable = Output(Vec(2, Bool()))
    val schedulePermit = Input(Vec(ReadTarget.Count, Bool()))
    val drained = Output(Bool())
    val wordRead = Decoupled(new IbWordRead)
    val wordResponse = Flipped(Decoupled(UInt(512.W)))
  })
  val engine = Module(new DmaReadEngine(p))
  val ib = Module(new IbBurstReader(p))
  engine.io.config <> io.config; engine.io.mapping <> io.mapping
  engine.io.refill <> io.refill; io.dram <> engine.io.dram
  io.memory <> engine.io.memory; io.done <> engine.io.done
  io.acceptedPlan := engine.io.acceptedPlan; io.drained := engine.io.drained
  io.nextReadRequest := engine.io.nextReadRequest
  io.sourceAvailable := engine.io.sourceAvailable
  engine.io.schedulePermit := io.schedulePermit
  ib.io.burst <> engine.io.ib
  if (sharedIbPort) {
    val arbiter = Module(new IbReadFillArbiter)
    arbiter.io.read <> ib.io.wordRead; arbiter.io.fill <> engine.io.fill
    io.wordRead <> arbiter.io.backingRead; io.fill <> arbiter.io.backingFill
    assert(!(io.wordRead.valid && io.fill.valid), "single IB port collision")
  } else {
    io.wordRead <> ib.io.wordRead; io.fill <> engine.io.fill
  }
  ib.io.wordResponse <> io.wordResponse
}

class DmaReadTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "DMA read path"

  // Address-dependent bytes, independent of the DUT traversal/source resolver.
  private def dramByte(a: BigInt): Int = ((a * 29 + (a >> 8) * 17 + (a >> 12) * 11 + 7) & 255).toInt
  private def expected(addresses: Seq[BigInt]): Vector[Int] = addresses.map(dramByte).toVector
  private def span(a: BigInt, n: Int): Vector[BigInt] = Vector.tabulate(n)(a + _)
  private case class Id(target: Int, context: Int, epoch: Int, refill: Int)
  private case class Plan(id: Id, stream: Int, phase: Int, dest: BigInt, canonical: BigInt,
                          address: BigInt, bytes: Int, ib: Boolean, fill: Boolean,
                          chunkLast: Boolean, streamLast: Boolean)
  private case class Beat(id: Id, data: BigInt, offset: Int, first: Int, lanes: Int, last: Boolean)
  private case class Delivery(id: Id, dest: BigInt, bytes: Vector[Int], mask: Int,
                              chunkLast: Boolean, streamLast: Boolean)
  private case class Done(id: Id, bytes: Int, error: Boolean)
  private case class Config(stream: Int = ReadStream.Input, base: BigInt = 0x1000,
                            rows: Int = 1, passes: Int = 1, tiles: Int = 1,
                            rowStride: BigInt = 0, passStride: BigInt = 0,
                            tileStride: BigInt = 256, tileBytes: Int = 256, tail: Int = 256,
                            rowBoundary: Boolean = false, ibOnly: Boolean = false,
                            mode: Int = ReadSupplyMode.Stream)

  private class Sim(val d: DmaReadHarness, val stalls: Boolean = true, val maxGetBytes: Int = 4096) {
    require(maxGetBytes >= 64 && maxGetBytes <= 4096 && (maxGetBytes & (maxGetBytes - 1)) == 0)
    var cycle = 0
    var fillAllow = true
    var ocmAllow = true
    var dramAllow = true
    var backingAllow = true
    val ib = mutable.Map.empty[BigInt, Int]
    val plans = mutable.ArrayBuffer.empty[Plan]
    val dramRequests = mutable.ArrayBuffer.empty[Plan]
    val gets = mutable.ArrayBuffer.empty[(BigInt, Int)]
    val fetchWindows = mutable.ArrayBuffer.empty[(Id, BigInt, BigInt)]
    val rawWords = mutable.ArrayBuffer.empty[(Id, BigInt, Int, Int)]
    val getEnds = mutable.ArrayBuffer.empty[(Id, BigInt)]
    val deliveries = mutable.ArrayBuffer.empty[Delivery]
    val dones = mutable.ArrayBuffer.empty[Done]
    val writes = mutable.ArrayBuffer.empty[(Id, BigInt, Int)]
    var simultaneousFull = 0
    var consecutiveFull = 0
    private var previousFull = false
    private val dramQueue = mutable.Queue.empty[(Int, Beat)]
    private val backingQueue = mutable.Queue.empty[(Int, BigInt)]
    private var heldDram = Option.empty[Beat]
    private var heldBacking = Option.empty[BigInt]
    private val heldOutputs = mutable.Map.empty[String, Seq[BigInt]]

    d.io.config.valid.poke(false.B); d.io.mapping.valid.poke(false.B)
    d.io.refill.valid.poke(false.B)
    d.io.dram.response.valid.poke(false.B); d.io.wordResponse.valid.poke(false.B)
    d.io.dram.request.ready.poke(false.B); d.io.fill.ready.poke(false.B)
    d.io.wordRead.ready.poke(false.B)
    for (t <- 0 until ReadTarget.Count) {
      d.io.memory(t).ready.poke(false.B); d.io.done(t).ready.poke(false.B)
      d.io.schedulePermit(t).poke(true.B)
    }
    def b(x: Bool): Boolean = x.peek().litToBoolean
    def u(x: UInt): BigInt = x.peek().litValue
    def identity(x: ReadIdentity): Id = Id(u(x.target).toInt, u(x.contextId).toInt, u(x.epoch).toInt, u(x.refillId).toInt)
    def plan(x: ReadPlan): Plan = Plan(identity(x.identity), u(x.stream).toInt, u(x.phase).toInt,
      u(x.destinationOffset), u(x.canonicalAddress), u(x.address), u(x.payloadBytes).toInt,
      b(x.sourceIB), b(x.fill), b(x.chunkLast), b(x.streamLast))
    private def idPoke(x: ReadIdentity, id: Id): Unit = {
      x.target.poke(id.target.U); x.contextId.poke(id.context.U)
      x.epoch.poke(id.epoch.U); x.refillId.poke(id.refill.U)
    }
    private def idSnapshot(id: Id): Seq[BigInt] = Seq(id.target, id.context, id.epoch, id.refill).map(BigInt(_))
    private def stability(key: String, valid: Boolean, ready: Boolean, value: Seq[BigInt]): Unit = {
      heldOutputs.get(key).foreach(old => assert(valid && old == value, s"unstable $key at cycle $cycle"))
      if (valid && !ready) heldOutputs(key) = value else heldOutputs.remove(key)
    }
    // Fetch a 64B-expanded readable backing window. Get size and raw beat size
    // are independent: even a 4KiB Get emits ordered 64B words, not one beat.
    private def enqueueDram(p: Plan): Unit = {
      assert(p.bytes > 0 && p.address % 16 == 0 && p.bytes % 16 == 0)
      val logicalEnd = p.address + p.bytes
      val fetchStart = p.address / 64 * 64
      val fetchEnd = (logicalEnd + 63) / 64 * 64
      fetchWindows += ((p.id, fetchStart, fetchEnd))
      val supported = Iterator.iterate(maxGetBytes)(_ / 2).takeWhile(_ >= 64).toVector
      var a = fetchStart
      var ordinal = 0
      while (a < fetchEnd) {
        val size = supported.find(n => a % n == 0 && a + n <= fetchEnd).get
        assert((size & (size - 1)) == 0 && a % size == 0)
        assert(a >= fetchStart && a + size <= fetchEnd, "Get outside expanded window")
        assert(!supported.exists(n => n > size && a % n == 0 && a + n <= fetchEnd), "non-maximal Get")
        gets += ((a, size))
        for (word <- 0 until size by 64) {
          val wordAddress = a + word
          val start = wordAddress.max(p.address)
          val end = (wordAddress + 64).min(logicalEnd)
          val first = ((start - wordAddress) / 16).toInt
          val lanes = ((end - start) / 16).toInt
          val offset = (start - p.address).toInt
          assert(lanes > 0 && lanes <= 4)
          val raw = (0 until 64).foldLeft(BigInt(0)) { (v, i) =>
            // Poison padding is readable but must never reach OCM/IB coverage.
            val laneByte = if (wordAddress + i >= start && wordAddress + i < end) dramByte(wordAddress + i) else 0xde
            v | (BigInt(laneByte) << (8 * i))
          }
          val beat = Beat(p.id, raw, offset, first, lanes, wordAddress + 64 == fetchEnd)
          rawWords += ((p.id, wordAddress, first, lanes))
          if (word + 64 == size) getEnds += ((p.id, wordAddress))
          dramQueue.enqueue((cycle + (if (stalls) 3 + ordinal % 3 else 1), beat))
          ordinal += 1
        }
        a += size
      }
    }
    def tick(): Unit = {
      assert(cycle < 30000, "global test timeout")
      d.io.dram.request.ready.poke((dramAllow && (!stalls || cycle % 5 != 1)).B)
      d.io.wordRead.ready.poke((backingAllow && (!stalls || cycle % 7 != 2)).B)
      d.io.fill.ready.poke((fillAllow && (!stalls || cycle % 6 >= 3)).B)
      for (t <- 0 until ReadTarget.Count) {
        d.io.memory(t).ready.poke((ocmAllow && (!stalls || (cycle + t) % 5 < 3)).B)
        d.io.done(t).ready.poke((!stalls || cycle % 4 == 0).B)
      }
      if (heldDram.isEmpty && dramQueue.headOption.exists(_._1 <= cycle) && (!stalls || cycle % 4 != 0)) {
        heldDram = Some(dramQueue.dequeue()._2)
      }
      d.io.dram.response.valid.poke(heldDram.nonEmpty.B)
      heldDram.foreach { beat =>
        val x = d.io.dram.response.bits
        idPoke(x.identity, beat.id); x.data.poke(beat.data.U)
        x.payloadOffset.poke(beat.offset.U); x.firstLane.poke(beat.first.U)
        x.laneCount.poke(beat.lanes.U); x.segmentLast.poke(beat.last.B)
      }
      if (heldBacking.isEmpty && backingQueue.headOption.exists(_._1 <= cycle) && (!stalls || cycle % 5 != 0)) {
        heldBacking = Some(backingQueue.dequeue()._2)
      }
      d.io.wordResponse.valid.poke(heldBacking.nonEmpty.B)
      heldBacking.foreach(v => d.io.wordResponse.bits.poke(v.U))

      val dramReq = d.io.dram.request
      val rp = plan(dramReq.bits.plan)
      stability("dramRequest", b(dramReq.valid), b(dramReq.ready),
        idSnapshot(rp.id) ++ Seq(rp.address, rp.bytes, rp.dest, rp.canonical, rp.phase, rp.stream,
          if (rp.fill) BigInt(1) else BigInt(0), if (rp.ib) BigInt(1) else BigInt(0),
          if (rp.chunkLast) BigInt(1) else BigInt(0), if (rp.streamLast) BigInt(1) else BigInt(0),
          u(dramReq.bits.plan.fillAddress), u(dramReq.bits.plan.region)))
      if (b(dramReq.valid) && b(dramReq.ready)) { dramRequests += rp; enqueueDram(rp) }
      val wr = d.io.wordRead
      stability("ibWord", b(wr.valid), b(wr.ready), Seq(u(wr.bits.wordAddress), u(wr.bits.laneMask)))
      if (b(wr.valid) && b(wr.ready)) {
        val a = u(wr.bits.wordAddress); val mask = u(wr.bits.laneMask).toInt
        assert(a % 64 == 0 && mask != 0)
        val raw = (0 until 64).foldLeft(BigInt(0)) { (v, i) =>
          val value = if ((mask & (1 << (i / 16))) != 0) {
            assert(ib.contains(a + i), s"read of uncommitted IB byte ${a + i}")
            ib(a + i)
          } else 0xb7
          v | (BigInt(value) << (8 * i))
        }
        backingQueue.enqueue((cycle + (if (stalls) 2 else 1), raw))
      }
      val fill = d.io.fill
      val fid = identity(fill.bits.identity)
      stability("fill", b(fill.valid), b(fill.ready),
        idSnapshot(fid) ++ Seq(u(fill.bits.wordAddress), u(fill.bits.data), u(fill.bits.laneMask)))
      if (b(fill.valid) && b(fill.ready)) {
        val a = u(fill.bits.wordAddress); val mask = u(fill.bits.laneMask).toInt
        val raw = u(fill.bits.data)
        for (i <- 0 until 64 if (mask & (1 << (i / 16))) != 0) {
          ib(a + i) = ((raw >> (8 * i)) & 255).toInt
          writes += ((fid, a + i, ib(a + i)))
        }
      }
      var fullCount = 0
      for (t <- 0 until ReadTarget.Count) {
        val m = d.io.memory(t); val x = m.bits
        val id = identity(x.identity)
        stability(s"memory$t", b(m.valid), b(m.ready), idSnapshot(id) ++
          Seq(u(x.destinationOffset), u(x.memoryData), u(x.memoryLaneValidMask),
            if (b(x.memoryChunkLast)) BigInt(1) else BigInt(0),
            if (b(x.memoryStreamLast)) BigInt(1) else BigInt(0)))
        if (b(m.valid) && b(m.ready)) {
          val mask = u(x.memoryLaneValidMask).toInt
          assert(Set(1, 3, 7, 15).contains(mask))
          val n = Integer.bitCount(mask) * 16
          val raw = u(x.memoryData)
          assert((raw >> (n * 8)) == 0, "inactive OCM lanes must be zero")
          val bytes = Vector.tabulate(n)(i => ((raw >> (8 * i)) & 255).toInt)
          deliveries += Delivery(id, u(x.destinationOffset), bytes, mask, b(x.memoryChunkLast), b(x.memoryStreamLast))
          if (mask == 15) fullCount += 1
        }
        val done = d.io.done(t)
        val doneId = identity(done.bits.identity)
        stability(s"done$t", b(done.valid), b(done.ready), idSnapshot(doneId) ++
          Seq(u(done.bits.committedBytes), if (b(done.bits.error)) BigInt(1) else BigInt(0)))
        if (b(done.valid) && b(done.ready)) dones += Done(doneId, u(done.bits.committedBytes).toInt, b(done.bits.error))
      }
      if (fullCount == 2) simultaneousFull += 1
      if (fullCount > 0 && previousFull) consecutiveFull += 1
      previousFull = fullCount > 0
      for (s <- 0 until 2 if b(d.io.acceptedPlan(s).valid)) plans += plan(d.io.acceptedPlan(s).bits)
      if (heldDram.nonEmpty && b(d.io.dram.response.ready)) heldDram = None
      if (heldBacking.nonEmpty && b(d.io.wordResponse.ready)) heldBacking = None
      d.clock.step(); cycle += 1
    }
    def waitFor(pred: => Boolean, limit: Int = 4000): Unit = {
      val start = cycle
      while (!pred && cycle - start < limit) tick()
      assert(pred, s"timeout after $limit cycles")
    }
    def configure(c: Config): Unit = {
      val x = d.io.config.bits
      x.stream.poke(c.stream.U); x.supplyMode.poke(c.mode.U); x.base.poke(c.base.U)
      x.rows.poke(c.rows.U); x.passes.poke(c.passes.U); x.tiles.poke(c.tiles.U)
      x.rowStride.poke(c.rowStride.U); x.passStride.poke(c.passStride.U)
      x.tileStride.poke(c.tileStride.U); x.tileBytes.poke(c.tileBytes.U); x.tailBytes.poke(c.tail.U)
      x.stopAtRowEnd.poke(c.rowBoundary.B); x.ibOnly.poke(c.ibOnly.B)
      d.io.config.valid.poke(true.B); waitFor(b(d.io.config.ready)); tick()
      d.io.config.valid.poke(false.B)
    }
    def map(index: Int = 0, canonical: BigInt = 0x1000, physical: BigInt = 0x8000,
            pages: Int = 2, context: Int = 1, epoch: Int = 1): Unit = {
      val x = d.io.mapping.bits
      x.index.poke(index.U); x.mapping.valid.poke(true.B)
      x.mapping.canonicalBase.poke(canonical.U); x.mapping.ibBase.poke(physical.U)
      x.mapping.pageCount.poke(pages.U); x.mapping.contextId.poke(context.U); x.mapping.epoch.poke(epoch.U)
      d.io.mapping.valid.poke(true.B); waitFor(b(d.io.mapping.ready)); tick()
      d.io.mapping.valid.poke(false.B)
    }
    def issue(stream: Int = 0, target: Int = 0, bytes: Int = 256, refill: Int = 1,
              context: Int = 1, epoch: Int = 1, phase: Int = 0, dest: Int = 0): Unit = {
      val x = d.io.refill.bits
      x.stream.poke(stream.U); x.target.poke(target.U); x.payloadBytes.poke(bytes.U)
      x.refillId.poke(refill.U); x.contextId.poke(context.U); x.epoch.poke(epoch.U)
      x.phase.poke(phase.U); x.destinationOffset.poke(dest.U)
      d.io.refill.valid.poke(true.B); waitFor(b(d.io.refill.ready)); tick()
      d.io.refill.valid.poke(false.B)
    }
    def finish(refill: Int): Done = {
      waitFor(dones.exists(_.id.refill == refill))
      dones.find(_.id.refill == refill).get
    }
    def check(refill: Int, addresses: Seq[BigInt], dest: Int = 0, streamLast: Boolean = true): Unit = {
      val done = finish(refill)
      assert(!done.error && done.bytes == addresses.size)
      val ds = deliveries.filter(_.id.refill == refill)
      assert(ds.flatMap(_.bytes).toVector == expected(addresses), s"byte trace mismatch in refill $refill")
      assert(ds.count(_.chunkLast) == 1 && ds.last.chunkLast, s"logical last mismatch in refill $refill")
      assert(ds.count(_.streamLast) == (if (streamLast) 1 else 0))
      var offset = dest
      for (x <- ds) { assert(x.dest == offset); offset += x.bytes.size }
    }
  }

  it should "align expanded DRAM words and IB lanes with poisoned padding and exact logical bytes" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      var id = 0
      for (offset <- Seq(0, 16, 32, 48); length <- Seq(16, 32, 48, 64, 144)) {
        id += 1
        val a = BigInt(0x1000 + offset)
        s.configure(Config(base = a, tileBytes = length, tail = length))
        s.issue(bytes = length, refill = id, dest = 32)
        s.check(id, span(a, length), dest = 32)
      }
      assert(s.gets.forall { case (a, n) => a % 64 == 0 && n >= 64 })
      val edge = s.rawWords.filter(_._1.refill == 17) // offset=48, length=32
      assert(edge.map(x => (x._2, x._3, x._4)).toSeq == Seq((BigInt(0x1000), 3, 1), (BigInt(0x1040), 0, 1)))
      s.configure(Config(base = 0x1ff0, tileBytes = 144, tail = 144))
      s.issue(bytes = 144, refill = 100)
      s.check(100, span(0x1ff0, 144))
      val plans = s.plans.filter(_.id.refill == 100)
      assert(plans.map(_.bytes).toSeq == Seq(16, 128))
      assert(s.writes.isEmpty)
      // Repeat the alignment matrix through the production IB word/lane reader.
      s.map()
      s.configure(Config())
      s.issue(bytes = 256, refill = 150); s.check(150, span(0x1000, 256))
      val dramBeforeHits = s.dramRequests.size
      for (offset <- Seq(0, 16, 32, 48); length <- Seq(16, 32, 48, 64, 144)) {
        id += 1
        val hitId = 200 + id
        val a = BigInt(0x1000 + offset)
        s.configure(Config(base = a, tileBytes = length, tail = length))
        s.issue(bytes = length, refill = hitId)
        s.check(hitId, span(a, length))
        assert(s.plans.filter(_.id.refill == hitId).forall(_.ib))
      }
      assert(s.dramRequests.size == dramBeforeHits)
    }
  }

  it should "traverse GEMM rows passes K tails and compact row cache using canonical addresses" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.configure(Config(rows = 2, passes = 3, tiles = 3, rowStride = 0x2000, tail = 64))
      s.issue(bytes = 4096, refill = 1)
      val trace = for (m <- 0 until 2; n <- 0 until 3; k <- 0 until 3;
                       a <- span(BigInt(0x1000 + m * 0x2000 + k * 256), if (k == 2) 64 else 256)) yield a
      s.check(1, trace)
      assert(s.plans.take(3).map(_.canonical).toSeq == Seq.fill(3)(BigInt(0x1000)))
      assert(s.plans.take(3).forall(_.bytes == 576))
      s.configure(Config(rows = 2, passes = 4, tiles = 3, rowStride = 0x1000,
        tileStride = 16, tileBytes = 16, tail = 16, mode = ReadSupplyMode.LocalRowCache))
      s.issue(bytes = 4096, refill = 2)
      s.check(2, span(0x1000, 48), streamLast = false)
      s.issue(bytes = 4096, refill = 3)
      s.check(3, span(0x2000, 48))
      // STREAM supplies the compact row for every pass; no internal UB replay.
      s.configure(Config(passes = 4, tiles = 2, tileStride = 16, tileBytes = 16, tail = 16))
      s.issue(bytes = 4096, refill = 4)
      s.check(4, Vector.fill(4)(span(0x1000, 32)).flatten)
    }
  }

  it should "keep W1 W2 cursors independent across explicit fusion phases and weight stride jumps" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      for ((stream, base) <- Seq(ReadStream.Weight1 -> 0x4000, ReadStream.Weight2 -> 0xa000))
        s.configure(Config(stream = stream, base = base, rows = 2, tiles = 2,
          rowStride = 0x1000, tileStride = 512))
      val events = Seq((1, 0x4000, 0), (2, 0xa000, 1), (1, 0x4200, 0),
        (1, 0x5000, 2), (2, 0xa200, 3), (2, 0xb000, 3), (1, 0x5200, 2), (2, 0xb200, 3))
      for (((stream, a, phase), i) <- events.zipWithIndex) {
        s.issue(stream = stream, target = ReadTarget.WB, bytes = 256, refill = i + 1, phase = phase)
        s.check(i + 1, span(BigInt(a), 256), streamLast = a == 0x5200 || a == 0xb200)
        assert(s.plans.last.phase == phase && s.plans.last.stream == stream)
      }
      assert(s.plans.filter(_.stream == 1).map(_.canonical).toSeq == Seq(0x4000, 0x4200, 0x5000, 0x5200).map(BigInt(_)))
    }
  }

  it should "supply linear direct Quant Freq and NormSpill payloads with configured repeat boundaries" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      for ((stream, target) <- Seq(0 -> 0, 3 -> 2, 4 -> 3, 5 -> 4)) {
        val base = BigInt(0x3010 + stream * 0x1000)
        s.configure(Config(stream = stream, base = base, passes = 2, passStride = 0,
          tiles = 3, tileStride = 16, tileBytes = 16, tail = 16))
        s.issue(stream = stream, target = target, bytes = 96, refill = stream + 1)
        s.check(stream + 1, span(base, 48) ++ span(base, 48))
      }
    }
  }

  it should "supply weight working sets once in local cache mode and repeat them in STREAM mode" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      val workingSet = span(0x4000, 16) ++ span(0x4100, 16) ++ span(0x5000, 16) ++ span(0x5100, 16)
      val c = Config(stream = 1, base = 0x4000, rows = 3, passes = 2, tiles = 2,
        rowStride = 0, passStride = 0x1000, tileStride = 256, tileBytes = 16, tail = 16)
      s.configure(c)
      s.issue(stream = 1, target = 1, bytes = 4096, refill = 1)
      s.check(1, Vector.fill(3)(workingSet).flatten)
      s.configure(c.copy(mode = ReadSupplyMode.LocalWeightCache))
      s.configure(c.copy(stream = 2, base = 0x8000, mode = ReadSupplyMode.LocalWeightCache))
      s.issue(stream = 1, target = 1, bytes = 4096, refill = 2, phase = 1)
      s.check(2, workingSet)
      s.issue(stream = 2, target = 1, bytes = 4096, refill = 3, phase = 2)
      s.check(3, workingSet.map(_ + 0x4000))
      // Fusion WB preload is the sum of both unique sets, without M repeats.
      assert(s.dones.filter(x => x.id.refill == 2 || x.id.refill == 3).map(_.bytes).sum == 128)
    }
  }

  it should "commit real fill bytes before hits and preserve gaps partial pages and epochs" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      def request(id: Int, a: BigInt, n: Int, epoch: Int = 1): Unit = {
        s.configure(Config(base = a, tileBytes = n, tail = n))
        s.issue(bytes = n, refill = id, epoch = epoch)
        s.check(id, span(a, n))
      }
      s.fillAllow = false
      s.configure(Config(base = 0x1030, tileBytes = 32, tail = 32))
      s.configure(Config(stream = 1, base = 0x1030, tileBytes = 32, tail = 32, ibOnly = true))
      s.issue(bytes = 32, refill = 1)
      s.waitFor(s.deliveries.nonEmpty)
      for (_ <- 0 until 12) s.tick()
      assert(s.writes.isEmpty && s.dones.isEmpty && !s.b(d.io.drained))
      s.issue(stream = 1, target = 1, bytes = 32, refill = 90)
      assert(s.finish(90).error) // another target cannot hit the uncommitted candidate
      assert(s.plans.count(_.id.refill == 90) == 0)
      d.io.mapping.valid.poke(true.B)
      d.io.mapping.ready.expect(false.B) // old readers pin the mapping through commit
      d.io.mapping.valid.poke(false.B)
      s.fillAllow = true; s.check(1, span(0x1030, 32))
      assert(s.writes.map(_._2).toVector == span(0x8030, 32))
      assert(s.ib.keySet.toSet == span(0x8030, 32).toSet)
      val requestsBefore = s.dramRequests.size
      request(2, 0x1030, 32)
      assert(s.dramRequests.size == requestsBefore && s.plans.last.ib)
      request(3, 0x1020, 48) // partially covered candidate conservatively misses
      assert(s.dramRequests.size > requestsBefore)
      request(4, 0x1100, 16) // same page, still invalid
      assert(!s.plans.last.ib)
      request(5, 0x1100, 16)
      assert(s.plans.last.ib)
      val fillsBefore = s.writes.size
      request(6, 0x1030, 32, epoch = 2) // stale epoch cannot hit/fill old mapping
      assert(!s.plans.last.ib && s.writes.size == fillsBefore)
      s.map(epoch = 2) // drained replacement invalidates all coverage
      request(7, 0x1030, 32, epoch = 2)
      assert(!s.plans.last.ib && s.writes.size == fillsBefore + 32)
      request(8, 0x1030, 32, epoch = 2)
      assert(s.plans.last.ib)
    }
  }

  it should "split hit miss and mapping boundaries without early chunk last or filling padding" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map(pages = 1)
      s.configure(Config(base = 0x1ff0, tileBytes = 16, tail = 16))
      s.issue(bytes = 16, refill = 1); s.check(1, span(0x1ff0, 16))
      s.configure(Config(base = 0x1ff0, tileBytes = 48, tail = 48))
      s.issue(bytes = 48, refill = 2); s.check(2, span(0x1ff0, 48))
      val ps = s.plans.filter(_.id.refill == 2)
      assert(ps.map(_.ib).toSeq == Seq(true, false))
      assert(ps.map(_.bytes).toSeq == Seq(16, 32))
      assert(s.writes.size == 16)
      s.configure(Config(base = 0x0ff0, tileBytes = 32, tail = 32))
      s.issue(bytes = 32, refill = 3); s.check(3, span(0x0ff0, 32))
      assert(s.plans.filter(_.id.refill == 3).map(_.fill).toSeq == Seq(false, true))
      // Gaps do not become valid and duplicate commits do not count as a page.
      s.configure(Config(tiles = 4, tileStride = 0, tileBytes = 16, tail = 16))
      s.issue(bytes = 64, refill = 4); s.check(4, Vector.fill(4)(span(0x1000, 16)).flatten)
      s.configure(Config(base = 0x1010, tileBytes = 16, tail = 16))
      s.issue(bytes = 16, refill = 5); s.check(5, span(0x1010, 16))
      assert(!s.plans.last.ib)
      // A second scattered region retains its own physical translation/coverage.
      s.map(index = 1, canonical = 0x5000, physical = 0xc000)
      s.configure(Config(base = 0x5ff0, tiles = 2, tileStride = 64, tileBytes = 16, tail = 16))
      s.issue(bytes = 32, refill = 6)
      s.check(6, span(0x5ff0, 16) ++ span(0x6030, 16))
      assert(s.writes.filter(_._1.refill == 6).map(_._2).toVector == span(0xcff0, 16) ++ span(0xd030, 16))
      s.configure(Config(base = 0x6030, tileBytes = 16, tail = 16))
      s.issue(bytes = 16, refill = 7); s.check(7, span(0x6030, 16))
      assert(s.plans.last.ib && s.plans.last.address == 0xd030)
      s.configure(Config(base = 0x6000, tileBytes = 16, tail = 16))
      s.issue(bytes = 16, refill = 8); s.check(8, span(0x6000, 16))
      assert(!s.plans.last.ib) // page-one gap was not appended/filled
    }
  }

  it should "reject invalid IB only data without a fabricated DRAM fallback" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      s.configure(Config(ibOnly = true))
      s.issue(refill = 1)
      assert(s.finish(1).error)
      assert(s.dramRequests.isEmpty && s.deliveries.isEmpty && s.writes.isEmpty)
      // Failed resolution did not advance the canonical cursor.
      s.configure(Config())
      s.issue(refill = 2); s.check(2, span(0x1000, 256))
      s.configure(Config(ibOnly = true))
      s.issue(refill = 3); s.check(3, span(0x1000, 256))
      assert(s.plans.last.ib)
    }
  }

  it should "overlap independent full width returns and reserve a target through delayed fill commit" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d, stalls = false)
      s.map()
      s.configure(Config(tileBytes = 4096, tail = 4096))
      s.issue(bytes = 4096, refill = 1); s.check(1, span(0x1000, 4096))
      s.configure(Config(tileBytes = 4096, tail = 4096))
      s.configure(Config(stream = 1, base = 0x4000, tileBytes = 4096, tail = 4096))
      s.issue(bytes = 4096, refill = 2)
      s.issue(stream = 1, target = 1, bytes = 4096, refill = 3)
      s.check(2, span(0x1000, 4096)); s.check(3, span(0x4000, 4096))
      assert(s.simultaneousFull > 20, "DRAM and IB must return 128B in the same cycle")
      assert(s.consecutiveFull > 40, "full-width path must sustain consecutive beats")
      info(s"Observed ${s.simultaneousFull} simultaneous DRAM+IB full-beat cycles (128B/cycle)")
      // Opposite sink readiness: IB commits while OCM is blocked, exactly once.
      s.configure(Config(base = 0x2010, tileBytes = 16, tail = 16))
      s.configure(Config(stream = 1, base = 0x4000, tileBytes = 16, tail = 16))
      s.fillAllow = true; s.ocmAllow = false
      s.issue(bytes = 16, refill = 4)
      s.waitFor(s.writes.exists(_._1.refill == 4))
      for (_ <- 0 until 10) s.tick()
      assert(s.deliveries.count(_.id.refill == 4) == 0 && !s.dones.exists(_.id.refill == 4))
      d.io.refill.bits.target.poke(0.U); d.io.refill.bits.stream.poke(1.U)
      d.io.refill.valid.poke(true.B)
      d.io.refill.ready.expect(false.B)
      d.io.refill.bits.target.poke(1.U)
      d.io.refill.ready.expect(true.B) // same stream is available at a different target
      d.io.refill.valid.poke(false.B)
      s.ocmAllow = true; s.check(4, span(0x2010, 16))
      assert(s.writes.count(_._1.refill == 4) == 16)
    }
  }

  it should "advance once at accepted dispatch and preserve a latched issue through long backend stalls" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.configure(Config(tiles = 3, tileStride = 256, tileBytes = 16, tail = 16))
      s.configure(Config(stream = 1, base = 0x9000, tileBytes = 16, tail = 16))
      s.dramAllow = false
      s.issue(bytes = 48, refill = 1, context = 13, epoch = 7, phase = 23)
      s.waitFor(s.plans.nonEmpty)
      s.issue(stream = 1, target = 1, bytes = 16, refill = 2, context = 29, epoch = 3)
      for (_ <- 0 until 20) s.tick()
      assert(s.plans.size == 1 && s.dramRequests.isEmpty)
      d.io.dram.request.bits.plan.canonicalAddress.expect(0x1000.U)
      d.io.dram.request.bits.plan.identity.contextId.expect(13.U)
      s.dramAllow = true
      s.check(1, span(0x1000, 16) ++ span(0x1100, 16) ++ span(0x1200, 16))
      s.check(2, span(0x9000, 16))
      assert(s.plans.filter(_.id.refill == 1).map(_.canonical).toSeq == Seq(0x1000, 0x1100, 0x1200).map(BigInt(_)))
      assert(s.deliveries.filter(_.id.refill == 1).forall(x => x.id.context == 13 && x.id.epoch == 7))
      assert(s.deliveries.filter(_.id.refill == 2).forall(x => x.id.context == 29 && x.id.epoch == 3))
    }
  }

  it should "continue a partially issued tile across chunks and backend transfer limits" in {
    test(new DmaReadHarness(DmaReadParams(pagesPerRegion = 2, maxSegmentBytes = 48))) { d =>
      val s = new Sim(d)
      s.map()
      val c = Config(base = 0x1010, tiles = 2, tileStride = 512, tileBytes = 256, tail = 64)
      s.configure(c)
      s.issue(bytes = 80, refill = 1)
      s.check(1, span(0x1010, 80), streamLast = false)
      s.issue(bytes = 240, refill = 2)
      s.check(2, span(0x1060, 176) ++ span(0x1210, 64))
      assert(s.plans.forall(_.bytes <= 48))
      assert(s.writes.map(_._2).toVector == span(0x8010, 256) ++ span(0x8210, 64))
      val before = s.dramRequests.size
      s.configure(c)
      s.issue(bytes = 320, refill = 3)
      s.check(3, span(0x1010, 256) ++ span(0x1210, 64))
      assert(s.dramRequests.size == before && s.plans.filter(_.id.refill == 3).forall(_.ib))
    }
  }

  it should "arbitrate conflicting IB read and fill commands on a shared backing port" in {
    test(new DmaReadHarness(sharedIbPort = true)) { d =>
      val s = new Sim(d)
      s.map()
      val c = Config(tileBytes = 1024, tail = 1024)
      s.configure(c)
      s.issue(bytes = 1024, refill = 1); s.check(1, span(0x1000, 1024))
      s.configure(c)
      s.configure(c.copy(stream = 1, base = 0x2000))
      s.issue(bytes = 1024, refill = 2)
      s.issue(stream = 1, target = 1, bytes = 1024, refill = 3)
      s.check(2, span(0x1000, 1024)); s.check(3, span(0x2000, 1024))
      assert(s.plans.filter(_.id.refill == 2).forall(_.ib))
      assert(s.writes.count(_._1.refill == 3) == 1024)
      assert(s.writes.count(_._1.refill == 2) == 0)
    }
  }

  it should "merge dense compact and non power of two tiles without crossing a pass" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      for ((c, id) <- Seq(
        Config(tiles = 16) -> 1,
        Config(tiles = 256, tileBytes = 16, tail = 16, tileStride = 16) -> 2)) {
        val before = s.gets.size
        s.configure(c); s.issue(bytes = 4096, refill = id); s.check(id, span(0x1000, 4096))
        val ps = s.plans.filter(_.id.refill == id)
        assert(ps.size == 1 && ps.head.bytes == 4096)
        assert(s.gets.drop(before).toSeq == Seq((BigInt(0x1000), 4096)))
        assert(s.rawWords.count(_._1.refill == id) == 64)
      }
      // Seven 144B tiles + a 48B tail = 1056B per pass. Stop inside tile 0,
      // finish the pass, then rewind for pass 1 with no tile division in DUT.
      s.configure(Config(base = 0x1400, passes = 2, tiles = 8, tileStride = 144, tileBytes = 144, tail = 48))
      s.issue(bytes = 80, refill = 3); s.check(3, span(0x1400, 80), streamLast = false)
      s.issue(bytes = 976, refill = 4); s.check(4, span(0x1450, 976), streamLast = false)
      s.issue(bytes = 1056, refill = 5); s.check(5, span(0x1400, 1056))
      assert(s.plans.filter(_.id.refill >= 3).map(_.bytes).toSeq == Seq(80, 976, 1056))
      info("Dense 16x256B and compact 256x16B: each 1 segment / 1 Get / 64 raw beats")
    }
  }

  it should "fetch 65 expanded words for an unaligned 4KiB payload and fill only valid bytes" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      val c = Config(base = 0x1010, tiles = 16)
      s.configure(c); s.issue(bytes = 4096, refill = 1); s.check(1, span(0x1010, 4096))
      assert(s.plans.map(_.bytes).toSeq == Seq(4080, 16))
      assert(s.fetchWindows.map(x => (x._2, x._3)).toSeq == Seq(
        (BigInt(0x1000), BigInt(0x2000)), (BigInt(0x2000), BigInt(0x2040))))
      assert(s.gets.toSeq == Seq((BigInt(0x1000), 4096), (BigInt(0x2000), 64)))
      assert(s.rawWords.size == 65)
      val ds = s.deliveries.filter(_.id.refill == 1)
      assert(ds.map(_.bytes.size).toSeq == Seq(48) ++ Seq.fill(63)(64) ++ Seq(16))
      assert(ds.map(_.mask).toSeq == Seq(7) ++ Seq.fill(63)(15) ++ Seq(1))
      assert(s.writes.map(_._2).toVector == span(0x8010, 4096))
      assert(s.ib.keySet.toSet == span(0x8010, 4096).toSet)
      // Padding in either page is still invalid for IB-only consumers.
      for ((a, id) <- Seq(0x1000 -> 2, 0x2010 -> 3)) {
        s.configure(Config(base = a, tileBytes = 16, tail = 16, ibOnly = true))
        s.issue(bytes = 16, refill = id)
        assert(s.finish(id).error && !s.plans.exists(_.id.refill == id))
      }
      val before = s.dramRequests.size
      s.configure(c); s.issue(bytes = 4096, refill = 4); s.check(4, span(0x1010, 4096))
      assert(s.dramRequests.size == before && s.plans.filter(_.id.refill == 4).forall(_.ib))
      info("0x1010+4096B: 2 segments (4080/16), Gets 4096/64B, 65 raw beats, masks 7/15.../1")
    }
  }

  it should "keep whole raw words and one logical last with a small maximum TL Get profile" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d, maxGetBytes = 128)
      s.configure(Config(tiles = 16))
      s.issue(bytes = 4096, refill = 1); s.check(1, span(0x1000, 4096))
      assert(s.plans.size == 1 && s.gets.size == 32 && s.gets.forall(_._2 == 128))
      assert(s.rawWords.size == 64 && s.getEnds.size == 32)
      assert(s.deliveries.size == 64 && s.deliveries.forall(_.mask == 15))
      assert(s.deliveries.count(_.chunkLast) == 1)
      info("128B maximum Get profile: 1 segment / 32 Gets / 64 raw beats / 1 chunk last")
    }
  }

  it should "preview five independent targets before permits and accept each winner only once" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      s.configure(Config())
      s.issue(refill = 1); s.check(1, span(0x1000, 256))
      val streams = Seq(0, 1, 3, 4, 5)
      val bases = Seq(0x1000, 0x4000, 0x1040, 0x5000, 0x6000)
      val contexts = Seq(1, 21, 1, 23, 24)
      for (t <- 0 until 5) {
        s.configure(Config(stream = streams(t), base = bases(t), tileBytes = 64, tail = 64))
        d.io.schedulePermit(t).poke(false.B)
      }
      val beforeDram = s.dramRequests.size
      val beforeWrites = s.writes.size
      for (t <- 0 until 5) s.issue(stream = streams(t), target = t, bytes = 64,
        refill = 10 + t, context = contexts(t), phase = 30 + t, dest = 16 * t)
      def candidates: Vector[Plan] = (0 until 5).map { t =>
        d.io.nextReadRequest(t).valid.expect(true.B)
        s.plan(d.io.nextReadRequest(t).bits)
      }.toVector
      val preview = candidates
      assert(preview.map(_.ib) == Vector(true, false, true, false, false))
      for (t <- 0 until 5) {
        assert(preview(t).id == Id(t, contexts(t), 1, 10 + t))
        assert(preview(t).canonical == bases(t) && preview(t).phase == 30 + t && preview(t).dest == 16 * t)
      }
      s.dramAllow = false
      for (_ <- 0 until 16) {
        assert(candidates == preview)
        d.io.sourceAvailable(0).expect(true.B); d.io.sourceAvailable(1).expect(true.B)
        s.tick()
      }
      assert(s.plans.size == 1 && s.dramRequests.size == beforeDram && s.writes.size == beforeWrites)
      for (t <- Seq(0, 1)) d.io.schedulePermit(t).poke(true.B)
      s.tick()
      for (t <- 0 until 5) d.io.schedulePermit(t).poke(false.B)
      val accepted = s.plans.filter(_.id.refill >= 10).toVector
      assert(accepted.size == 2 && accepted.count(_.ib) == 1 && accepted.map(_.id.target).distinct.size == 2)
      assert(accepted.map(_.id.target).toSet == Set(ReadTarget.UB, ReadTarget.WB))
      d.io.sourceAvailable(0).expect(false.B)
      val ibWinner = accepted.find(_.ib).get
      val dramWinner = accepted.find(x => !x.ib).get
      for (x <- accepted) d.io.nextReadRequest(x.id.target).valid.expect(false.B)
      s.check(ibWinner.id.refill, span(BigInt(bases(ibWinner.id.target)), 64), dest = ibWinner.id.target * 16)
      assert(s.dramRequests.size == beforeDram)
      for (t <- 0 until 5 if !accepted.exists(_.id.target == t)) d.io.nextReadRequest(t).valid.expect(true.B)
      s.dramAllow = true
      s.check(dramWinner.id.refill, span(BigInt(bases(dramWinner.id.target)), 64), dest = dramWinner.id.target * 16)
      for (t <- 0 until 5) d.io.schedulePermit(t).poke(true.B)
      for (t <- 0 until 5) s.check(10 + t, span(BigInt(bases(t)), 64), dest = 16 * t)
      assert(s.plans.count(_.id.refill >= 10) == 5)
      assert(s.plans.filter(_.id.refill >= 10).map(_.id).distinct.size == 5)
    }
  }

  it should "refresh a waiting source preview on commit while preserving epoch and IB only rules" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      for (stream <- Seq(0, 1, 3, 4, 5)) s.configure(Config(stream = stream,
        base = if (stream == 5) 0x2100 else 0x2000, tileBytes = 64, tail = 64, ibOnly = stream == 5))
      for (t <- 1 until 5) d.io.schedulePermit(t).poke(false.B)
      s.issue(stream = 1, target = 1, bytes = 64, refill = 2, phase = 8, dest = 48)
      s.issue(stream = 3, target = 2, bytes = 64, refill = 5, epoch = 2)
      s.issue(stream = 4, target = 3, bytes = 64, refill = 6, context = 2)
      val old = s.plan(d.io.nextReadRequest(1).bits)
      assert(!old.ib && old.fill && old.bytes == 64)
      s.fillAllow = false
      s.issue(bytes = 64, refill = 3)
      s.waitFor(s.deliveries.exists(_.id.refill == 3))
      for (_ <- 0 until 12) {
        d.io.nextReadRequest(1).valid.expect(true.B)
        assert(s.plan(d.io.nextReadRequest(1).bits) == old)
        s.tick()
      }
      assert(s.writes.isEmpty)
      s.issue(stream = 5, target = 4, bytes = 64, refill = 7)
      d.io.nextReadRequest(4).valid.expect(false.B)
      assert(s.finish(7).error && !s.plans.exists(_.id.refill == 7))
      s.fillAllow = true
      s.waitFor(s.writes.count(_._1.refill == 3) == 64)
      val fresh = s.plan(d.io.nextReadRequest(1).bits)
      assert(fresh.ib && !fresh.fill && fresh.address == 0x9000)
      assert(fresh.id == old.id && fresh.phase == old.phase && fresh.dest == old.dest && fresh.canonical == old.canonical)
      for (t <- Seq(2, 3)) {
        d.io.nextReadRequest(t).valid.expect(true.B)
        d.io.nextReadRequest(t).bits.sourceIB.expect(false.B)
        d.io.nextReadRequest(t).bits.fill.expect(false.B)
      }
      s.check(3, span(0x2000, 64))
      val before = s.dramRequests.size
      d.io.schedulePermit(1).poke(true.B)
      s.check(2, span(0x2000, 64), dest = 48)
      assert(s.dramRequests.size == before)
      for (t <- Seq(2, 3)) d.io.schedulePermit(t).poke(true.B)
      s.check(5, span(0x2000, 64)); s.check(6, span(0x2000, 64))
    }
  }

  it should "preview IB 512B then DRAM 3584B as one reserved 4KiB logical refill" in {
    test(new DmaReadHarness) { d =>
      val s = new Sim(d)
      s.map()
      s.configure(Config(tiles = 2))
      s.issue(bytes = 512, refill = 1); s.check(1, span(0x1000, 512))
      s.configure(Config(tiles = 16))
      d.io.schedulePermit(0).poke(false.B)
      s.issue(bytes = 4096, refill = 2, phase = 9, dest = 96)
      val first = s.plan(d.io.nextReadRequest(0).bits)
      assert(first.ib && first.bytes == 512 && first.canonical == 0x1000 && first.dest == 96 && !first.chunkLast)
      d.io.schedulePermit(0).poke(true.B); s.tick(); d.io.schedulePermit(0).poke(false.B)
      d.io.nextReadRequest(0).valid.expect(false.B)
      s.waitFor(s.b(d.io.nextReadRequest(0).valid))
      val next = s.plan(d.io.nextReadRequest(0).bits)
      assert(!next.ib && next.fill && next.bytes == 3584 && next.canonical == 0x1200 && next.dest == 608)
      assert(next.id == first.id && next.phase == first.phase && next.chunkLast && next.streamLast)
      assert(!s.dones.exists(_.id.refill == 2))
      for (_ <- 0 until 8) { assert(s.plan(d.io.nextReadRequest(0).bits) == next); s.tick() }
      assert(s.plans.count(_.id.refill == 2) == 1)
      d.io.schedulePermit(0).poke(true.B); s.tick(); d.io.schedulePermit(0).poke(false.B)
      s.check(2, span(0x1000, 4096), dest = 96)
      assert(s.plans.filter(_.id.refill == 2).map(x => (x.ib, x.bytes)).toSeq == Seq(true -> 512, false -> 3584))
      assert(s.writes.filter(_._1.refill == 2).map(_._2).toVector == span(0x8200, 3584))
      info("Mixed refill: IB 512B + DRAM 3584B, same identity, offsets 96/608, one chunk last and done")
    }
  }
}
