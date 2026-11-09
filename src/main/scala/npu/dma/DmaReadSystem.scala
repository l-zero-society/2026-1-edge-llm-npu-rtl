package npu.dma

import chisel3._
import chisel3.util._

class DmaReadSystemIO(p: DmaReadParams, s: DmaSchedulerParams) extends Bundle {
  val normConfig = Flipped(Decoupled(new NormSpillConfig(p)))
  val normStore = Flipped(Decoupled(new NormStoreRequest)); val normStoreResult = Decoupled(new NormStoreResult)
  val normLocalWrite = Decoupled(new NormBackingWrite); val normDramWrite = Decoupled(new NormBackingWrite)
  val normEnabled = Output(Bool());val normReady = Output(Bool());val normExternalBytes = Output(UInt(32.W));val normLocalBytes = Output(UInt(32.W))
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
  val requests = Flipped(Vec(ReadTarget.Count, Decoupled(new RefillRequest)))
  val status = Input(Vec(ReadTarget.Count, new DmaTargetStatus(p)))
  val consume = Flipped(Vec(ReadTarget.Count, Decoupled(new OcmConsume)))
  val discardCommit = Flipped(Vec(ReadTarget.Count, Decoupled(new ReadIdentity)))
  val credit = Output(Vec(ReadTarget.Count, new DmaCreditState(s)))
  val age = Output(Vec(ReadTarget.Count, UInt(s.ageBits.W)))
  val dram = new ReadBurstPort(p)
  val wordRead = Decoupled(new IbWordRead)
  val wordResponse = Flipped(Decoupled(UInt(512.W)))
  val fill = Decoupled(new IbFillWrite) // unified durable DRAM-fill / producer write port
  val memory = Vec(ReadTarget.Count, Decoupled(new MemoryReadData))
  val done = Vec(ReadTarget.Count, Decoupled(new RefillDone))
  val nextReadRequest = Output(Vec(ReadTarget.Count, Valid(new ReadPlan(p))))
  val sourceAvailable = Output(Vec(2, Bool()))
  val acceptedPlan = Output(Vec(2, Valid(new ReadPlan(p))))
  val permits = Output(Vec(ReadTarget.Count, Bool()))
  val admitted = Output(Valid(new RefillRequest))
  val drained = Output(Bool())
  val writersDrained = Output(Bool())
  val computeStall = Input(Bool()) // deliberately not a memory clock-enable
}

/** Typed integration boundary for OCM owners. No controller/RF/ABI changes.
  * The optional physical single-port arbiter is separate from source scheduling.
  */
class DmaReadSystem(p: DmaReadParams = DmaReadParams(), s: DmaSchedulerParams = DmaSchedulerParams.integrated,
                    sharedIbPort: Boolean = false, bankedWrites: Boolean = true) extends Module {
  val io = IO(new DmaReadSystemIO(p, s))
  val engine = Module(new DmaReadEngine(p,bankedWrites))
  val scheduler = Module(new DmaReadScheduler(p, s))
  val ib = Module(new IbBurstReader(p))
  engine.io.normConfig.valid := io.normConfig.valid && !scheduler.io.hasStaged
  engine.io.normConfig.bits := io.normConfig.bits; io.normConfig.ready := engine.io.normConfig.ready && !scheduler.io.hasStaged
  engine.io.normStore <> io.normStore; io.normStoreResult <> engine.io.normStoreResult
  io.normLocalWrite <> engine.io.normLocalWrite;io.normDramWrite <> engine.io.normDramWrite
  io.normEnabled := engine.io.normEnabled;io.normReady := engine.io.normReady;io.normExternalBytes := engine.io.normExternalBytes;io.normLocalBytes := engine.io.normLocalBytes
  engine.io.cacheConfig.valid := io.cacheConfig.valid && !scheduler.io.hasStaged
  engine.io.cacheConfig.bits := io.cacheConfig.bits
  io.cacheConfig.ready := engine.io.cacheConfig.ready && !scheduler.io.hasStaged
  io.cacheWindows := engine.io.cacheWindows; io.rowTransitions := engine.io.rowTransitions
  engine.io.config.valid := io.config.valid && !scheduler.io.hasStaged
  engine.io.config.bits := io.config.bits
  io.config.ready := engine.io.config.ready && !scheduler.io.hasStaged
  val finish = io.pageCommand.bits.op === IbPageOp.FinishWriter.U
  val release = io.pageCommand.bits.op === IbPageOp.Release.U
  val controlAllowed = finish || scheduler.io.controlDrained
  engine.io.pageCommand.valid := io.pageCommand.valid && controlAllowed
  engine.io.pageCommand.bits := io.pageCommand.bits
  io.pageCommand.ready := engine.io.pageCommand.ready && controlAllowed
  io.pageResult <> engine.io.pageResult
  engine.io.producerWrite <> io.producerWrite; io.producerResult <> engine.io.producerResult
  io.pages := engine.io.pages; io.writersDrained := engine.io.writersDrained
  engine.io.controlDrained := scheduler.io.controlDrained
  scheduler.io.controlCommand.valid := io.pageCommand.valid && !finish
  scheduler.io.controlCommand.bits := io.pageCommand.bits
  scheduler.io.holdNewRequests := io.config.valid || io.cacheConfig.valid || io.normConfig.valid || (io.pageCommand.valid && !release)
  // Drain already staged old consumers instead of deadlocking them behind a
  // control hold. New-context producer waiters do not block retained rebind.
  scheduler.io.admissionPause := ((io.config.valid || io.cacheConfig.valid || io.normConfig.valid) && !scheduler.io.hasStaged) ||
    (io.pageCommand.valid && !finish && !release && !scheduler.io.controlConflict)
  scheduler.io.requests <> io.requests; scheduler.io.status := io.status
  scheduler.io.status(ReadTarget.NB).localReservedBytes := Mux(engine.io.normEnabled,engine.io.normLocalBytes,io.status(ReadTarget.NB).localReservedBytes)
  when(io.normConfig.fire && io.normConfig.bits.enabled){assert(io.normConfig.bits.localBytes<=s.capacities(ReadTarget.NB).U)}
  scheduler.io.status(ReadTarget.NB).producerReady := io.status(ReadTarget.NB).producerReady && engine.io.normReady
  scheduler.io.status(ReadTarget.NB).needsExternalSupply := io.status(ReadTarget.NB).needsExternalSupply &&
    (!engine.io.normEnabled || engine.io.normExternalBytes =/= 0.U)
   scheduler.io.pages := engine.io.pages
  engine.io.refill <> scheduler.io.refill
  scheduler.io.candidate := engine.io.nextReadRequest
  scheduler.io.sourceAvailable := engine.io.sourceAvailable
  scheduler.io.acceptedPlan := engine.io.acceptedPlan
  engine.io.schedulePermit := scheduler.io.permit
  scheduler.io.consume <> io.consume; scheduler.io.discardCommit <> io.discardCommit
  io.credit := scheduler.io.credit; io.age := scheduler.io.age
  io.nextReadRequest := engine.io.nextReadRequest; io.sourceAvailable := engine.io.sourceAvailable
  io.acceptedPlan := engine.io.acceptedPlan; io.permits := scheduler.io.permit
  io.admitted.valid := engine.io.refill.fire; io.admitted.bits := engine.io.refill.bits
  io.drained := engine.io.drained && engine.io.writersDrained && scheduler.io.drained && !io.pageResult.valid
  io.dram <> engine.io.dram
  ib.io.burst <> engine.io.ib
  ib.io.wordResponse <> io.wordResponse
  for (t <- 0 until ReadTarget.Count) {
    io.memory(t) <> engine.io.memory(t)
    scheduler.io.delivered(t).valid := io.memory(t).fire
    scheduler.io.delivered(t).bits := PopCount(io.memory(t).bits.memoryLaneValidMask) << 4
    scheduler.io.engineDone(t) <> engine.io.done(t)
    io.done(t) <> scheduler.io.done(t)
  }
  if (bankedWrites) {
    require(!sharedIbPort,"banked writes use a separate read port with same-word hazard serialization")
    val hazard=Module(new IbReadWriteHazard)
    hazard.io.read <> ib.io.wordRead;io.wordRead <> hazard.io.backing;io.fill <> engine.io.fill
    hazard.io.writes <> engine.io.bankWrites;io.bankWrites <> hazard.io.backingWrites
  } else if (sharedIbPort) {
    io.bankWrites <> engine.io.bankWrites
    val arbiter = Module(new IbReadFillArbiter)
    arbiter.io.read <> ib.io.wordRead; arbiter.io.fill <> engine.io.fill
    io.wordRead <> arbiter.io.backingRead; io.fill <> arbiter.io.backingFill
    assert(!(io.wordRead.valid && io.fill.valid))
  } else {
    io.bankWrites <> engine.io.bankWrites
    io.wordRead <> ib.io.wordRead; io.fill <> engine.io.fill
  }
}
