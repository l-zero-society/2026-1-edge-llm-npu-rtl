package npu.dma

import chisel3._
import chisel3.util._

case class DmaSchedulerParams(capacityBytes: Int = 8192, chunkEntries: Int = 2, ageLimit: Int = 8,
                              targetCapacityBytes: Seq[Int] = Seq.empty,
                              targetChunkEntries: Seq[Int] = Seq.empty) {
  val capacities = if (targetCapacityBytes.isEmpty) Seq.fill(ReadTarget.Count)(capacityBytes) else targetCapacityBytes
  val entries = if (targetChunkEntries.isEmpty) Seq.fill(ReadTarget.Count)(chunkEntries) else targetChunkEntries
  require(capacities.size == ReadTarget.Count && entries.size == ReadTarget.Count && ageLimit > 0)
  require(capacities.forall(x => x >= 4096 && x % 16 == 0) && entries.forall(_ > 0))
  val maxEntries = entries.max
  val byteBits = log2Ceil(capacities.max + 1)
  val entryBits = math.max(1, log2Ceil(maxEntries + 1))
  val ageBits = math.max(1, log2Ceil(ageLimit + 1))
}
object DmaSchedulerParams {
  // UB/WB: CWC + PLC0/1/2. Aux targets retain the prototype 8KiB/two-entry profile.
  val integrated: DmaSchedulerParams = DmaSchedulerParams(
    targetCapacityBytes = Seq(16384, 16384, 8192, 8192, 8192),
    targetChunkEntries = Seq(4, 4, 2, 2, 2))
}
class DmaTargetStatus(p: DmaReadParams) extends Bundle {
  val enabled = Bool()
  val producerReady = Bool()
  val needsExternalSupply = Bool()
  val demand = Bool()
  val impending = Bool()
  val hungry = Bool()
  val localReservedBytes = UInt(32.W) // fixed non-DMA capacity, exclusive of DMA occupancy/reservation
  val full = Bool() // additional controller admission hold, not a second credit counter
  val requiredPages = UInt(p.cachePages.W)
  val requiredGenerations = Vec(p.cachePages, UInt(32.W))
}
class OcmConsume extends Bundle {
  val identity = new ReadIdentity
  val bytes = UInt(32.W)
  val chunkLast = Bool()
}
class DmaCreditState(s: DmaSchedulerParams) extends Bundle {
  val localReservedBytes = UInt(s.byteBits.W)
  val freeBytes = UInt(s.byteBits.W)
  val reservedBytes = UInt(s.byteBits.W)
  val bufferedBytes = UInt(s.byteBits.W)
  val entriesUsed = UInt(s.entryBits.W)
  val contextError = Bool()
  val active = Bool()
  val staged = Bool()
}
private[dma] object DmaRoundRobin {
  def select(mask: Seq[Bool], last: UInt): UInt = {
    val n = mask.size
    val choices = (0 until n).map { previous =>
      val order = (1 to n).map(k => (previous + k) % n)
      PriorityMux(order.map(i => mask(i) -> i.U(math.max(1, log2Ceil(n)).W)))
    }
    VecInit(choices)(last)
  }
}

/** Combinational current-candidate selection. Only acceptedPlan updates RR/age.
  * Age counts competing accepted service opportunities on the current source.
  */
class DmaSourceScheduler(p: DmaReadParams, s: DmaSchedulerParams = DmaSchedulerParams()) extends Module {
  val io = IO(new Bundle {
    val candidate = Input(Vec(ReadTarget.Count, Valid(new ReadPlan(p))))
    val status = Input(Vec(ReadTarget.Count, new DmaTargetStatus(p)))
    val sourceAvailable = Input(Vec(2, Bool()))
    val acceptedPlan = Input(Vec(2, Valid(new ReadPlan(p))))
    val resetAge = Input(Vec(ReadTarget.Count, Bool()))
    val permit = Output(Vec(ReadTarget.Count, Bool()))
    val age = Output(Vec(ReadTarget.Count, UInt(s.ageBits.W)))
    val last = Output(Vec(2, UInt(3.W)))
  })
  val last = RegInit(VecInit(Seq.fill(2)((ReadTarget.Count - 1).U(3.W))))
  val age = RegInit(VecInit(Seq.fill(ReadTarget.Count)(0.U(s.ageBits.W))))
  io.age := age; io.last := last
  val grants = Wire(Vec(2, Vec(ReadTarget.Count, Bool())))
  for (source <- 0 until 2) {
    val eligible = (0 until ReadTarget.Count).map(t => io.candidate(t).valid &&
      io.candidate(t).bits.sourceIB === (source == 1).B)
    val aged = eligible.indices.map(t => eligible(t) && age(t) === s.ageLimit.U)
    val p0 = eligible.indices.map(t => eligible(t) && (io.status(t).demand || io.status(t).impending))
    val p1 = eligible.indices.map(t => eligible(t) && io.status(t).hungry)
    val anyAged = aged.reduce(_ || _); val anyP0 = p0.reduce(_ || _); val anyP1 = p1.reduce(_ || _)
    val mask = eligible.indices.map(t => Mux(anyAged, aged(t), Mux(anyP0, p0(t), Mux(anyP1, p1(t), eligible(t)))))
    val chosen = DmaRoundRobin.select(mask, last(source))
    for (t <- 0 until ReadTarget.Count) {
      grants(source)(t) := io.sourceAvailable(source) && mask.reduce(_ || _) && chosen === t.U
    }
    when(io.acceptedPlan(source).valid) {
      val plan = io.acceptedPlan(source).bits
      val t = plan.identity.target
      assert(t < ReadTarget.Count.U && grants(source)(t))
      assert(plan.asUInt === io.candidate(t).bits.asUInt, "stale scheduling decision")
      last(source) := t
    }
    assert(PopCount(grants(source)) <= 1.U)
  }
  for (t <- 0 until ReadTarget.Count) {
    io.permit(t) := grants(0)(t) || grants(1)(t)
    val accepted = (0 until 2).map(src => io.acceptedPlan(src).valid &&
      io.acceptedPlan(src).bits.identity.target === t.U).reduce(_ || _)
    val opportunity = Mux(io.candidate(t).bits.sourceIB, io.acceptedPlan(1).valid, io.acceptedPlan(0).valid)
    when(io.resetAge(t) || accepted) { age(t) := 0.U }
      .elsewhen(io.candidate(t).valid && opportunity && age(t) < s.ageLimit.U) { age(t) := age(t) + 1.U }
  }
}

/** Sole OCM byte/chunk-credit owner. Reserve 4096B + one entry at engine
  * refill.fire; accepted OCM bytes move reserve -> occupancy. Completion releases
  * unused reserve, never buffered bytes. Consumers free completed entries only.
  */
class DmaReadScheduler(p: DmaReadParams, s: DmaSchedulerParams = DmaSchedulerParams.integrated) extends Module {
  val n = ReadTarget.Count
  val io = IO(new Bundle {
    val requests = Flipped(Vec(n, Decoupled(new RefillRequest)))
    val status = Input(Vec(n, new DmaTargetStatus(p)))
    val pages = Input(Vec(p.cachePages, new IbPageState))
    val refill = Decoupled(new RefillRequest)
    val candidate = Input(Vec(n, Valid(new ReadPlan(p))))
    val sourceAvailable = Input(Vec(2, Bool()))
    val acceptedPlan = Input(Vec(2, Valid(new ReadPlan(p))))
    val permit = Output(Vec(n, Bool()))
    val delivered = Input(Vec(n, Valid(UInt(7.W))))
    val engineDone = Flipped(Vec(n, Decoupled(new RefillDone)))
    val done = Vec(n, Decoupled(new RefillDone))
    val consume = Flipped(Vec(n, Decoupled(new OcmConsume)))
    val discardCommit = Flipped(Vec(n, Decoupled(new ReadIdentity)))
    val credit = Output(Vec(n, new DmaCreditState(s)))
    val age = Output(Vec(n, UInt(s.ageBits.W)))
    val admissionPause = Input(Bool())
    val holdNewRequests = Input(Bool())
    val controlCommand = Input(Valid(new IbPageCommand(p)))
    val controlConflict = Output(Bool())
    val hasStaged = Output(Bool())
    val controlDrained = Output(Bool())
    val drained = Output(Bool())
  })
  val staged = RegInit(VecInit(Seq.fill(n)(false.B)))
  val requests = Reg(Vec(n, new RefillRequest))
  val active = RegInit(VecInit(Seq.fill(n)(false.B)))
  val activeRequest = Reg(Vec(n, new RefillRequest))
  val reserved = RegInit(VecInit(Seq.fill(n)(0.U(s.byteBits.W))))
  val occupancy = RegInit(VecInit(Seq.fill(n)(0.U(s.byteBits.W))))
  val used = RegInit(VecInit(Seq.fill(n)(0.U(s.entryBits.W))))
  val delivered = RegInit(VecInit(Seq.fill(n)(0.U(13.W))))
  val contextError = RegInit(VecInit(Seq.fill(n)(false.B)))
  val completeCount = RegInit(VecInit(Seq.fill(n)(0.U(s.entryBits.W))))
  val ptrBits = math.max(1, log2Ceil(s.maxEntries))
  val head = RegInit(VecInit(Seq.fill(n)(0.U(ptrBits.W))))
  val tail = RegInit(VecInit(Seq.fill(n)(0.U(ptrBits.W))))
  val ids = Reg(Vec(n, Vec(s.maxEntries, new ReadIdentity)))
  val remaining = Reg(Vec(n, Vec(s.maxEntries, UInt(13.W))))
  val errors = Reg(Vec(n, Vec(s.maxEntries, Bool())))
  def next(ptr: UInt, t: Int): UInt = Mux(ptr === (s.entries(t) - 1).U, 0.U, ptr + 1.U)
  val locked = RegInit(false.B)
  val held = Reg(UInt(3.W))
  val lastAdmission = RegInit((n - 1).U(3.W))
  val eligible = Wire(Vec(n, Bool()))
  val controlPage = io.pages(io.controlCommand.bits.page)
  val releasePending = io.controlCommand.valid && io.controlCommand.bits.op === IbPageOp.Release.U
  def referencesPage(r: RefillRequest): Bool =
    r.contextId === controlPage.metadata.contextId && r.epoch === controlPage.metadata.epoch &&
      r.logicalId === controlPage.metadata.logicalId
  for (t <- 0 until n) {
    io.requests(t).ready := !staged(t) && !io.holdNewRequests && io.status(t).enabled &&
      io.status(t).needsExternalSupply && !contextError(t) &&
      !(releasePending && controlPage.allocated && referencesPage(io.requests(t).bits))
    when(io.requests(t).fire) {
      assert(io.requests(t).bits.target === t.U)
      requests(t) := io.requests(t).bits; staged(t) := true.B
    }
    val occupied = occupancy(t) +& reserved(t) +& io.status(t).localReservedBytes
    val free = Mux(occupied <= s.capacities(t).U,s.capacities(t).U - occupied,0.U)
    assert(occupied <= s.capacities(t).U, "local capacity and DMA credits must have one owner")
    val streamBusy = (0 until n).map(i => active(i) && activeRequest(i).stream === requests(t).stream).reduce(_ || _)
    val pagesReady = (0 until p.cachePages).map { page =>
      val x = io.pages(page); val m = x.metadata; val r = requests(t)
      !io.status(t).requiredPages(page) || (x.allocated && x.pageValid && !x.writerOpen &&
        m.consumers.orR && m.contextId === r.contextId && m.epoch === r.epoch && m.logicalId === r.logicalId &&
        m.generation === io.status(t).requiredGenerations(page))
    }.reduce(_ && _)
    eligible(t) := staged(t) && !active(t) && !streamBusy && !contextError(t) &&
      io.status(t).enabled && io.status(t).needsExternalSupply && io.status(t).producerReady && pagesReady &&
      !io.status(t).full && free >= 4096.U && used(t) < s.entries(t).U
    io.credit(t).localReservedBytes := io.status(t).localReservedBytes
    io.credit(t).freeBytes := free; io.credit(t).reservedBytes := reserved(t)
    io.credit(t).bufferedBytes := occupancy(t); io.credit(t).entriesUsed := used(t)
    io.credit(t).contextError := contextError(t); io.credit(t).active := active(t); io.credit(t).staged := staged(t)
  }
  // A held descriptor has no reservation. Recheck eligibility on EVERY fire;
  // an ineligible held target stays staged while other targets can proceed.
  val keepHeld = locked && eligible(held) && !io.admissionPause
  val pick = Mux(keepHeld, held, DmaRoundRobin.select(eligible.toSeq, lastAdmission))
  io.refill.valid := eligible.asUInt.orR && !io.admissionPause
  io.refill.bits := requests(pick)
  when(locked && (!eligible(held) || io.admissionPause)) { locked := false.B }
  when(io.refill.valid && !io.refill.ready) { locked := true.B; held := pick }
  when(io.refill.fire) {
    locked := false.B; lastAdmission := pick
    staged(pick) := false.B; active(pick) := true.B; activeRequest(pick) := io.refill.bits
  }
  val oldReferences = (0 until n).map(t => staged(t) && referencesPage(requests(t))).reduce(_ || _)
  io.controlConflict := io.controlCommand.valid && io.controlCommand.bits.page < p.cachePages.U &&
    controlPage.allocated && (controlPage.metadata.consumers.orR || controlPage.metadata.keepWeight) && oldReferences
  io.hasStaged := staged.asUInt.orR
  val releasedReferences = (0 until n).map { t =>
    val buffered = (0 until s.entries(t)).map { k =>
      // Scan static slots, avoiding a wide identity mux for each ring offset.
      val distance = Mux(k.U >= head(t), k.U - head(t), (k + s.entries(t)).U - head(t))
      val id = ids(t)(k)
      distance < completeCount(t) && id.contextId === controlPage.metadata.contextId &&
        id.epoch === controlPage.metadata.epoch && id.logicalId === controlPage.metadata.logicalId
    }.reduce(_ || _)
    (active(t) && referencesPage(activeRequest(t))) || buffered
  }.reduce(_ || _)
  val allDrained = (!locked || io.admissionPause) && !active.asUInt.orR && !used.asUInt.orR && !io.controlConflict
  // Release changes leases only. Unrelated occupancy/requests need not drain.
  io.controlDrained := Mux(releasePending, !io.controlConflict && !releasedReferences, allDrained)
  io.drained := allDrained && !staged.asUInt.orR
  val source = Module(new DmaSourceScheduler(p, s))
  source.io.status := io.status; source.io.sourceAvailable := io.sourceAvailable
  source.io.acceptedPlan := io.acceptedPlan; io.permit := source.io.permit; io.age := source.io.age
  for (t <- 0 until n) {
    source.io.candidate(t) := io.candidate(t)
    source.io.candidate(t).valid := io.candidate(t).valid && active(t)
    source.io.resetAge(t) := io.refill.fire && pick === t.U
    val reserve = io.refill.fire && pick === t.U
    val bytes = Mux(io.delivered(t).valid, io.delivered(t).bits, 0.U)
    val front = head(t)
    val consume = io.consume(t)
    val discard = io.discardCommit(t)
    val present = completeCount(t) > 0.U
    val matchConsume = consume.bits.identity.asUInt === ids(t)(front).asUInt
    consume.ready := present && !errors(t)(front) && matchConsume && consume.bits.bytes > 0.U &&
      consume.bits.bytes <= remaining(t)(front) &&
      (consume.bits.chunkLast === (consume.bits.bytes === remaining(t)(front)))
    discard.ready := present && errors(t)(front) && discard.bits.asUInt === ids(t)(front).asUInt
    val pop = (consume.fire && consume.bits.chunkLast) || discard.fire
    val consumedBytes = Mux(discard.fire, remaining(t)(front), Mux(consume.fire, consume.bits.bytes, 0.U))
    io.done(t).valid := io.engineDone(t).valid && completeCount(t) < s.entries(t).U
    io.done(t).bits := io.engineDone(t).bits
    io.engineDone(t).ready := io.done(t).ready && completeCount(t) < s.entries(t).U
    val completed = io.engineDone(t).fire
    val unused = Mux(completed, 4096.U - delivered(t), 0.U)
    reserved(t) := reserved(t) + Mux(reserve, 4096.U, 0.U) - bytes - unused
    occupancy(t) := occupancy(t) + bytes - consumedBytes
    used(t) := used(t) + reserve.asUInt - pop.asUInt
    completeCount(t) := completeCount(t) + completed.asUInt - pop.asUInt
    when(reserve) { delivered(t) := 0.U }
    when(io.delivered(t).valid) {
      assert(active(t) && bytes > 0.U && bytes <= reserved(t))
      delivered(t) := delivered(t) + bytes
    }
    when(completed) {
      assert(active(t) && io.engineDone(t).bits.committedBytes === delivered(t))
      ids(t)(tail(t)) := io.engineDone(t).bits.identity
      remaining(t)(tail(t)) := delivered(t); errors(t)(tail(t)) := io.engineDone(t).bits.error
      tail(t) := next(tail(t), t); active(t) := false.B
      when(io.engineDone(t).bits.error) { contextError(t) := true.B }
    }
    when(consume.fire && !consume.bits.chunkLast) {
      remaining(t)(front) := remaining(t)(front) - consume.bits.bytes
    }
    when(pop) { head(t) := next(front, t) }
    when(discard.fire) { contextError(t) := false.B }
    assert(occupancy(t) +& reserved(t) <= s.capacities(t).U)
    assert(used(t) <= s.entries(t).U && completeCount(t) <= used(t))
    when(completed) { assert(!io.delivered(t).valid, "done follows the last payload, not the same cycle") }
  }
}
