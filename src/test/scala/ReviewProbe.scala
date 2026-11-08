// Review regressions. Run by make dma-arbiter-test (explicit file + suite list).
package npu.dma
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
class ReviewProbe extends AnyFlatSpec with ChiselScalatestTester {
  import DmaReadTestModel._
  it should "allow an independent WB refill to unblock consumption while an unrelated page release waits" in {
    test(new DmaReadHarness(scheduled=true)) { d =>
      val s=new Sim(d,stalls=false)
      s.map(bytes=64)
      s.configure(Config(base=0x4000,tileBytes=64,tail=64))
      s.configure(Config(stream=1,base=0x5000,tileBytes=64,tail=64))
      s.issue(bytes=64,refill=1); s.check(1,span(0x4000,64))
      d.io.status(1).producerReady.poke(false.B)
      s.issue(stream=1,target=1,bytes=64,refill=2,logical=2)
      val c=d.io.pageCommand.bits
      c.op.poke(IbPageOp.Release.U);c.page.poke(0.U);c.expectedContext.poke(1.U)
      c.expectedEpoch.poke(1.U);c.expectedLogicalId.poke(1.U);c.expectedGeneration.poke(1.U)
      c.releaseConsumers.poke(1.U);c.releaseWeight.poke(false.B)
      d.io.status(1).producerReady.poke(true.B);d.io.pageCommand.valid.poke(true.B)
      // Normal driver: drop valid exactly at handshake, hold ACK for inspection.
      d.io.pageResult.ready.poke(false.B)
      var commands=0
      def step():Unit={
        val fire=s.b(d.io.pageCommand.valid)&&s.b(d.io.pageCommand.ready)
        s.tick()
        if(fire){commands+=1;d.io.pageCommand.valid.poke(false.B)}
      }
      val start=s.cycle
      while(!s.dones.exists(_.id.refill==2) && s.cycle-start<200)step()
      assert(s.dones.exists(_.id.refill==2),"independent WB must unblock UB consumption")
      s.check(2,span(0x5000,64));s.check(1,span(0x4000,64))
      assert(s.admissions.count(_.refill==2)==1)
      def consume(id:Id):Unit={
        val x=d.io.consume(id.target)
        s.idPoke(x.bits.identity,id);x.bits.bytes.poke(64.U);x.bits.chunkLast.poke(true.B);x.valid.poke(true.B)
        var waited=0
        while(!s.b(x.ready) && waited<100){step();waited+=1}
        assert(s.b(x.ready));step();x.valid.poke(false.B)
      }
      consume(Id(0,1,1,1));consume(Id(1,1,1,2,2))
      while(commands==0 && s.cycle-start<250)step()
      assert(commands==1)
      s.waitFor(s.b(d.io.pageResult.valid),100)
      d.io.pageResult.bits.error.expect(0.U);d.io.pageResult.bits.op.expect(IbPageOp.Release.U)
      d.io.pageResult.ready.poke(true.B);s.tick()
      for(_<-0 until 8)step()
      assert(commands==1 && s.dones.count(_.id.refill==2)==1 && s.dones.count(_.id.refill==1)==1)
      d.io.pageResult.valid.expect(false.B);d.io.pages(0).metadata.consumers.expect(0.U)
      for(t<-0 until 2){d.io.credit(t).entriesUsed.expect(0.U);d.io.credit(t).freeBytes.expect(8192.U)}
    }
  }
  it should "not issue a second write into a page whose DRAM fill writer just closed" in {
    test(new DmaReadHarness) {d=>
      val s=new Sim(d,stalls=false)
      assert(s.pageCommand(IbPageOp.Allocate,0,PageSpec(bytes=64,consumers=0))==0)
      s.configure(Config(tileBytes=64,tail=64))
      s.configure(Config(stream=1,tileBytes=64,tail=64))
      s.dramAllow=false;s.issue(bytes=64,refill=1);s.issue(stream=1,target=1,bytes=64,refill=2)
      s.dramAllow=true;s.check(1,span(0x1000,64));s.check(2,span(0x1000,64))
      assert(s.plans.count(_.id.refill==1)==1 && s.plans.count(_.id.refill==2)==1)
      assert(s.plans.find(_.id.refill==1).get.fill)
      assert(!s.plans.find(_.id.refill==2).get.fill && !s.plans.find(_.id.refill==2).get.ib)
      assert(s.writeBeats.size==1 && s.writeBeats.head._3==15 && s.writes.size==64)
      assert(span(0x8000,64).map(s.ib)==expected(span(0x1000,64)))
      d.io.pages(0).pageValid.expect(true.B);d.io.pages(0).writerOpen.expect(false.B)
      d.io.pages(0).metadata.generation.expect(1.U);d.io.pages(0).metadata.consumers.expect(0.U)
      d.io.pages(0).coverage.expect(15.U)
      for(_<-0 until 8)s.tick()
      assert(s.writeBeats.size==1 && s.dones.size==2)
      d.io.pages(0).coverage.expect(15.U);d.io.pages(0).metadata.generation.expect(1.U)
    }
  }
  it should "serialize same-cycle page lease release against matching ingress while admitting unrelated ingress" in {
    test(new DmaReadHarness(scheduled=true)) {d=>
      val s=new Sim(d,stalls=false)
      s.map(bytes=64)
      s.configure(Config(stream=2,tileBytes=64,tail=64))
      s.issue(stream=2,target=2,bytes=64,refill=1);s.check(1,span(0x1000,64));s.consume(Id(2,1,1,1),64)
      s.configure(Config(tileBytes=64,tail=64,ibOnly=true))
      s.configure(Config(stream=1,base=0x5000,tileBytes=64,tail=64))
      val c=d.io.pageCommand.bits
      c.op.poke(IbPageOp.Release.U);c.page.poke(0.U);c.expectedContext.poke(1.U)
      c.expectedEpoch.poke(1.U);c.expectedLogicalId.poke(1.U);c.expectedGeneration.poke(1.U)
      c.releaseConsumers.poke(1.U);c.releaseWeight.poke(false.B)
      d.io.pageCommand.valid.poke(true.B);d.io.pageResult.ready.poke(false.B)
      for(t<-0 until 2){
        val r=d.io.requests(t)
        r.bits.target.poke(t.U);r.bits.stream.poke(t.U);r.bits.contextId.poke(1.U)
        r.bits.epoch.poke(1.U);r.bits.logicalId.poke((1+t).U);r.bits.refillId.poke((2+t).U)
        r.bits.payloadBytes.poke(64.U);r.bits.phase.poke(9.U);r.bits.destinationOffset.poke(0.U)
        r.valid.poke(true.B)
      }
      d.io.pageCommand.ready.expect(true.B);d.io.requests(0).ready.expect(false.B)
      d.io.requests(1).ready.expect(true.B);s.tick()
      d.io.pageCommand.valid.poke(false.B);d.io.requests(1).valid.poke(false.B)
      d.io.pages(0).metadata.consumers.expect(0.U)
      d.io.requests(0).ready.expect(true.B);s.tick();d.io.requests(0).valid.poke(false.B)
      s.check(3,span(0x5000,64));assert(s.finish(2).error)
      assert(!s.plans.exists(_.id.refill==2)) // invalid IB-only never invents a fallback
      assert(s.admissions.count(_.refill==2)==1 && s.admissions.count(_.refill==3)==1)
      d.io.pageResult.valid.expect(true.B);d.io.pageResult.bits.error.expect(0.U)
      d.io.pageResult.ready.poke(true.B);s.tick();d.io.pageResult.valid.expect(false.B)
      d.io.pages(0).metadata.generation.expect(1.U);d.io.pages(0).coverage.expect(15.U)
      s.discard(Id(0,1,1,2));s.consume(Id(1,1,1,3,2),64)
    }
  }
  it should "retain four 4KiB chunks independently in UB and WB using the integrated profile" in {
    val profile=DmaSchedulerParams.integrated
    assert(profile.capacities==Seq(16384,16384,8192,8192,8192))
    assert(profile.entries==Seq(4,4,2,2,2))
    test(new DmaReadHarness(scheduled=true,schedulerParams=profile)) {d=>
      val s=new Sim(d,stalls=false)
      for(t<-0 until 2)s.configure(Config(stream=t,base=0x10000+t*0x10000,tiles=5,
        tileBytes=4096,tail=4096,tileStride=4096))
      for(k<-0 until 4;t<-0 until 2){
        val id=10+t*10+k
        s.issue(stream=t,target=t,bytes=4096,refill=id,dest=k*4096)
        s.check(id,span(0x10000+t*0x10000+k*4096,4096),dest=k*4096,streamLast=false)
        d.io.credit(t).entriesUsed.expect((k+1).U)
        d.io.credit(t).bufferedBytes.expect(((k+1)*4096).U)
        d.io.credit(t).freeBytes.expect((16384-(k+1)*4096).U)
      }
      for(t<-0 until 2)s.issue(stream=t,target=t,bytes=4096,refill=30+t,dest=16384)
      for(_<-0 until 16)s.tick()
      assert(!s.admissions.exists(_.refill>=30))
      for(t<-0 until 2){d.io.credit(t).entriesUsed.expect(4.U);d.io.credit(t).reservedBytes.expect(0.U)}
      s.consume(Id(0,1,1,10),4096)
      s.check(30,span(0x14000,4096),dest=16384)
      assert(!s.admissions.exists(_.refill==31)) // WB still owns its four entries
      s.consume(Id(1,1,1,20),4096)
      s.check(31,span(0x24000,4096),dest=16384)
      for(t<-0 until 2){
        d.io.credit(t).entriesUsed.expect(4.U);d.io.credit(t).bufferedBytes.expect(16384.U)
        d.io.credit(t).freeBytes.expect(0.U);d.io.credit(t).reservedBytes.expect(0.U)
        assert(s.admissions.count(_.refill==30+t)==1)
      }
      for(k<-1 until 4;t<-0 until 2)s.consume(Id(t,1,1,10+t*10+k),4096)
      for(t<-0 until 2){s.consume(Id(t,1,1,30+t),4096);d.io.credit(t).freeBytes.expect(16384.U)}
      for(t<-2 until 5)d.io.credit(t).freeBytes.expect(8192.U)
      info("UB and WB: 4 x 4096B retained, fifth blocked independently, one consume permits exactly one refill")
    }
  }
}
