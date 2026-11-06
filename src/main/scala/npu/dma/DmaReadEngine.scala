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
    val pageCommand = Flipped(Decoupled(new IbPageCommand(p)))
    val pageResult = Decoupled(new IbPageResult(p))
    val producerWrite = Flipped(Decoupled(new IbProducerWrite(p)))
    val producerResult = Decoupled(new IbProducerResult)
    val pages = Output(Vec(p.cachePages, new IbPageState))
    val writersDrained = Output(Bool())
    val controlDrained = Input(Bool())
    val refill = Flipped(Decoupled(new RefillRequest))
    val dram = new ReadBurstPort(p)
    val ib = new ReadBurstPort(p)
    val fill = Decoupled(new IbFillWrite)
    val memory = Vec(targets, Decoupled(new MemoryReadData))
    val done = Vec(targets, Decoupled(new RefillDone))
    // Live candidates, independent of permits and source reservation occupancy.
    val nextReadRequest = Output(Vec(targets, Valid(new ReadPlan(p))))
    val sourceAvailable = Output(Vec(2, Bool())) // DRAM, IB; not backend ready/OCM credit
    val schedulePermit = Input(Vec(targets, Bool()))
    val acceptedPlan = Output(Vec(2, Valid(new ReadPlan(p)))) // dispatch acceptance / cursor advance
    val drained = Output(Bool())
  })
  def min(a: UInt, b: UInt): UInt = Mux(a < b, a, b)
  val configs = Reg(Vec(streams, new ReadStreamConfig))
  val configured = RegInit(VecInit(Seq.fill(streams)(false.B)))
  val exhausted = RegInit(VecInit(Seq.fill(streams)(false.B)))
  val row = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val pass = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val tile = RegInit(VecInit(Seq.fill(streams)(0.U(32.W))))
  val within = RegInit(VecInit(Seq.fill(streams)(0.U(13.W))))
  // Configuration-time multiply only. Continuous runs use byte counters so
  // merged accepts need neither per-tile iteration nor division on issue.
  val passBytes = Reg(Vec(streams, UInt(46.W)))
  val passRemaining = Reg(Vec(streams, UInt(46.W)))
  // Affine loop bases advance by addition; no wide address multipliers on the
  // dispatch path. Repeated passes rewind tileBase to their canonical base.
  val rowBase = Reg(Vec(streams, UInt(64.W)))
  val passBase = Reg(Vec(streams, UInt(64.W)))
  val tileBase = Reg(Vec(streams, UInt(64.W)))
  val table = Module(new IbPageTable(p))
  val fillWriter = Module(new IbCompactWriter)
  val producer = Module(new IbProducerAdapter(p))
  val writeArbiter = Module(new IbWriteArbiter)
  io.pages := table.io.pages
  table.io.command <> io.pageCommand
  io.pageResult <> table.io.result
  table.io.controlDrained := io.drained && io.controlDrained
  table.io.writersDrained := producer.io.drained
  io.writersDrained := producer.io.drained && table.io.pages.map(x =>
    !x.allocated || x.metadata.writer =/= IbWriter.Output.U || !x.writerOpen).reduce(_ && _)
  producer.io.pages := table.io.pages
  producer.io.request.valid := io.producerWrite.valid && !io.pageCommand.valid && !io.config.valid
  producer.io.request.bits := io.producerWrite.bits
  io.producerWrite.ready := producer.io.request.ready && !io.pageCommand.valid && !io.config.valid
  io.producerResult <> producer.io.result
  writeArbiter.io.in(0) <> fillWriter.io.write
  writeArbiter.io.in(1) <> producer.io.write
  io.fill <> writeArbiter.io.out
  table.io.commit.valid := io.fill.fire
  table.io.commit.bits := io.fill.bits
  table.io.commitFinal := fillWriter.io.input.fire
  table.io.acquire.valid := false.B; table.io.acquire.bits := 0.U.asTypeOf(new IbReaderLease(p))
  table.io.release.valid := false.B; table.io.release.bits := 0.U.asTypeOf(new IbReaderLease(p))
  fillWriter.io.input.valid := false.B
  fillWriter.io.input.bits := 0.U.asTypeOf(new IbCompactWrite)
  val active = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val pending = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val requests = Reg(Vec(targets, new RefillRequest))
  val remaining = Reg(Vec(targets, UInt(13.W)))
  val dispatched = Reg(Vec(targets, UInt(13.W)))
  val committed = Reg(Vec(targets, UInt(13.W)))
  val completion = Reg(Vec(targets, new RefillDone))
  val complete = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val sourceBusy = RegInit(VecInit(Seq.fill(2)(false.B)))
  table.io.fillDrained := !sourceBusy(0)
  val sourceIssued = RegInit(VecInit(Seq.fill(2)(false.B)))
  val sourcePlan = Reg(Vec(2, new ReadPlan(p)))
  val received = Reg(Vec(2, UInt(13.W)))
  val ocmSent = RegInit(VecInit(Seq.fill(2)(false.B)))
  val fillSent = RegInit(VecInit(Seq.fill(2)(false.B)))

  io.drained := !active.asUInt.orR && !sourceBusy.asUInt.orR
  io.config.ready := io.drained && io.controlDrained && producer.io.drained && !io.pageCommand.valid
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
    val length = (c.tiles - 1.U) * c.tileBytes +& c.tailBytes
    passBytes(c.stream) := length
    passRemaining(c.stream) := length
  }
  val incoming = io.refill.bits
  val streamInUse = (0 until targets).map(t => active(t) && requests(t).stream === incoming.stream).reduce(_ || _)
  io.refill.ready := incoming.target < targets.U && incoming.stream < streams.U &&
    !active(incoming.target) && !streamInUse && configured(incoming.stream) &&
    !exhausted(incoming.stream) && !io.config.valid && !io.pageCommand.valid
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
    val contiguous = c.tileStride === c.tileBytes
    // Merge within a continuous pass, including its short final tile. Strided
    // passes retain the tile cursor; both paths count only payload bytes.
    val runRoom = min(passRemaining(s), 4096.U)(12, 0)
    val traversalRoom = Mux(contiguous, runRoom, tileLength - within(s))
    val pageRoom = 4096.U(13.W) - address(11, 0)
    val candidate = min(min(remaining(t), traversalRoom), min(pageRoom, p.maxSegmentBytes.U))
    val matches = Wire(Vec(p.cachePages, Bool()))
    val blocked = Wire(Vec(p.cachePages, Bool()))
    val boundary = Wire(Vec(p.cachePages, UInt(13.W)))
    for (r <- 0 until p.cachePages) {
      val state = table.io.pages(r)
      val m = state.metadata
      val same = state.allocated && m.contextId === req.contextId && m.epoch === req.epoch && m.logicalId === req.logicalId
      val relative = address - m.canonicalStart
      val inRange = state.allocated && address >= m.canonicalStart && relative < m.validBytes
      matches(r) := same && inRange
      blocked(r) := inRange && !m.dramReadable
      val before = address < m.canonicalStart && (same || (state.allocated && !m.dramReadable))
      val distance = m.canonicalStart - address
      boundary(r) := Mux(matches(r), min(candidate, m.validBytes - relative),
        Mux(before && distance < candidate, distance, candidate))
    }
    val bytes = boundary.reduce((a, b) => min(a, b))
    val mapped = matches.asUInt.orR
    val region = PriorityEncoder(matches)
    val page = table.io.pages(region)
    val mapping = page.metadata
    val relative = address - mapping.canonicalStart
    val hit = mapped && page.pageValid && mapping.consumers.orR
    val cannotRead = (c.ibOnly && !hit) || (!hit && blocked.asUInt.orR)
    val tileEnd = !contiguous && within(s) + bytes === tileLength
    val passEnd = bytes === passRemaining(s)
    val rowEnd = passEnd && pass(s) === c.passes - 1.U
    val streamEnd = rowEnd && row(s) === c.rows - 1.U
    val plan = Wire(new ReadPlan(p))
    plan.identity.target := t.U
    plan.identity.contextId := req.contextId
    plan.identity.epoch := req.epoch
    plan.identity.logicalId := req.logicalId
    plan.identity.refillId := req.refillId
    plan.stream := s; plan.phase := req.phase
    plan.destinationOffset := req.destinationOffset + dispatched(t)
    plan.canonicalAddress := address
    plan.sourceIB := hit
    plan.address := Mux(hit, mapping.ibPageBase + relative, address)
    plan.payloadBytes := bytes
    plan.chunkLast := bytes === remaining(t) || streamEnd || (c.stopAtRowEnd && rowEnd)
    plan.streamLast := streamEnd
    plan.fill := mapped && !hit && page.writerOpen && mapping.writer === IbWriter.DramFill.U && mapping.dramReadable
    plan.fillAddress := mapping.ibPageBase + relative
    plan.region := region
    plan.generation := mapping.generation
    val eligible = active(t) && !pending(t) && !complete(t)
    io.nextReadRequest(t).valid := eligible && !cannotRead
    io.nextReadRequest(t).bits := plan
    for (source <- 0 until 2) {
      arbiters(source).io.in(t).valid := io.nextReadRequest(t).valid &&
        io.schedulePermit(t) && hit === (source == 1).B
      arbiters(source).io.in(t).bits := plan
    }
    when(eligible && cannotRead) {
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
      passRemaining(s) := passRemaining(s) - bytes
      when(contiguous) {
        tileBase(s) := tileBase(s) + bytes
        within(s) := 0.U
      }
      when(tileEnd) {
        within(s) := 0.U; tile(s) := tile(s) + 1.U
        tileBase(s) := tileBase(s) + c.tileStride
      }
      when(passEnd) {
          passRemaining(s) := passBytes(s)
          within(s) := 0.U
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

  for ((port, source) <- Seq(io.dram, io.ib).zipWithIndex) {
    val arb = arbiters(source)
    val plan = sourcePlan(source)
    io.sourceAvailable(source) := !sourceBusy(source)
    arb.io.out.ready := !sourceBusy(source)
    io.acceptedPlan(source).valid := arb.io.out.fire
    io.acceptedPlan(source).bits := arb.io.out.bits
    when(arb.io.out.fire) {
      sourceBusy(source) := true.B
      sourceIssued(source) := false.B
      sourcePlan(source) := arb.io.out.bits
      received(source) := 0.U
      if (source == 1) {
        table.io.acquire.valid := true.B
        table.io.acquire.bits.page := arb.io.out.bits.region
        table.io.acquire.bits.generation := arb.io.out.bits.generation
      }
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
    val fillAccept = if (source == 0) !plan.fill || fillSent(source) || fillWriter.io.input.ready else true.B
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
    // Compact payload is repacked to allocation-relative IB lanes. The raw
    // response stays held until OCM and every derived durable write complete.
    if (source == 0) {
      fillWriter.io.input.valid := receiving && port.response.valid && plan.fill && !fillSent(source)
      fillWriter.io.input.bits.identity := plan.identity
      fillWriter.io.input.bits.page := plan.region
      fillWriter.io.input.bits.generation := plan.generation
      fillWriter.io.input.bits.address := plan.fillAddress + response.payloadOffset
      fillWriter.io.input.bits.data := compact & compactMask
      fillWriter.io.input.bits.laneCount := response.laneCount
      when(fillWriter.io.input.fire) { fillSent(source) := true.B }
    }
    when(receiving && port.response.valid) {
      if (source == 1) { assert(!plan.fill && plan.sourceIB) }
      assert(response.identity.asUInt === plan.identity.asUInt, "response identity mismatch")
      assert(response.payloadOffset === received(source), "response dropped/reordered")
      assert(response.laneCount > 0.U && response.laneCount <= 4.U)
      assert(response.firstLane +& response.laneCount <= 4.U)
      assert(response.firstLane === (plan.address + response.payloadOffset)(5, 4))
      val wordRoom = 64.U(7.W) - (plan.address + response.payloadOffset)(5, 0)
      assert(bytes === min(wordRoom, plan.payloadBytes - response.payloadOffset),
        "one response must cover the logical intersection of a whole raw word")
      assert(response.payloadOffset +& bytes <= plan.payloadBytes)
      assert(response.segmentLast === (response.payloadOffset +& bytes === plan.payloadBytes))
      when(!ocmSent(source) && sinkReady) { ocmSent(source) := true.B }
    }
    when(port.response.fire) {
      ocmSent(source) := false.B; fillSent(source) := false.B
      received(source) := received(source) + bytes
      when(segmentLast) {
        if (source == 1) {
          table.io.release.valid := true.B
          table.io.release.bits.page := plan.region
          table.io.release.bits.generation := plan.generation
        }
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
