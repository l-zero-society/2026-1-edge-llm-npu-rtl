package npu.dma

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import DmaReadTestModel._

class IbPageLifecycleTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "IB page publication and operation handoff"
  private def packed(bytes: Seq[Int]): BigInt = bytes.zipWithIndex.foldLeft(BigInt(0)) {
    case (v,(b,i)) => v | (BigInt(b) << (8*i))
  }

  it should "publish a 4096B page only after every unique lane despite duplicate small refills" in {
    test(new DmaReadHarness) { d =>
      val s=new Sim(d)
      s.map()
      s.configure(Config(tiles=16))
      s.configure(Config(stream=1,tiles=16))
      s.configure(Config(stream=3,tileBytes=80,tail=80))
      d.io.schedulePermit(1).poke(false.B)
      s.issue(stream=1,target=1,bytes=4096,refill=2,phase=9,dest=96)
      s.issue(bytes=80,refill=1); s.check(1,span(0x1000,80),streamLast=false)
      d.io.pages(0).pageValid.expect(false.B)
      d.io.pages(0).coverage.expect(((BigInt(1)<<5)-1).U)
      s.issue(bytes=976,refill=3)
      s.waitFor(s.u(d.io.pages(0).coverage)==((BigInt(1)<<32)-1))
      s.fillAllow=false
      d.io.pages(0).pageValid.expect(false.B)
      d.io.nextReadRequest(1).bits.sourceIB.expect(false.B)
      d.io.nextReadRequest(1).bits.payloadBytes.expect(4096.U)
      for(_<-0 until 8)s.tick()
      assert(s.ibReads.isEmpty) // precisely 512 committed bytes is still NOT a hit
      s.fillAllow=true;s.check(3,span(0x1050,976),streamLast=false)
      d.io.pages(0).pageValid.expect(false.B)
      d.io.pages(0).coverage.expect(((BigInt(1)<<66)-1).U)
      d.io.nextReadRequest(1).valid.expect(true.B)
      d.io.nextReadRequest(1).bits.sourceIB.expect(false.B)
      d.io.nextReadRequest(1).bits.payloadBytes.expect(4096.U)
      val readsBefore=s.ibReads.size
      s.issue(stream=3,target=2,bytes=80,refill=5); s.check(5,span(0x1000,80))
      d.io.pages(0).pageValid.expect(false.B)
      d.io.pages(0).coverage.expect(((BigInt(1)<<66)-1).U)
      assert(s.ibReads.size==readsBefore)
      s.issue(bytes=3040,refill=4)
      s.check(4,span(0x1420,3040))
      d.io.pages(0).pageValid.expect(true.B)
      d.io.nextReadRequest(1).bits.sourceIB.expect(true.B)
      val before=s.dramRequests.size
      d.io.schedulePermit(1).poke(true.B)
      s.check(2,span(0x1000,4096),dest=96)
      assert(s.dramRequests.size==before)
      assert(s.ib.keySet.toSet==span(0x8000,4096).toSet)
    }
  }

  it should "compact every head offset and tail to page zero and replay only fully published payloads" in {
    test(new DmaReadHarness) { d =>
      val s=new Sim(d)
      var id=0
      for(offset<-Seq(0,16,32,48); length<-Seq(16,32,48,144)) {
        id+=1
        val base=BigInt(0x1000+offset)
        s.map(canonical=base,bytes=length)
        s.ib.clear() // backing bytes outside declared payload remain poison/unallocated
        s.configure(Config(base=base,tileBytes=length,tail=length))
        s.issue(bytes=length,refill=id); s.check(id,span(base,length))
        assert(s.ib.keySet.toSet==span(0x8000,length).toSet)
        assert(span(0x8000,length).map(s.ib).toVector==expected(span(base,length)))
        d.io.pages(0).pageValid.expect(true.B)
        val before=s.dramRequests.size
        s.configure(Config(base=base,tileBytes=length,tail=length,ibOnly=true))
        s.issue(bytes=length,refill=100+id); s.check(100+id,span(base,length))
        assert(s.dramRequests.size==before)
      }
    }
  }

  it should "hold the second derived write without duplicate OCM data or early publication" in {
    test(new DmaReadHarness) { d =>
      val s=new Sim(d,stalls=false)
      s.map(canonical=0x1010,bytes=144)
      s.configure(Config(base=0x1010,tileBytes=144,tail=144))
      s.issue(bytes=144,refill=1)
      s.waitFor(s.writeBeats.size==2)
      assert(s.writeBeats.map(x=>(x._2,x._3)).toSeq==Seq(BigInt(0x8000)->7,BigInt(0x8000)->8))
      s.fillAllow=false
      d.io.fill.valid.expect(true.B); d.io.fill.bits.wordAddress.expect(0x8040.U)
      d.io.fill.bits.laneMask.expect(7.U)
      val delivered=s.deliveries.size
      for(_<-0 until 20)s.tick()
      assert(s.deliveries.size==delivered && s.writeBeats.size==2 && s.dones.isEmpty)
      d.io.pages(0).pageValid.expect(false.B)
      s.fillAllow=true; s.check(1,span(0x1010,144))
      assert(s.writeBeats.size==5 && s.writes.size==144)
      d.io.pages(0).pageValid.expect(true.B)
      assert(s.ib.keySet.toSet==span(0x8000,144).toSet)
      // Fill all lanes except lane 3, then a crossing raw beat fills that hole
      // in its FIRST write and duplicates lanes 4..6 in its SECOND write.
      // Full coverage alone cannot publish before that second commit.
      s.map(canonical=0x1010,bytes=112)
      s.configure(Config(base=0x1010,tileBytes=48,tail=48))
      s.configure(Config(stream=1,base=0x1050,tileBytes=48,tail=48))
      s.configure(Config(stream=3,base=0x1040,tileBytes=64,tail=64))
      s.issue(bytes=48,refill=2);s.check(2,span(0x1010,48))
      s.issue(stream=1,target=1,bytes=48,refill=3);s.check(3,span(0x1050,48))
      d.io.pages(0).pageValid.expect(false.B)
      val before=s.writeBeats.size
      s.issue(stream=3,target=2,bytes=64,refill=4)
      s.waitFor(s.writeBeats.size==before+1)
      s.fillAllow=false
      d.io.pages(0).coverage.expect(127.U)
      d.io.pages(0).pageValid.expect(false.B)
      for(_<-0 until 16)s.tick()
      assert(!s.dones.exists(_.id.refill==4))
      s.fillAllow=true;s.check(4,span(0x1040,64))
      d.io.pages(0).pageValid.expect(true.B)
    }
  }

  it should "retain output as next input across A B swaps and reject unsafe or stale mutations" in {
    test(new DmaReadHarness) { d =>
      val s=new Sim(d)
      val a=PageSpec(canonical=0x1010,bytes=128,logical=10,consumers=3)
      val b=PageSpec(canonical=0x4010,physical=0x9000,bytes=128,logical=20,
        writer=IbWriter.Output,consumers=0,dramReadable=false)
      val w=PageSpec(canonical=0x7000,physical=0xa000,bytes=64,logical=30,consumers=4,keepWeight=true)
      for((m,i)<-Seq(a,b,w).zipWithIndex)assert(s.pageCommand(IbPageOp.Allocate,i,m)==0)
      s.configure(Config(base=0x1010,tileBytes=128,tail=128))
      s.configure(Config(stream=1,base=0x7000,tileBytes=64,tail=64))
      s.issue(bytes=128,refill=1,logical=10);s.check(1,span(0x1010,128))
      s.issue(stream=1,target=1,bytes=64,refill=2,logical=30);s.check(2,span(0x7000,64))
      val writesBeforeUnsafe=s.writeBeats.size
      assert(s.outputWrite(0,0,0,4,Id(0,1,1,399,10)))
      assert(s.writeBeats.size==writesBeforeUnsafe)
      assert(s.pageCommand(IbPageOp.Allocate,0,a.copy(generation=2,writer=IbWriter.Output,consumers=0,dramReadable=false))==IbPageError.Lifetime)
      assert(s.pageCommand(IbPageOp.Release,0,expected=Some(a.copy(context=99)))==IbPageError.Identity)
      assert(s.pageCommand(IbPageOp.Allocate,3,PageSpec(canonical=0x10000,physical=0x9000))==IbPageError.Alias)
      assert(s.pageCommand(IbPageOp.Allocate,3,PageSpec(canonical=(BigInt(1)<<64)-16,physical=0xb000,bytes=32))==IbPageError.Range)
      assert(s.pageCommand(IbPageOp.Allocate,3,PageSpec(canonical=0x10000,physical=d.p.ibCapacityBytes))==IbPageError.Range)
      val dramBefore=s.dramRequests.size
      s.configure(Config(base=0x4010,tileBytes=128,tail=128,ibOnly=true))
      s.issue(bytes=128,refill=3,logical=20)
      assert(s.finish(3).error && s.dramRequests.size==dramBefore)
      val bytesB=Vector.tabulate(128)(i=>(i*7+51)&255)
      d.io.computeStall.poke(true.B)
      val producerB=Id(0,1,1,400,20)
      assert(!s.outputWrite(1,64,packed(bytesB.drop(64)),4,producerB))
      assert(!s.outputWrite(1,64,packed(bytesB.drop(64)),4,producerB.copy(refill=401))) // duplicate
      d.io.pages(1).pageValid.expect(false.B)
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==IbPageError.Incomplete)
      assert(!s.outputWrite(1,0,packed(bytesB.take(48)),3,producerB.copy(refill=402)))
      d.io.pages(1).pageValid.expect(false.B) // gap lane 3, despite 176 bytes of writes
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==IbPageError.Incomplete)
      s.producerResultAllow=false
      s.offerProducer(1,48,packed(bytesB.slice(48,64)),1,producerB.copy(refill=403))
      s.waitFor(s.b(d.io.producerResult.valid))
      d.io.pages(1).pageValid.expect(false.B); d.io.writersDrained.expect(false.B)
      d.io.pageCommand.valid.poke(true.B); d.io.pageCommand.ready.expect(false.B)
      d.io.pageCommand.valid.poke(false.B)
      s.producerResultAllow=true;assert(!s.producerResult())
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==0)
      d.io.pages(1).pageValid.expect(true.B)
      val nextB=b.copy(canonical=0x6010,context=2,epoch=2,logical=10,writer=IbWriter.DramFill,consumers=3)
      assert(s.pageCommand(IbPageOp.Rebind,1,nextB.copy(layout=2))==IbPageError.Layout)
      assert(s.pageCommand(IbPageOp.Rebind,1,nextB.copy(generation=2))==IbPageError.Range)
      assert(s.pageCommand(IbPageOp.Rebind,1,nextB)==0)
      s.configure(Config(base=0x6010,tileBytes=128,tail=128,ibOnly=true))
      s.backingAllow=false
      s.issue(bytes=128,refill=4,context=2,epoch=2,logical=10)
      s.waitFor(!s.b(d.io.sourceAvailable(1)))
      d.io.pages(1).readers.expect(1.U)
      d.io.pageCommand.valid.poke(true.B);d.io.pageCommand.ready.expect(false.B)
      for(_<-0 until 20)s.tick()
      assert(!s.dones.exists(_.id.refill==4))
      d.io.pageCommand.valid.poke(false.B);s.backingAllow=true
      s.checkBytes(4,bytesB);d.io.pages(1).readers.expect(0.U)
      assert(s.dramRequests.size==dramBefore)
      // One remaining consumer is sufficient to prohibit overwriting old A.
      assert(s.pageCommand(IbPageOp.Release,0,release=1)==0)
      val a2=a.copy(canonical=0x8010,context=2,epoch=2,logical=20,generation=2,
        writer=IbWriter.Output,consumers=0,dramReadable=false)
      assert(s.pageCommand(IbPageOp.Allocate,0,a2)==IbPageError.Lifetime)
      assert(s.pageCommand(IbPageOp.Release,0,release=2)==0)
      assert(s.pageCommand(IbPageOp.Allocate,0,a2)==0)
      val bytesA=Vector.tabulate(128)(i=>(i*11+91)&255)
      for(offset<-Seq(0,64))assert(!s.outputWrite(0,offset,packed(bytesA.slice(offset,offset+64)),4,Id(0,2,2,500+offset,20)))
      assert(s.pageCommand(IbPageOp.Release,1)==0)
      val b2=b.copy(canonical=0xb010,context=3,epoch=3,generation=2)
      assert(s.pageCommand(IbPageOp.Allocate,1,b2)==IbPageError.Lifetime) // producer A has not finished
      assert(s.pageCommand(IbPageOp.FinishWriter,0)==0)
      val nextA=a2.copy(canonical=0xa010,context=3,epoch=3,logical=10,writer=IbWriter.DramFill,consumers=1)
      assert(s.pageCommand(IbPageOp.Rebind,0,nextA)==0)
      s.configure(Config(base=0xa010,tileBytes=128,tail=128,ibOnly=true))
      s.issue(bytes=128,refill=5,context=3,epoch=3,logical=10);s.checkBytes(5,bytesA)
      assert(s.pageCommand(IbPageOp.Allocate,1,b2)==0)
      val writeCount=s.writeBeats.size
      assert(s.outputWrite(1,0,0,4,producerB,generation=1)) // late old generation
      assert(s.outputWrite(1,0,0,4,Id(0,99,3,600,20),generation=2))
      assert(s.outputWrite(1,0,0,4,Id(0,3,3,601,99),generation=2))
      assert(s.outputWrite(1,128,0,1,Id(0,3,3,602,20),generation=2))
      assert(s.writeBeats.size==writeCount)
      val bytesB2=Vector.tabulate(128)(i=>(i*19+37)&255)
      for(offset<-Seq(0,64))assert(!s.outputWrite(1,offset,packed(bytesB2.slice(offset,offset+64)),4,Id(0,3,3,700+offset,20)))
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==0)
      assert(s.pageCommand(IbPageOp.Release,0)==0)
      val nextB2=b2.copy(canonical=0xc010,context=4,epoch=4,logical=10,writer=IbWriter.DramFill,consumers=1)
      assert(s.pageCommand(IbPageOp.Rebind,1,nextB2)==0)
      s.configure(Config(base=0xc010,tileBytes=128,tail=128,ibOnly=true))
      s.issue(bytes=128,refill=6,context=4,epoch=4,logical=10);s.checkBytes(6,bytesB2)
      assert(s.dramRequests.size==dramBefore)
      // Retained weight remains protected even after its consumer lease ends.
      assert(s.pageCommand(IbPageOp.Release,2,release=4,releaseWeight=false)==0)
      assert(s.pageCommand(IbPageOp.Allocate,2,w.copy(generation=2,writer=IbWriter.Output,consumers=0,keepWeight=false,dramReadable=false))==IbPageError.Lifetime)
      d.io.pages(2).pageValid.expect(true.B);d.io.pages(2).metadata.keepWeight.expect(true.B)
      d.io.pages(2).metadata.generation.expect(1.U)
      assert(span(0x8000,128).map(s.ib)==bytesA && span(0x9000,128).map(s.ib)==bytesB2)
      assert(span(0xa000,64).map(s.ib)==expected(span(0x7000,64)))
      info("A(input)/B(output) -> B(input)/A(output) -> A(input)/B(output) -> B(input): retained data, zero DRAM refills")
    }
  }

  it should "arbitrate output and DRAM fill commits and serialize shared IB read write conflicts" in {
    test(new DmaReadHarness(sharedIbPort=true)) { d =>
      val s=new Sim(d,stalls=false)
      s.map(canonical=0x1010,bytes=144)
      val b=PageSpec(canonical=0x4010,physical=0x9000,bytes=128,logical=20,
        writer=IbWriter.Output,consumers=0,dramReadable=false)
      assert(s.pageCommand(IbPageOp.Allocate,1,b)==0)
      s.configure(Config(base=0x1010,tileBytes=144,tail=144))
      val out=Vector.tabulate(128)(i=>(i*23+5)&255)
      s.fillAllow=false;s.ocmAllow=false
      s.offerProducer(1,0,packed(out.take(64)),4,Id(0,1,1,300,20))
      s.issue(bytes=144,refill=1)
      s.waitFor(s.b(d.io.dram.response.valid))
      for(_<-0 until 12)s.tick()
      assert(s.writes.isEmpty)
      s.fillAllow=true
      s.waitFor(s.producerResults.exists(_._1.refill==300))
      s.ocmAllow=true;s.check(1,span(0x1010,144))
      assert(s.writeBeats.exists(_._1.refill==1) && s.writeBeats.exists(_._1.refill==300))
      s.configure(Config(base=0x1010,tileBytes=144,tail=144,ibOnly=true))
      s.fillAllow=false
      s.offerProducer(1,64,packed(out.drop(64)),4,Id(0,1,1,301,20))
      s.issue(bytes=144,refill=2)
      s.waitFor(!s.b(d.io.sourceAvailable(1)))
      for(_<-0 until 16)s.tick()
      assert(!s.dones.exists(_.id.refill==2))
      s.fillAllow=true;s.check(2,span(0x1010,144))
      s.waitFor(s.producerResults.exists(_._1.refill==301))
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==0)
      assert(span(0x9000,128).map(s.ib)==out)
      assert(s.producerResults.forall(!_._2))
      info("Shared IB port: output/fill/read contention serialized; no aggregate bandwidth claim")
    }
  }
}
