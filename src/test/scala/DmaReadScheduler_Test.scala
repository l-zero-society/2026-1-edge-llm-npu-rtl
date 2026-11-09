package npu.dma

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import DmaReadTestModel._

class DmaSourceSchedulerTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "DMA source scheduler"
  private val p = DmaReadParams(pagesPerRegion = 2)
  private def init(d: DmaSourceScheduler, ib: Set[Int] = Set.empty): Unit = {
    for (src <- 0 until 2) {
      d.io.sourceAvailable(src).poke(true.B); d.io.acceptedPlan(src).valid.poke(false.B)
    }
    for (t <- 0 until 5) {
      d.io.resetAge(t).poke(false.B)
      val c = d.io.candidate(t); c.valid.poke(true.B)
      val x = c.bits
      x.identity.target.poke(t.U); x.identity.contextId.poke(1.U); x.identity.epoch.poke(2.U)
      x.identity.logicalId.poke((10 + t).U); x.identity.refillId.poke((100 + t).U)
      x.row.poke(0.U);x.rowLastUse.poke(false.B);x.hasNextRow.poke(false.B);x.nextRowBase.poke(0.U);x.nextRowBytes.poke(0.U)
      x.stream.poke(t.U); x.phase.poke((20 + t).U); x.destinationOffset.poke((64 * t).U)
      x.canonicalAddress.poke((0x1000 + t * 4096).U); x.address.poke((0x8000 + t * 4096).U)
      x.sourceIB.poke(ib(t).B); x.payloadBytes.poke(64.U)
      x.chunkLast.poke(true.B); x.streamLast.poke(true.B); x.fill.poke(false.B)
      x.fillAddress.poke(0.U); x.region.poke(0.U); x.generation.poke(1.U)
      val s = d.io.status(t)
      s.localReservedBytes.poke(0.U)
      s.enabled.poke(true.B); s.producerReady.poke(true.B); s.needsExternalSupply.poke(true.B)
      s.demand.poke(false.B); s.impending.poke(false.B); s.hungry.poke(false.B); s.full.poke(false.B)
      s.requiredPages.poke(0.U)
      for (i <- 0 until p.cachePages) s.requiredGenerations(i).poke(0.U)
    }
  }
  private def winner(d: DmaSourceScheduler, src: Int): Int = {
    val winners = (0 until 5).filter(t => d.io.permit(t).peek().litToBoolean &&
      d.io.candidate(t).bits.sourceIB.peek().litToBoolean == (src == 1))
    assert(winners.size == 1); winners.head
  }
  private def accept(d: DmaSourceScheduler, src: Int, target: Int): Unit = {
    d.io.acceptedPlan(src).bits.poke(d.io.candidate(target).bits.peek())
    d.io.acceptedPlan(src).valid.poke(true.B)
  }

  it should "apply P0 P1 P2 and advance only on actual accepts with independent sources" in {
    test(new DmaSourceScheduler(p)).withAnnotations(DmaReadTestModel.backend) { d =>
      init(d, Set(4))
      d.io.status(1).hungry.poke(true.B)
      d.io.status(2).demand.poke(true.B); d.io.status(3).impending.poke(true.B)
      assert(winner(d, 0) == 2 && winner(d, 1) == 4)
      for (_ <- 0 until 12) {
        assert(winner(d, 0) == 2)
        d.io.last(0).expect(4.U); d.io.age(1).expect(0.U)
        d.clock.step()
      }
      accept(d, 0, 2); accept(d, 1, 4); d.clock.step()
      for (src <- 0 until 2) d.io.acceptedPlan(src).valid.poke(false.B)
      assert(winner(d, 0) == 3); d.io.last(0).expect(2.U); d.io.last(1).expect(4.U)
      d.io.candidate(2).valid.poke(false.B); d.io.candidate(3).valid.poke(false.B)
      assert(winner(d, 0) == 1)
      d.io.candidate(1).valid.poke(false.B); assert(winner(d, 0) == 0)
      d.io.sourceAvailable(0).poke(false.B)
      for (_ <- 0 until 20) {
        d.io.permit(0).expect(false.B); assert(winner(d, 1) == 4)
        accept(d, 1, 4); d.clock.step(); d.io.acceptedPlan(1).valid.poke(false.B)
      }
      d.io.last(0).expect(2.U); d.io.age(0).expect(1.U)
    }
  }

  it should "round robin equal priorities independently across all five targets" in {
    test(new DmaSourceScheduler(p)).withAnnotations(DmaReadTestModel.backend) { d =>
      init(d, Set(3, 4))
      for (t <- 0 until 5) d.io.status(t).hungry.poke(true.B)
      for (round <- 0 until 12) {
        val a = round % 3; val b = 3 + round % 2
        assert(winner(d, 0) == a && winner(d, 1) == b)
        accept(d, 0, a); accept(d, 1, b); d.clock.step()
        for (src <- 0 until 2) d.io.acceptedPlan(src).valid.poke(false.B)
      }
    }
  }

  it should "promote an aged prefetch under continuous P0 and preserve age across source changes" in {
    test(new DmaSourceScheduler(p)).withAnnotations(DmaReadTestModel.backend) { d =>
      init(d)
      for (t <- Seq(2, 3)) d.io.candidate(t).valid.poke(false.B)
      for (t <- Seq(0, 1)) d.io.status(t).demand.poke(true.B)
      for (opportunity <- 0 until 8) {
        val t = winner(d, 0); assert(t == opportunity % 2)
        accept(d, 0, t); d.clock.step(); d.io.acceptedPlan(0).valid.poke(false.B)
      }
      d.io.age(4).expect(8.U); assert(winner(d, 0) == 4)
      val identity = d.io.candidate(4).bits.identity.peek()
      d.io.candidate(4).bits.sourceIB.poke(true.B)
      d.io.candidate(4).bits.address.poke(0xc000.U)
      assert(winner(d, 1) == 4)
      d.clock.step(5); d.io.age(4).expect(8.U)
      d.io.candidate(4).bits.identity.expect(identity)
      accept(d, 1, 4); d.clock.step(); d.io.acceptedPlan(1).valid.poke(false.B)
      d.io.age(4).expect(0.U)
      info("P2 promoted after 8 competing accepted opportunities; no wall-clock bound during source stall")
    }
  }

  it should "recheck full and enabled before reserving a held admission without blocking other targets" in {
    test(new DmaReadScheduler(p, DmaSchedulerParams())).withAnnotations(DmaReadTestModel.backend) { d =>
      d.io.admissionPause.poke(false.B);d.io.holdNewRequests.poke(false.B)
      d.io.controlCommand.valid.poke(false.B);d.io.refill.ready.poke(false.B)
      for(src<-0 until 2) {
        d.io.sourceAvailable(src).poke(true.B);d.io.acceptedPlan(src).valid.poke(false.B)
      }
      for(t<-0 until 5) {
        d.io.requests(t).valid.poke(false.B);d.io.candidate(t).valid.poke(false.B)
        d.io.delivered(t).valid.poke(false.B);d.io.engineDone(t).valid.poke(false.B)
        d.io.done(t).ready.poke(true.B);d.io.consume(t).valid.poke(false.B);d.io.discardCommit(t).valid.poke(false.B)
        val x=d.io.status(t)
        x.localReservedBytes.poke(0.U)
        x.enabled.poke(true.B);x.needsExternalSupply.poke(true.B);x.producerReady.poke(true.B)
        x.full.poke(false.B);x.demand.poke(false.B);x.impending.poke(false.B);x.hungry.poke(false.B)
        x.requiredPages.poke(0.U)
      }
      def request(t:Int,id:Int):Unit={
        val r=d.io.requests(t).bits
        r.target.poke(t.U);r.stream.poke((t+2).U);r.phase.poke((20+t).U)
        r.contextId.poke(8.U);r.epoch.poke(9.U);r.logicalId.poke((30+t).U)
        r.refillId.poke(id.U);r.payloadBytes.poke(64.U);r.destinationOffset.poke(32.U)
        d.io.requests(t).valid.poke(true.B);d.clock.step();d.io.requests(t).valid.poke(false.B)
      }
      request(0,77)
      d.io.refill.valid.expect(true.B);val held=d.io.refill.bits.peek()
      d.clock.step() // lock the current offer
      // Full alone invalidates this unreserved offer, even with backend ready.
      d.io.status(0).full.poke(true.B);d.io.refill.ready.poke(true.B)
      for(_<-0 until 8) {
        d.io.refill.valid.expect(false.B);d.clock.step()
        d.io.credit(0).reservedBytes.expect(0.U);d.io.credit(0).entriesUsed.expect(0.U)
      }
      request(1,88)
      d.io.refill.valid.expect(true.B);d.io.refill.bits.refillId.expect(88.U);d.clock.step()
      d.io.credit(1).reservedBytes.expect(4096.U);d.io.credit(1).entriesUsed.expect(1.U)
      // Disabled alone must have the same effect. The original identity stays staged.
      d.io.status(0).full.poke(false.B);d.io.status(0).enabled.poke(false.B)
      for(_<-0 until 8) {
        d.io.refill.valid.expect(false.B);d.clock.step()
        d.io.credit(0).reservedBytes.expect(0.U);d.io.credit(0).entriesUsed.expect(0.U)
      }
      request(2,99)
      d.io.refill.bits.refillId.expect(99.U);d.clock.step()
      d.io.credit(2).reservedBytes.expect(4096.U)
      d.io.status(0).enabled.poke(true.B)
      d.io.refill.valid.expect(true.B);d.io.refill.bits.expect(held);d.clock.step()
      for(_<-0 until 8) {
        d.io.refill.valid.expect(false.B);d.clock.step()
        d.io.credit(0).reservedBytes.expect(4096.U);d.io.credit(0).entriesUsed.expect(1.U)
        d.io.credit(0).freeBytes.expect(4096.U)
      }
    }
  }
}

class DmaReadArbiterTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "DMA scheduler integration"

  it should "drain each source while the other stalls and accept two sources after independent admissions" in {
    test(new DmaReadHarness(scheduled = true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s = new Sim(d, stalls = false)
      s.map()
      s.configure(Config(tiles = 16))
      s.issue(bytes = 4096, refill = 1); s.check(1, span(0x1000, 4096)); s.consume(Id(0,1,1,1), 4096)
      for ((stream, base, bytes) <- Seq((0,0x1000,64),(1,0x5000,64),(3,0x1000,4096),(4,0x6000,4096)))
        s.configure(Config(stream = stream, base = base, tileBytes = bytes, tail = bytes))
      s.dramAllow = false; s.backingAllow = false
      s.issue(bytes = 64, refill = 2)
      s.issue(stream = 1, target = 1, bytes = 64, refill = 3)
      s.waitFor(!s.b(d.io.sourceAvailable(0)) && !s.b(d.io.sourceAvailable(1)))
      s.issue(stream = 3, target = 2, bytes = 4096, refill = 4)
      s.issue(stream = 4, target = 3, bytes = 4096, refill = 5)
      s.waitFor(s.admissions.exists(_.refill == 4) && s.admissions.exists(_.refill == 5))
      for (_ <- 0 until 24) {
        d.io.nextReadRequest(2).valid.expect(true.B); d.io.nextReadRequest(3).valid.expect(true.B)
        s.tick()
      }
      d.io.computeStall.poke(true.B)
      s.dramAllow = true; s.backingAllow = true
      s.check(2, span(0x1000,64)); s.check(3, span(0x5000,64))
      s.check(4, span(0x1000,4096)); s.check(5, span(0x6000,4096))
      assert(s.simultaneousAccept > 0 && s.simultaneousFull > 20)
      assert(s.admissions.map(_.refill).sorted.toSeq == Seq(1,2,3,4,5))
      info(s"System: ${s.simultaneousAccept} dual-source accepts; ${s.simultaneousFull} simultaneous full-beat cycles")
    }
  }

  it should "allow IB during long DRAM stalls and DRAM during long IB stalls" in {
    test(new DmaReadHarness(scheduled = true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s = new Sim(d)
      s.map(bytes = 64)
      s.configure(Config(tileBytes = 64, tail = 64))
      s.issue(bytes=64,refill=1); s.check(1,span(0x1000,64)); s.consume(Id(0,1,1,1),64)
      s.configure(Config(passes = 2, tileBytes = 64, tail = 64))
      s.configure(Config(stream=1,base=0x5000,passes=2,tileBytes=64,tail=64))
      s.dramAllow = false
      s.issue(bytes=64,refill=2); s.issue(stream=1,target=1,bytes=64,refill=3)
      s.check(2,span(0x1000,64),streamLast=false)
      for (_ <- 0 until 30) s.tick()
      assert(!s.dones.exists(_.id.refill==3))
      s.dramAllow=true; s.check(3,span(0x5000,64),streamLast=false)
      s.backingAllow=false
      s.issue(bytes=64,refill=4); s.issue(stream=1,target=1,bytes=64,refill=5)
      s.check(5,span(0x5000,64))
      for (_ <- 0 until 30) s.tick()
      assert(!s.dones.exists(_.id.refill==4))
      s.backingAllow=true; s.check(4,span(0x1000,64))
    }
  }

  it should "reserve once and finish continuations despite full hungry and enable changes" in {
    test(new DmaReadHarness(DmaReadParams(pagesPerRegion=2,maxSegmentBytes=48), scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s = new Sim(d)
      s.configure(Config(tiles=16))
      s.ocmAllow=false
      s.issue(bytes=4096,refill=1)
      s.waitFor(s.admissions.exists(_.refill==1))
      d.io.credit(0).reservedBytes.expect(4096.U); d.io.credit(0).entriesUsed.expect(1.U)
      d.io.status(0).full.poke(true.B); d.io.status(0).hungry.poke(false.B)
      d.io.status(0).enabled.poke(false.B); d.io.status(0).needsExternalSupply.poke(false.B)
      d.io.computeStall.poke(true.B)
      for (_ <- 0 until 15) s.tick()
      s.ocmAllow=true; s.check(1,span(0x1000,4096))
      assert(s.admissions.count(_.refill==1)==1 && s.plans.count(_.id.refill==1)>80)
      d.io.credit(0).reservedBytes.expect(0.U); d.io.credit(0).bufferedBytes.expect(4096.U)
      d.io.credit(0).entriesUsed.expect(1.U)
      s.consume(Id(0,1,1,1),4096)
      d.io.credit(0).freeBytes.expect(8192.U); d.io.credit(0).entriesUsed.expect(0.U)
    }
  }

  it should "keep tail full thresholds chunk exhaustion and simultaneous consume commit accounting exact" in {
    test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s = new Sim(d,stalls=false)
      s.configure(Config(passes=4,tileBytes=16,tail=16))
      s.doneAllow=false
      d.io.status(0).full.poke(true.B)
      s.issue(bytes=16,refill=1)
      for (_ <- 0 until 10) s.tick()
      assert(s.admissions.isEmpty)
      d.io.status(0).full.poke(false.B)
      s.waitFor(s.b(d.io.done(0).valid))
      d.io.credit(0).bufferedBytes.expect(16.U); d.io.credit(0).reservedBytes.expect(4080.U)
      d.io.consume(0).ready.expect(false.B)
      for (_<-0 until 12)s.tick()
      s.doneAllow=true
      s.check(1,span(0x1000,16),streamLast=false)
      s.issue(bytes=16,refill=2); s.check(2,span(0x1000,16),streamLast=false)
      d.io.credit(0).freeBytes.expect(8160.U); d.io.credit(0).entriesUsed.expect(2.U)
      s.issue(bytes=16,refill=3)
      for (_ <- 0 until 10) s.tick()
      assert(!s.admissions.exists(_.refill==3)) // bytes are free, chunk entries are exhausted
      s.consume(Id(0,1,1,1),16)
      s.ocmAllow=false
      s.waitFor(s.admissions.exists(_.refill==3))
      d.io.credit(0).reservedBytes.expect(4096.U); d.io.credit(0).freeBytes.expect(4080.U)
      // A 16B consumption and the new 16B OCM payload occur on the same edge.
      s.waitFor(s.b(d.io.memory(0).valid))
      val consume=d.io.consume(0)
      s.idPoke(consume.bits.identity,Id(0,1,1,2)); consume.bits.bytes.poke(16.U)
      consume.bits.chunkLast.poke(true.B); consume.valid.poke(true.B)
      s.ocmAllow=true; s.tick(); consume.valid.poke(false.B)
      s.check(3,span(0x1000,16),streamLast=false)
      d.io.credit(0).bufferedBytes.expect(16.U); d.io.credit(0).reservedBytes.expect(0.U)
      s.consume(Id(0,1,1,3),16)
      d.io.credit(0).freeBytes.expect(8192.U)
    }
  }

  it should "preserve buffered error bytes until confirmed discard and wait for every producer page" in {
    test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s = new Sim(d)
      // Invalid IB-only errors reserve an entry but cannot manufacture DRAM.
      s.configure(Config(ibOnly=true,tileBytes=64,tail=64))
      s.issue(bytes=64,refill=1)
      assert(s.finish(1).error && s.dramRequests.isEmpty)
      d.io.credit(0).contextError.expect(true.B); d.io.credit(0).entriesUsed.expect(1.U)
      d.io.credit(0).bufferedBytes.expect(0.U); d.io.credit(0).reservedBytes.expect(0.U)
      s.discard(Id(0,1,1,1)); d.io.credit(0).contextError.expect(false.B)
      // Two pages form one required producer row. One finished page is insufficient.
      val a=PageSpec(bytes=64,writer=IbWriter.Output,consumers=0,dramReadable=false)
      val b=a.copy(canonical=0x2000,physical=0x9000)
      assert(s.pageCommand(IbPageOp.Allocate,0,a)==0)
      assert(s.pageCommand(IbPageOp.Allocate,1,b)==0)
      s.configure(Config(ibOnly=true,tileBytes=64,tail=64))
      d.io.status(0).requiredPages.poke(3.U)
      for (i<-Seq(0,1)) d.io.status(0).requiredGenerations(i).poke(1.U)
      s.issue(bytes=64,refill=2)
      for (page<-Seq(0,1)) {
        val data=(0 until 64).foldLeft(BigInt(0))((v,i)=>v|(BigInt((i+page*51)&255)<<(i*8)))
        assert(!s.outputWrite(page,0,data,4,Id(0,1,1,300+page)))
        assert(s.pageCommand(IbPageOp.FinishWriter,page)==0)
        if(page==0) {
          for(_<-0 until 12)s.tick()
          assert(!s.admissions.exists(_.refill==2))
        }
      }
      for (page<-Seq(0,1)) {
        val old=s.allocations(page)
        assert(s.pageCommand(IbPageOp.Rebind,page,old.copy(consumers=1,writer=IbWriter.DramFill))==0)
      }
      s.checkBytes(2,(0 until 64),streamLast=true)
      assert(s.dramRequests.isEmpty)
    }
  }

  it should "apply the 4096B free threshold even to tail requests and release only consumed occupancy" in {
    test(new DmaReadHarness(scheduled=true,schedulerParams=DmaSchedulerParams(chunkEntries=3))).withAnnotations(DmaReadTestModel.backend) { d =>
      val s=new Sim(d)
      s.configure(Config(tiles=258,tileBytes=16,tail=16,tileStride=16)) // 4128 contiguous bytes
      s.issue(bytes=4096,refill=1);s.check(1,span(0x1000,4096),streamLast=false)
      d.io.credit(0).freeBytes.expect(4096.U)
      s.issue(bytes=16,refill=2);s.check(2,span(0x2000,16),streamLast=false)
      d.io.credit(0).freeBytes.expect(4080.U);d.io.credit(0).entriesUsed.expect(2.U)
      s.issue(bytes=16,refill=3)
      for(_<-0 until 16)s.tick()
      assert(!s.admissions.exists(_.refill==3))
      s.ocmAllow=false
      s.consume(Id(0,1,1,1),16,last=false)
      s.waitFor(s.admissions.exists(_.refill==3))
      d.io.credit(0).reservedBytes.expect(4096.U);d.io.credit(0).freeBytes.expect(0.U)
      s.ocmAllow=true;s.check(3,span(0x2010,16))
      s.consume(Id(0,1,1,1),4080);s.consume(Id(0,1,1,2),16);s.consume(Id(0,1,1,3),16)
      d.io.credit(0).freeBytes.expect(8192.U);d.io.credit(0).entriesUsed.expect(0.U)
    }
  }

  it should "retain partially delivered error data until an identity matched discard commit" in {
    test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s=new Sim(d)
      s.map(bytes=512)
      s.configure(Config(tiles=2))
      s.issue(bytes=512,refill=1);s.check(1,span(0x1000,512));s.consume(Id(0,1,1,1),512)
      s.configure(Config(tiles=16,ibOnly=true))
      val before=s.dramRequests.size
      s.issue(bytes=4096,refill=2)
      val done=s.finish(2)
      assert(done.error && done.bytes==512 && s.dramRequests.size==before)
      assert(s.deliveries.filter(_.id.refill==2).flatMap(_.bytes).toVector==expected(span(0x1000,512)))
      d.io.credit(0).bufferedBytes.expect(512.U);d.io.credit(0).reservedBytes.expect(0.U)
      d.io.credit(0).contextError.expect(true.B);d.io.credit(0).freeBytes.expect(7680.U)
      val discard=d.io.discardCommit(0)
      s.idPoke(discard.bits,Id(0,99,1,2));discard.valid.poke(true.B)
      discard.ready.expect(false.B)
      for(_<-0 until 10)s.tick()
      d.io.credit(0).bufferedBytes.expect(512.U)
      discard.valid.poke(false.B)
      s.discard(Id(0,1,1,2))
      d.io.credit(0).freeBytes.expect(8192.U);d.io.credit(0).contextError.expect(false.B)
    }
  }

  it should "admit all five staged targets fairly without a source busy global head of line" in {
    test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s=new Sim(d)
      val streams=Seq(0,1,3,4,5)
      for(t<-0 until 5) {
        s.configure(Config(stream=streams(t),base=0x4000+t*4096,tileBytes=16,tail=16))
        d.io.status(t).producerReady.poke(false.B)
        d.io.status(t).hungry.poke(false.B)
      }
      for(t<-0 until 5)s.issue(stream=streams(t),target=t,bytes=16,refill=10+t,phase=20+t)
      assert(s.admissions.isEmpty)
      s.dramAllow=false
      for(t<-0 until 5)d.io.status(t).producerReady.poke(true.B)
      d.io.status(4).demand.poke(true.B)
      s.waitFor(s.admissions.size==5)
      assert(s.admissions.map(_.target).toSeq==Seq(0,1,2,3,4))
      assert(s.dramRequests.isEmpty)
      for(t<-1 until 5)d.io.nextReadRequest(t).valid.expect(true.B)
      s.dramAllow=true
      for(t<-0 until 5)s.check(10+t,span(BigInt(0x4000+t*4096),16))
      assert(s.admissions.size==5)
    }
  }

  it should "drain a staged old consumer before releasing its page without a control hold deadlock" in {
    test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend) { d =>
      val s=new Sim(d)
      s.map(bytes=64);s.configure(Config(tileBytes=64,tail=64))
      s.issue(bytes=64,refill=1);s.check(1,span(0x1000,64));s.consume(Id(0,1,1,1),64)
      s.configure(Config(tileBytes=64,tail=64,ibOnly=true))
      d.io.status(0).producerReady.poke(false.B)
      s.issue(bytes=64,refill=2)
      val c=d.io.pageCommand.bits
      c.op.poke(IbPageOp.Release.U);c.page.poke(0.U)
      c.expectedContext.poke(1.U);c.expectedEpoch.poke(1.U);c.expectedLogicalId.poke(1.U)
      c.expectedGeneration.poke(1.U);c.releaseConsumers.poke(1.U);c.releaseWeight.poke(false.B)
      d.io.pageCommand.valid.poke(true.B)
      d.io.pageCommand.ready.expect(false.B)
      for(_<-0 until 10)s.tick()
      d.io.pages(0).metadata.consumers.expect(1.U)
      d.io.status(0).producerReady.poke(true.B)
      s.check(2,span(0x1000,64))
      d.io.pageCommand.ready.expect(false.B) // the completed OCM chunk still belongs to its consumer
      s.consume(Id(0,1,1,2),64)
      s.waitFor(s.b(d.io.pageCommand.ready));s.tick();d.io.pageCommand.valid.poke(false.B)
      s.waitFor(s.b(d.io.pageResult.valid));d.io.pageResult.bits.error.expect(0.U);s.tick()
      d.io.pages(0).metadata.consumers.expect(0.U)
    }
  }
}
