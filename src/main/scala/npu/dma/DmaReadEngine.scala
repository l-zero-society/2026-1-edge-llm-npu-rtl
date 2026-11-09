package npu.dma

import chisel3._
import chisel3.util._

/** Standalone production read dispatch/return path. One refill per target and
  * one physical segment per source. Source reservations include queued issue,
  * all responses and both fill-through sinks. Mapping/config replacement uses
  * global drain; lease-only Release uses the affected logical identity's drain.
  */
class DmaReadEngine(p: DmaReadParams = DmaReadParams(), bankedWrites: Boolean = true) extends Module {
  require(p.ibCapacityBytes <= (BigInt(1)<<20), "four-bank adapter supports at most 1MiB")
  private val targets = ReadTarget.Count
  private val streams = ReadStream.Count
  val io = IO(new Bundle {
    val normConfig = Flipped(Decoupled(new NormSpillConfig(p)))
    val normStore = Flipped(Decoupled(new NormStoreRequest))
    val normStoreResult = Decoupled(new NormStoreResult)
    val normLocalWrite = Decoupled(new NormBackingWrite); val normDramWrite = Decoupled(new NormBackingWrite)
    val normEnabled = Output(Bool()); val normReady = Output(Bool()); val normExternalBytes = Output(UInt(32.W));val normLocalBytes = Output(UInt(32.W))
    val bankWrites = Vec(4,Decoupled(new IbFillWrite))
    val cacheConfig = Flipped(Decoupled(new OcmCacheConfig(p)))
    val cacheWindows = Output(Vec(ReadStream.Count,new OcmCacheConfig(p)))
    val rowTransitions = Output(UInt(32.W))
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
  val ag = Module(new ReadAddressGenerator)
  ag.io.config.valid := io.config.fire; ag.io.config.bits := io.config.bits
  for (s <- 0 until streams) { ag.io.accept(s).valid := false.B; ag.io.accept(s).bits := 0.U }
  val table = Module(new IbPageTable(p))
  val cache = Module(new OcmCacheMap(p))
  cache.io.pages := table.io.pages
  cache.io.config.valid := io.cacheConfig.fire; cache.io.config.bits := io.cacheConfig.bits
  io.cacheWindows := cache.io.windows; io.rowTransitions := cache.io.transitions
  cache.io.rowCommit.valid := false.B; cache.io.rowCommit.bits := 0.U.asTypeOf(new ReadPlan(p))
  table.io.rowAdvance := cache.io.rowAdvance
  val fillWriter = Module(new IbCompactWriter)
  val producer = Module(new IbProducerAdapter(p))
  val normProducer = Module(new IbProducerAdapter(p,IbWriter.Norm))
  val normPhase1 = Module(new NormPhase1Adapter(p))
  val normResolver = Module(new NormSpillResolver(p))
  val normEnabled = RegInit(false.B); val normConfig = Reg(new NormSpillConfig(p)); val normOffset = Reg(UInt(32.W))
  normResolver.io.config := normConfig; normResolver.io.pages := table.io.pages
  normResolver.io.query.offset := normOffset; normResolver.io.query.bytes := 4096.U; normResolver.io.query.write := false.B
  normPhase1.io.config := normConfig; normPhase1.io.pages := table.io.pages
  normPhase1.io.request.valid := io.normStore.valid && normEnabled && !io.pageCommand.valid && !io.normConfig.valid
  normPhase1.io.request.bits := io.normStore.bits
  io.normStore.ready := normPhase1.io.request.ready && normEnabled && !io.pageCommand.valid && !io.normConfig.valid
  io.normStoreResult <> normPhase1.io.result
  io.normLocalWrite <> normPhase1.io.local; io.normDramWrite <> normPhase1.io.dram
  normProducer.io.request <> normPhase1.io.ib; normPhase1.io.ibResult <> normProducer.io.result
  normProducer.io.pages := table.io.pages
  io.normEnabled := normEnabled; io.normReady := !normEnabled || normResolver.io.producerReady
  io.normLocalBytes := Mux(normEnabled,normConfig.localBytes,0.U)
  io.normExternalBytes := Mux(normEnabled,normConfig.totalBytes-normConfig.localBytes,0.U)
  val producersDrained = producer.io.drained && normProducer.io.drained && normPhase1.io.drained
  val writeArbiter = Module(new IbBankWriteAdapter)
  io.pages := table.io.pages
  table.io.command <> io.pageCommand
  io.pageResult <> table.io.result
  table.io.writersDrained := producersDrained
  io.writersDrained := producersDrained && table.io.pages.map(x =>
    !x.allocated || x.metadata.writer === IbWriter.DramFill.U || !x.writerOpen).reduce(_ && _)
  producer.io.pages := table.io.pages
  producer.io.request.valid := io.producerWrite.valid && !io.pageCommand.valid && !io.config.valid
  producer.io.request.bits := io.producerWrite.bits
  io.producerWrite.ready := producer.io.request.ready && !io.pageCommand.valid && !io.config.valid
  io.producerResult <> producer.io.result
  writeArbiter.io.in(0) <> fillWriter.io.write
  writeArbiter.io.in(1) <> producer.io.write
  writeArbiter.io.in(2) <> normProducer.io.write
  if (bankedWrites) {
    io.bankWrites <> writeArbiter.io.banks
    io.fill.valid := false.B; io.fill.bits := 0.U.asTypeOf(new IbFillWrite)
  } else {
    val merge = Module(new IbLegacyBankMerge)
    merge.io.in <> writeArbiter.io.banks; io.fill <> merge.io.out
    for(b <- 0 until 4) { io.bankWrites(b).valid := false.B; io.bankWrites(b).bits := 0.U.asTypeOf(new IbFillWrite) }
  }
  for(b <- 0 until 4) {
    table.io.commits(b).valid := writeArbiter.io.banks(b).fire
    table.io.commits(b).bits := writeArbiter.io.banks(b).bits
  }
  table.io.commitFinal := fillWriter.io.input.fire
  table.io.acquire.valid := false.B; table.io.acquire.bits := 0.U.asTypeOf(new IbReaderLease(p))
  table.io.release.valid := false.B; table.io.release.bits := 0.U.asTypeOf(new IbReaderLease(p))
  fillWriter.io.input.valid := false.B
  fillWriter.io.input.bits := 0.U.asTypeOf(new IbCompactWrite)
  val active = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val pending = RegInit(VecInit(Seq.fill(targets)(false.B)))
  val requests = Reg(Vec(targets, new RefillRequest))
  val releasing = io.pageCommand.valid && io.pageCommand.bits.op === IbPageOp.Release.U
  def releaseReference(r: RefillRequest): Bool = {
    val c = io.pageCommand.bits
    r.contextId === c.expectedContext && r.epoch === c.expectedEpoch && r.logicalId === c.expectedLogicalId
  }
  val releaseDrained = !(0 until targets).map(t => active(t) && releaseReference(requests(t))).reduce(_ || _)
  table.io.controlDrained := io.controlDrained && Mux(releasing, releaseDrained, io.drained)
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
  // Boundary control priority: pageCommand > Norm > pattern > static window.
  io.cacheConfig.ready := io.drained && io.controlDrained && producersDrained && !io.normConfig.valid && !io.pageCommand.valid && !io.config.valid
  io.config.ready := io.drained && io.controlDrained && producersDrained && !io.normConfig.valid && !io.pageCommand.valid
  io.normConfig.ready := io.drained && io.controlDrained && producersDrained && !io.pageCommand.valid
  when(io.normConfig.fire) {
    val c=io.normConfig.bits
    when(c.enabled) {
      val split=c.localBytes +& c.ibBytes;val rest=c.totalBytes-split
      assert(c.localBytes<=c.totalBytes && split<=c.totalBytes)
      assert(c.totalBytes(3,0)===0.U && c.localBytes(3,0)===0.U && c.ibBytes(3,0)===0.U && c.dramSpillBase(3,0)===0.U)
      assert(!(c.dramSpillBase +& rest)(64) && c.pageCount<=p.cachePages.U && c.ibBytes<=c.pageCount*4096.U)
      for(i<-0 until p.cachePages) {
        when(i.U*4096.U<c.ibBytes) {
          val pg=table.io.pages(c.pageSlots(i));val remaining=c.ibBytes-i.U*4096.U
          assert(i.U<c.pageCount && c.pageSlots(i)<p.cachePages.U && pg.allocated)
          assert(pg.metadata.contextId===c.contextId && pg.metadata.epoch===c.epoch && pg.metadata.logicalId===c.logicalId)
          assert(pg.metadata.generation===c.generations(i) && pg.metadata.validBytes===Mux(remaining<4096.U,remaining,4096.U))
          for(j<-0 until i) { assert(c.pageSlots(i)=/=c.pageSlots(j)) }
        }
      }
    }
    normEnabled:=c.enabled;normConfig:=c;normOffset:=c.localBytes
  }
  val incoming = io.refill.bits
  val incomingNorm = normEnabled && incoming.stream === ReadStream.NormSpill.U
  val streamInUse = (0 until targets).map(t => active(t) && requests(t).stream === incoming.stream).reduce(_ || _)
  io.refill.ready := incoming.target < targets.U && incoming.stream < streams.U &&
    !active(incoming.target) && !streamInUse && Mux(incomingNorm,normOffset<normConfig.totalBytes && io.normReady,
      ag.io.view(incoming.stream).configured && !ag.io.view(incoming.stream).exhausted) &&
    !io.config.valid && !io.cacheConfig.valid && !io.normConfig.valid &&
    (!io.pageCommand.valid || (releasing && !releaseReference(incoming)))
  when(io.refill.fire) {
    when(incomingNorm) { assert(incoming.contextId===normConfig.contextId && incoming.epoch===normConfig.epoch && incoming.logicalId===normConfig.logicalId) }
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
    val isNorm = normEnabled && s === ReadStream.NormSpill.U
    val pattern = Wire(new ReadPatternView); pattern := ag.io.view(s)
    when(isNorm) {
      pattern.config := 0.U.asTypeOf(new ReadStreamConfig); pattern.config.direct := true.B
      pattern.gemm := false.B; pattern.configured := true.B; pattern.exhausted := normOffset>=normConfig.totalBytes
      pattern.nextRowBase := 0.U; pattern.nextRowBytes := 0.U
      pattern.address := normOffset; pattern.row := 0.U; pattern.lastPass := true.B; pattern.lastRow := true.B
      pattern.passRemaining := normConfig.totalBytes-normOffset
      pattern.room := Mux(normConfig.totalBytes-normOffset<4096.U,normConfig.totalBytes-normOffset,4096.U)
    }
    val c = pattern.config
    val address = pattern.address
    val pageRoom = 4096.U(13.W) - Mux(isNorm,normResolver.io.result.address,address)(11, 0)
    val candidate = min(min(remaining(t), pattern.room), min(pageRoom, p.maxSegmentBytes.U))
    cache.io.query(t).identity := 0.U.asTypeOf(new ReadIdentity)
    cache.io.query(t).identity.target := t.U
    cache.io.query(t).identity.contextId := req.contextId; cache.io.query(t).identity.epoch := req.epoch
    cache.io.query(t).identity.logicalId := req.logicalId; cache.io.query(t).identity.refillId := req.refillId
    cache.io.query(t).stream := s; cache.io.query(t).address := address; cache.io.query(t).bytes := candidate
    val resolved = Wire(new CacheResolution(p)); resolved := cache.io.result(t)
    when(isNorm) {
      val r=normResolver.io.result
      resolved.bytes := Mux(r.bytes<candidate,r.bytes,candidate)
      resolved.hit := r.location===NormLocation.IB.U
      resolved.unavailable := !r.inRange || !r.available || r.location===NormLocation.Local.U
      resolved.address := r.address;resolved.fill := false.B;resolved.fillAddress := 0.U
      resolved.page := r.page;resolved.generation := r.generation
    }
    val bytes = resolved.bytes
    val hit = resolved.hit
    val cannotRead = (c.ibOnly && !hit) || resolved.unavailable
    val passEnd = bytes === pattern.passRemaining
    val rowEnd = passEnd && pattern.lastPass
    val streamEnd = rowEnd && pattern.lastRow
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
    plan.address := resolved.address
    plan.payloadBytes := bytes
    plan.row := pattern.row
    plan.rowLastUse := pattern.gemm && s === ReadStream.Input.U && rowEnd
    plan.hasNextRow := !pattern.lastRow
    plan.nextRowBase := pattern.nextRowBase
    plan.nextRowBytes := pattern.nextRowBytes
    plan.chunkLast := bytes === remaining(t) || streamEnd || (c.stopAtRowEnd && rowEnd)
    plan.streamLast := streamEnd
    plan.fill := resolved.fill && c.supplyMode === ReadSupplyMode.Stream.U
    plan.fillAddress := resolved.fillAddress; plan.region := resolved.page; plan.generation := resolved.generation
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
      when(isNorm) { normOffset := normOffset + bytes }.otherwise {
        ag.io.accept(s).valid := true.B; ag.io.accept(s).bits := bytes
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
        when(plan.rowLastUse) { cache.io.rowCommit.valid := true.B; cache.io.rowCommit.bits := plan }
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
