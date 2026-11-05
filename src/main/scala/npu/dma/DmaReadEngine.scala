package npu.dma

import chisel3._
import chisel3.util._

/** Standalone production read dispatch/return path. One refill per target and
  * one physical segment per source. Source reservations include queued issue,
  * all responses and both fill-through sinks. Mapping/config replacement is
  * accepted only after every approved refill and completion has drained.
  */
class DmaReadEngine(p: DmaReadParams = DmaReadParams()) extends Module {
  private val targets = ReadTarget.Count
  private val streams = ReadStream.Count
  val io = IO(new Bundle {
    val config = Flipped(Decoupled(new ReadStreamConfig))
    val mapping = Flipped(Decoupled(new IbMappingUpdate(p)))
    val refill = Flipped(Decoupled(new RefillRequest))
    val dram = new ReadBurstPort(p)
    val ib = new ReadBurstPort(p)
    val fill = Decoupled(new IbFillWrite)
    val memory = Vec(targets, Decoupled(new MemoryReadData))
    val done = Vec(targets, Decoupled(new RefillDone))
    val acceptedPlan = Output(Vec(2, Valid(new ReadPlan(p)))) // dispatch acceptance / cursor advance
    val drained = Output(Bool())
  })
  def min(a: UInt, b: UInt): UInt = Mux(a < b, a, b)
  def pageIndex(relative: UInt): UInt =
    if (p.pagesPerRegion == 1) 0.U else relative(11 + log2Ceil(p.pagesPerRegion), 12)
  val configs = Reg(Vec(streams, new ReadStreamConfig))
  val configured = RegInit(VecInit(Seq.fill(streams)(false.B)))
  val exhausted = RegInit(VecInit(Seq.fill(streams)(false.B)))
  val row = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val pass = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val tile = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val within = RegInit(VecInit(Seq.fill(streams)(0.U(13.W))))
  // Affine loop bases advance by addition; no wide address multipliers on the
  // dispatch path. Repeated passes rewind tileBase to their canonical base.
  val rowBase = Reg(Vec(streams, UInt(64.W)))
  val passBase = Reg(Vec(streams, UInt(64.W)))
  val tileBase = Reg(Vec(streams, UInt(64.W)))
  val mappings = RegInit(VecInit(Seq.fill(p.regions)(0.U.asTypeOf(new IbRegion))))
  // Unique 16B coverage bits; repeated writes cannot manufacture a valid page.
  val coverage = RegInit(VecInit(Seq.fill(p.regions)(VecInit(Seq.fill(p.pagesPerRegion)(0.U(256.W))))))
  val active = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val pending = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val requests = Reg(Vec(targets, new RefillRequest))
  val remaining = Reg(Vec(targets, UInt(13.W)))
  val dispatched = Reg(Vec(targets, UInt(13.W)))
  val committed = Reg(Vec(targets, UInt(13.W)))
  val completion = Reg(Vec(targets, new RefillDone))
  val complete = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val sourceBusy = RegInit(VecInit(Seq.fill(2)(false.B)))
  val sourceIssued = RegInit(VecInit(Seq.fill(2)(false.B)))
  val sourcePlan = Reg(Vec(2, new ReadPlan(p)))
  val received = Reg(Vec(2, UInt(13.W)))
  val ocmSent = RegInit(VecInit(Seq.fill(2)(false.B)))
  val fillSent = RegInit(VecInit(Seq.fill(2)(false.B)))

  io.drained := !active.asUInt.orR && !sourceBusy.asUInt.orR
  io.config.ready := io.drained && !io.mapping.valid
  io.mapping.ready := io.drained
  when(io.config.fire) {
    val c = io.config.bits
    assert(c.stream < streams.U)
    assert(c.supplyMode <= ReadSupplyMode.LocalWeightCache.U)
    assert(c.rows > 0.U && c.passes > 0.U && c.tiles > 0.U)
    assert(c.tileBytes > 0.U && c.tileBytes <= 4096.U && c.tileBytes(3, 0) === 0.U)
    assert(c.tailBytes > 0.U && c.tailBytes <= c.tileBytes && c.tailBytes(3, 0) === 0.U)
    assert(c.base(3, 0) === 0.U && c.rowStride(3, 0) === 0.U &&
      c.passStride(3, 0) === 0.U && c.tileStride(3, 0) === 0.U)
    configs(c.stream) := c
    // Cache modes normalize supply counts, leaving compute replay in OCM.
    when(c.supplyMode === ReadSupplyMode.LocalRowCache.U) {
      assert(c.stream === ReadStream.Input.U)
      configs(c.stream).passes := 1.U
      configs(c.stream).stopAtRowEnd := true.B
    }
    when(c.supplyMode === ReadSupplyMode.LocalWeightCache.U) {
      assert(c.stream === ReadStream.Weight1.U || c.stream === ReadStream.Weight2.U)
      configs(c.stream).rows := 1.U
    }
    configured(c.stream) := true.B
    exhausted(c.stream) := false.B
    row(c.stream) := 0.U; pass(c.stream) := 0.U
    tile(c.stream) := 0.U; within(c.stream) := 0.U
    rowBase(c.stream) := c.base; passBase(c.stream) := c.base; tileBase(c.stream) := c.base
  }
  when(io.mapping.fire) {
    val u = io.mapping.bits
    val m = u.mapping
    assert(u.index < p.regions.U)
    when(m.valid) {
      assert(m.canonicalBase(11, 0) === 0.U && m.ibBase(11, 0) === 0.U)
      assert(m.pageCount > 0.U && m.pageCount <= p.pagesPerRegion.U)
      val size = m.pageCount << 12
      assert((m.canonicalBase + size) > m.canonicalBase && (m.ibBase + size) > m.ibBase)
      for (r <- 0 until p.regions) {
        val old = mappings(r)
        val oldSize = old.pageCount << 12
        when(u.index =/= r.U && old.valid) {
          assert(m.ibBase + size <= old.ibBase || old.ibBase + oldSize <= m.ibBase,
            "IB regions must not physically alias")
          when(old.contextId === m.contextId && old.epoch === m.epoch) {
            assert(m.canonicalBase + size <= old.canonicalBase ||
              old.canonicalBase + oldSize <= m.canonicalBase)
          }
        }
      }
    }
    mappings(u.index) := m
    for (page <- 0 until p.pagesPerRegion) { coverage(u.index)(page) := 0.U }
  }
  val incoming = io.refill.bits
  val streamInUse = (0 until targets).map(t => active(t) && requests(t).stream === incoming.stream).reduce(_ || _)
  io.refill.ready := incoming.target < targets.U && incoming.stream < streams.U &&
    !active(incoming.target) && !streamInUse && configured(incoming.stream) &&
    !exhausted(incoming.stream) && !io.config.valid && !io.mapping.valid
  when(io.refill.fire) {
    assert(incoming.payloadBytes > 0.U && incoming.payloadBytes <= 4096.U && incoming.payloadBytes(3, 0) === 0.U)
    assert(incoming.destinationOffset(3, 0) === 0.U)
    active(incoming.target) := true.B
    pending(incoming.target) := false.B
    complete(incoming.target) := false.B
    requests(incoming.target) := incoming
    remaining(incoming.target) := incoming.payloadBytes
    dispatched(incoming.target) := 0.U
    committed(incoming.target) := 0.U
  }
  for (t <- 0 until targets) {
    io.memory(t).valid := false.B
    io.memory(t).bits := 0.U.asTypeOf(new MemoryReadData)
    io.done(t).valid := complete(t)
    io.done(t).bits := completion(t)
    when(io.done(t).fire) { complete(t) := false.B; active(t) := false.B }
  }

  val arbiters = Seq.fill(2)(Module(new RRArbiter(new ReadPlan(p), targets)))
  for (t <- 0 until targets) {
    val req = requests(t)
    val s = req.stream
    val c = configs(s)
    val address = tileBase(s) + within(s)
    val tileLength = Mux(tile(s) === c.tiles - 1.U, c.tailBytes, c.tileBytes)
    // Split at tile/repeat/stride, page, region and backend boundaries. Even
    // contiguous tiles may remain separate; this never changes logical last.
    val pageRoom = 4096.U(13.W) - address(11, 0)
    val candidate = min(min(remaining(t), tileLength - within(s)), min(pageRoom, p.maxSegmentBytes.U))
    val matches = Wire(Vec(p.regions, Bool()))
    val boundary = Wire(Vec(p.regions, UInt(13.W)))
    for (r <- 0 until p.regions) {
      val m = mappings(r)
      val sameContext = m.valid && m.contextId === req.contextId && m.epoch === req.epoch
      val end = m.canonicalBase + (m.pageCount << 12)
      matches(r) := sameContext && address >= m.canonicalBase && address < end
      val distance = m.canonicalBase - address
      boundary(r) := Mux(sameContext && address < m.canonicalBase && distance < candidate, distance, candidate)
    }
    val bytes = boundary.reduce((a, b) => min(a, b))
    val mapped = matches.asUInt.orR
    val region = PriorityEncoder(matches)
    val mapping = mappings(region)
    val relative = address - mapping.canonicalBase
    val page = pageIndex(relative)
    val mask = (Fill(256, 1.U(1.W)) >> (256.U - (bytes >> 4))) << address(11, 4)
    val hit = mapped && (coverage(region)(page) & mask(255, 0)) === mask(255, 0)
    val tileEnd = within(s) + bytes === tileLength
    val passEnd = tileEnd && tile(s) === c.tiles - 1.U
    val rowEnd = passEnd && pass(s) === c.passes - 1.U
    val streamEnd = rowEnd && row(s) === c.rows - 1.U
    val plan = Wire(new ReadPlan(p))
    plan.identity.target := t.U
    plan.identity.contextId := req.contextId
    plan.identity.epoch := req.epoch
    plan.identity.refillId := req.refillId
    plan.stream := s; plan.phase := req.phase
    plan.destinationOffset := req.destinationOffset + dispatched(t)
    plan.canonicalAddress := address
    plan.sourceIB := hit
    plan.address := Mux(hit, mapping.ibBase + relative, address)
    plan.payloadBytes := bytes
    plan.chunkLast := bytes === remaining(t) || streamEnd || (c.stopAtRowEnd && rowEnd)
    plan.streamLast := streamEnd
    plan.fill := mapped && !hit
    plan.fillAddress := mapping.ibBase + relative
    plan.region := region
    val eligible = active(t) && !pending(t) && !complete(t)
    for (source <- 0 until 2) {
      arbiters(source).io.in(t).valid := eligible && !(c.ibOnly && !hit) && hit === (source == 1).B
      arbiters(source).io.in(t).bits := plan
    }
    when(eligible && c.ibOnly && !hit) {
      complete(t) := true.B
      completion(t).identity := plan.identity
      completion(t).committedBytes := committed(t)
      completion(t).error := true.B
    }
    val accept = arbiters.map(_.io.in(t).fire).reduce(_ || _)
    when(accept) {
      pending(t) := true.B
      remaining(t) := remaining(t) - bytes
      dispatched(t) := dispatched(t) + bytes
      // Canonical issue cursor advances exactly at plan acceptance, never on
      // lookahead, arbiter grant alone, or response stalls.
      within(s) := within(s) + bytes
      when(tileEnd) {
        within(s) := 0.U; tile(s) := tile(s) + 1.U
        tileBase(s) := tileBase(s) + c.tileStride
        when(passEnd) {
          tile(s) := 0.U; pass(s) := pass(s) + 1.U
          passBase(s) := passBase(s) + c.passStride
          tileBase(s) := passBase(s) + c.passStride
          when(rowEnd) {
            pass(s) := 0.U; row(s) := row(s) + 1.U
            rowBase(s) := rowBase(s) + c.rowStride
            passBase(s) := rowBase(s) + c.rowStride
            tileBase(s) := rowBase(s) + c.rowStride
            when(streamEnd) { exhausted(s) := true.B }
          }
        }
      }
    }
  }

  io.fill.valid := false.B
  io.fill.bits := 0.U.asTypeOf(new IbFillWrite)
  for ((port, source) <- Seq(io.dram, io.ib).zipWithIndex) {
    val arb = arbiters(source)
    val plan = sourcePlan(source)
    arb.io.out.ready := !sourceBusy(source)
    io.acceptedPlan(source).valid := arb.io.out.fire
    io.acceptedPlan(source).bits := arb.io.out.bits
    when(arb.io.out.fire) {
      sourceBusy(source) := true.B
      sourceIssued(source) := false.B
      sourcePlan(source) := arb.io.out.bits
      received(source) := 0.U
      ocmSent(source) := false.B; fillSent(source) := false.B
    }
    port.request.valid := sourceBusy(source) && !sourceIssued(source)
    port.request.bits.plan := plan
    when(port.request.fire) { sourceIssued(source) := true.B }
    val response = port.response.bits
    val receiving = sourceBusy(source) && sourceIssued(source)
    val bytes = response.laneCount << 4
    val laneMask = ((1.U(5.W) << response.laneCount) - 1.U)(3, 0)
    val compact = response.data >> (response.firstLane << 7)
    val compactMask = Cat((0 until 4).reverse.map(l => Fill(128, laneMask(l))))
    val segmentLast = response.segmentLast
    val sinkReady = io.memory(plan.identity.target).ready
    val ocmAccept = ocmSent(source) || sinkReady
    // IB hits never fill. Keep their ready cone independent of DRAM fill
    // arbitration; otherwise a shared IB port can close a combinational loop
    // through the pipelined word reader's metadata FIFO.
    val fillAccept = if (source == 0) !plan.fill || fillSent(source) || io.fill.ready else true.B
    port.response.ready := receiving && ocmAccept && fillAccept
    for (t <- 0 until targets) {
      when(receiving && plan.identity.target === t.U) {
        io.memory(t).valid := port.response.valid && !ocmSent(source)
        io.memory(t).bits.identity := plan.identity
        io.memory(t).bits.destinationOffset := plan.destinationOffset + response.payloadOffset
        io.memory(t).bits.memoryData := compact & compactMask
        io.memory(t).bits.memoryLaneValidMask := laneMask
        io.memory(t).bits.memoryChunkLast := segmentLast && plan.chunkLast
        io.memory(t).bits.memoryStreamLast := segmentLast && plan.streamLast
      }
    }
    // Only DRAM misses fill IB. IB hit and out-of-region miss never write it.
    if (source == 0) {
      io.fill.valid := receiving && port.response.valid && plan.fill && !fillSent(source)
      val fillAddress = plan.fillAddress + response.payloadOffset
      io.fill.bits.identity := plan.identity
      io.fill.bits.wordAddress := fillAddress & "hffffffffffffffc0".U
      io.fill.bits.data := response.data
      io.fill.bits.laneMask := (laneMask << fillAddress(5, 4))(3, 0)
      when(io.fill.fire) {
        val region = plan.region
        val page = pageIndex(plan.canonicalAddress + response.payloadOffset - mappings(region).canonicalBase)
        val start = (plan.canonicalAddress + response.payloadOffset)(11, 4)
        val bits = ((Fill(256, 1.U(1.W)) >> (256.U - response.laneCount)) << start)(255, 0)
        coverage(region)(page) := coverage(region)(page) | bits
      }
    }
    when(receiving && port.response.valid) {
      if (source == 1) { assert(!plan.fill && plan.sourceIB) }
      assert(response.identity.asUInt === plan.identity.asUInt, "response identity mismatch")
      assert(response.payloadOffset === received(source), "response dropped/reordered")
      assert(response.laneCount > 0.U && response.laneCount <= 4.U)
      assert(response.firstLane +& response.laneCount <= 4.U)
      assert(response.firstLane === (plan.address + response.payloadOffset)(5, 4))
      assert(response.payloadOffset +& bytes <= plan.payloadBytes)
      assert(response.segmentLast === (response.payloadOffset +& bytes === plan.payloadBytes))
      when(!ocmSent(source) && sinkReady) { ocmSent(source) := true.B }
      when(plan.fill && !fillSent(source) && io.fill.ready) { fillSent(source) := true.B }
    }
    when(port.response.fire) {
      ocmSent(source) := false.B; fillSent(source) := false.B
      received(source) := received(source) + bytes
      when(segmentLast) {
        sourceBusy(source) := false.B
        pending(plan.identity.target) := false.B
        committed(plan.identity.target) := committed(plan.identity.target) + plan.payloadBytes
        when(plan.chunkLast) {
          complete(plan.identity.target) := true.B
          completion(plan.identity.target).identity := plan.identity
          completion(plan.identity.target).committedBytes := committed(plan.identity.target) + plan.payloadBytes
          completion(plan.identity.target).error := false.B
        }
      }
    }
  }
  when(sourceBusy(0) && sourceBusy(1)) {
    assert(sourcePlan(0).identity.target =/= sourcePlan(1).identity.target)
  }
}
