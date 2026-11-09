package npu.dma
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import DmaReadTestModel._

object ScratchpadTestConfig {
  def window(d:DmaReadHarness,s:Sim,stream:Int,target:Int,start:BigInt,size:Int,rowBytes:Int,
             slots:Seq[Int],logical:Int=1,local:Boolean=false,rolling:Boolean=false):Unit={
    val x=d.io.cacheConfig.bits
    x.stream.poke(stream.U);x.target.poke(target.U);x.contextId.poke(1.U);x.epoch.poke(1.U);x.logicalId.poke(logical.U)
    x.mappedStartAddr.poke(start.U);x.mappedSize.poke(size.U);x.rowBytes.poke(rowBytes.U)
    x.localReuse.poke(local.B);x.rollingRows.poke(rolling.B);x.pageCount.poke(slots.size.U)
    for(i<-0 until d.p.cachePages)x.pageSlots(i).poke(slots.lift(i).getOrElse(0).U)
    d.io.cacheConfig.valid.poke(true.B);s.waitFor(s.b(d.io.cacheConfig.ready));s.tick();d.io.cacheConfig.valid.poke(false.B)
  }
}
class StaticScratchpadTest extends AnyFlatSpec with ChiselScalatestTester {
  import ScratchpadTestConfig._
  it should "reuse a spilled UB head across three complete passes and switch only after the stalled tail while preserving W1 W2" in {
    test(new DmaReadHarness).withAnnotations(DmaReadTestModel.backend) {d=>
      val s=new Sim(d,stalls=false)
      s.map(bytes=4096)
      for((slot,stream,base,logical)<-Seq((1,1,0x50000,2),(2,2,0x60000,3))){
        assert(s.pageCommand(IbPageOp.Allocate,slot,PageSpec(canonical=base,physical=0x8000+slot*4096,bytes=64,logical=logical))==0)
        s.configure(Config(stream=stream,base=base,tileBytes=64,tail=64,passes=2))
        window(d,s,stream,1,base,64,64,Seq(slot),logical)
      }
      s.configure(Config(rows=2,passes=3,tiles=32,rowStride=0x4000,lastRowBytes=512))
      window(d,s,0,0,0x1000,4096,8192,Seq(0),rolling=true)
      for((stream,id,base,logical)<-Seq((1,90,0x50000,2),(2,91,0x60000,3))){s.issue(stream=stream,target=1,bytes=64,refill=id,logical=logical);s.check(id,span(base,64),streamLast=false)}
      for(k<-0 until 5){
        s.issue(bytes=4096,refill=k+1);s.check(k+1,span(if(k%2==0)0x1000 else 0x2000,4096),streamLast=false)
        d.io.rowTransitions.expect(0.U);d.io.pages(0).metadata.generation.expect(1.U)
      }
      assert(s.plans.filter(_.id.refill<=5).map(_.ib).toSeq==Seq(false,false,true,false,true))
      assert(s.plans.filter(_.id.refill<=5).map(_.fill).toSeq==Seq(true,false,false,false,false))
      s.ocmAllowed(0)=false;s.issue(bytes=4096,refill=6)
      s.waitFor(s.plans.exists(_.id.refill==6))
      for(_<-0 until 12)s.tick()
      d.io.rowTransitions.expect(0.U);d.io.cacheWindows(0).mappedStartAddr.expect(0x1000.U)
      val before=s.writes.size
      for((stream,id,base,logical)<-Seq((1,92,0x50000,2),(2,93,0x60000,3))){s.issue(stream=stream,target=1,bytes=64,refill=id,logical=logical);s.check(id,span(base,64))}
      assert(s.writes.size==before && s.plans.filter(x=>x.id.refill==92||x.id.refill==93).forall(_.ib))
      s.ocmAllowed(0)=true;s.check(6,span(0x2000,4096),streamLast=false)
      d.io.rowTransitions.expect(1.U);d.io.cacheWindows(0).mappedSize.expect(4096.U)
      d.io.cacheWindows(0).mappedStartAddr.expect(0x5000.U)
      d.io.pages(0).metadata.canonicalStart.expect(0x5000.U);d.io.pages(0).metadata.validBytes.expect(512.U)
      d.io.pages(0).metadata.generation.expect(2.U);d.io.pages(0).coverage.expect(0.U)
      for(k<-0 until 3){s.issue(bytes=512,refill=7+k);s.check(7+k,span(0x5000,512),streamLast=k==2)}
      assert(s.plans.filter(x=>x.id.refill>=7&&x.id.refill<10).map(_.ib).toSeq==Seq(false,true,true))
      d.io.rowTransitions.expect(1.U);d.io.cacheWindows(0).mappedStartAddr.expect(0x5000.U)
      for(slot<-1 until 3){d.io.pages(slot).pageValid.expect(true.B);d.io.pages(slot).metadata.generation.expect(1.U)}
      assert(span(0x8000,512).map(s.ib)==expected(span(0x5000,512)))
    }
  }
  it should "commit a one-pass multi-segment row before reusing its pages and clamp the short final row" in {
    test(new DmaReadHarness(DmaReadParams(pagesPerRegion=2,maxSegmentBytes=48),bankedWrites=true)).withAnnotations(DmaReadTestModel.backend) {d=>
      val s=new Sim(d,stalls=false)
      s.map(canonical=0x1010,bytes=144)
      s.configure(Config(base=0x1010,rows=2,tiles=9,tileBytes=16,tail=16,tileStride=16,rowStride=4096,lastRowBytes=80))
      window(d,s,0,0,0x1010,144,144,Seq(0),rolling=true)
      // OCM accepts the last segment first; its delayed IB commit must still fence reuse.
      s.issue(bytes=144,refill=1)
      s.waitFor(s.plans.size==3);s.fillAllow=false
      for(_<-0 until 10)s.tick()
      d.io.rowTransitions.expect(0.U);d.io.pages(0).metadata.generation.expect(1.U)
      s.fillAllow=true;s.check(1,span(0x1010,144),streamLast=false)
      d.io.rowTransitions.expect(1.U);d.io.pages(0).metadata.validBytes.expect(80.U)
      assert(span(0x8000,144).map(s.ib)==expected(span(0x1010,144)))
      s.issue(bytes=144,refill=2);s.check(2,span(0x2010,80))
      d.io.rowTransitions.expect(1.U);d.io.pages(0).metadata.generation.expect(2.U)
      assert(s.deliveries.filter(_.id.refill==1).count(_.chunkLast)==1)
    }
  }
  it should "map noncontiguous physical pages and leave VPU direct and local reused operands out of row population" in {
    test(new DmaReadHarness).withAnnotations(DmaReadTestModel.backend) {d=>
      val s=new Sim(d,stalls=false)
      for((slot,canonical,physical)<-Seq((0,0x1000,0x8000),(1,0x2000,0x90000))){
        assert(s.pageCommand(IbPageOp.Allocate,slot,PageSpec(canonical=canonical,physical=physical))==0)
      }
      s.configure(Config(rows=2,passes=1,tiles=32,rowStride=0x4000,direct=Some(true)))
      window(d,s,0,0,0x1000,8192,8192,Seq(0,1))
      for(k<-0 until 4){val a=0x1000+(k/2)*0x4000+(k%2)*4096;s.issue(bytes=4096,refill=k+1);s.check(k+1,span(a,4096),streamLast=k==3)}
      assert(span(0x8000,4096).map(s.ib)==expected(span(0x1000,4096)))
      assert(span(0x90000,4096).map(s.ib)==expected(span(0x2000,4096)))
      assert(s.writes.size==8192);d.io.rowTransitions.expect(0.U)
      for((stream,slot,logical,base,local)<-Seq((3,2,2,0x50000,true),(4,3,3,0x60000,false))){
        assert(s.pageCommand(IbPageOp.Allocate,slot,PageSpec(canonical=base,physical=0xa000+slot*4096,bytes=64,logical=logical))==0)
        s.configure(Config(stream=stream,base=base,passes=3,tileBytes=64,tail=64,
          mode=if(local)ReadSupplyMode.LocalRowCache else ReadSupplyMode.Stream))
        window(d,s,stream,if(stream==3)2 else 3,base,64,64,Seq(slot),logical,local)
        val before=s.writes.size
        for(k<-0 until (if(local)1 else 3)){val id=10+stream*10+k;s.issue(stream=stream,target=if(stream==3)2 else 3,bytes=64,refill=id,logical=logical);s.check(id,span(base,64),streamLast=local||k==2)}
        assert(s.writes.size-before==(if(local)0 else 64))
      }
    }
  }
  it should "load a retained output as a local UB row with zero new population and zero DRAM requests" in {
    test(new DmaReadHarness).withAnnotations(DmaReadTestModel.backend) {d=>
      val s=new Sim(d,stalls=false);val pg=PageSpec(canonical=0x4000,bytes=64,writer=IbWriter.Output,consumers=0,dramReadable=false)
      assert(s.pageCommand(IbPageOp.Allocate,0,pg)==0)
      val data=Vector.tabulate(64)(i=>(i*7+3)&255);val raw=data.zipWithIndex.foldLeft(BigInt(0)){case(v,(b,i))=>v|(BigInt(b)<<(8*i))}
      assert(!s.outputWrite(0,0,raw,4,Id(0,1,1,80)))
      assert(s.pageCommand(IbPageOp.FinishWriter,0)==0)
      assert(s.pageCommand(IbPageOp.Rebind,0,pg.copy(consumers=1))==0)
      s.configure(Config(base=0x4000,passes=3,tileBytes=64,tail=64,mode=ReadSupplyMode.LocalRowCache))
      window(d,s,0,0,0x4000,0,64,Seq.empty,local=true)
      val before=s.writes.size;s.issue(bytes=64,refill=1);s.checkBytes(1,data)
      assert(s.dramRequests.isEmpty && s.writes.size==before && s.plans.last.ib);d.io.rowTransitions.expect(0.U)
    }
  }
  it should "roll a multipage unaligned GEMM head over noncontiguous pages and retire unused capacity in a short last row" in {
    test(new DmaReadHarness).withAnnotations(DmaReadTestModel.backend){d=>
      val s=new Sim(d,stalls=false)
      for((slot,start,physical)<-Seq((0,0x1010,0x8000),(1,0x2010,0x80000))){
        assert(s.pageCommand(IbPageOp.Allocate,slot,PageSpec(canonical=start,physical=physical))==0)
      }
      s.configure(Config(base=0x1010,rows=2,tiles=32,rowStride=0x10000,lastRowBytes=512))
      window(d,s,0,0,0x1010,8192,8192,Seq(0,1),rolling=true)
      s.issue(bytes=4096,refill=1);s.check(1,span(0x1010,4096),streamLast=false)
      d.io.rowTransitions.expect(0.U)
      s.issue(bytes=4096,refill=2);s.check(2,span(0x2010,4096),streamLast=false)
      d.io.rowTransitions.expect(1.U)
      assert(span(0x8000,4096).map(s.ib)==expected(span(0x1010,4096)))
      assert(span(0x80000,4096).map(s.ib)==expected(span(0x2010,4096)))
      d.io.pages(0).metadata.canonicalStart.expect(0x11010.U);d.io.pages(0).metadata.validBytes.expect(512.U)
      d.io.pages(1).metadata.canonicalStart.expect(0x12010.U);d.io.pages(1).metadata.validBytes.expect(0.U)
      d.io.pages(1).writerOpen.expect(false.B);d.io.pages(1).pageValid.expect(false.B)
      for(slot<-0 until 2)d.io.pages(slot).metadata.generation.expect(2.U)
      s.issue(bytes=4096,refill=3);s.check(3,span(0x11010,512))
      d.io.rowTransitions.expect(1.U);d.io.cacheWindows(0).mappedSize.expect(8192.U)
      assert(s.plans.filter(_.id.refill==3).forall(!_.ib))
      assert(span(0x8000,512).map(s.ib)==expected(span(0x11010,512)))
    }
  }

  it should "accept simultaneous configuration offers without cancellation or an idle cycle" in {
    test(new DmaReadHarness).withAnnotations(DmaReadTestModel.backend){d=>
      val s=new Sim(d,stalls=false);s.map(bytes=64);s.configure(Config(tileBytes=64,tail=64))
      window(d,s,0,0,0x1000,64,64,Seq(0))
      val n=d.io.normConfig.bits;n.enabled.poke(false.B);n.totalBytes.poke(0.U);n.localBytes.poke(0.U);n.ibBytes.poke(0.U)
      n.dramSpillBase.poke(0.U);n.contextId.poke(0.U);n.epoch.poke(0.U);n.logicalId.poke(0.U);n.pageCount.poke(0.U)
      for(i<-0 until d.p.cachePages){n.pageSlots(i).poke(0.U);n.generations(i).poke(0.U)}
      d.io.normConfig.valid.poke(true.B);d.io.config.valid.poke(true.B);d.io.cacheConfig.valid.poke(true.B)
      val fires=scala.collection.mutable.ArrayBuffer.empty[Int]
      for(_<-0 until 8){
        val ns=s.b(d.io.normConfig.valid)&&s.b(d.io.normConfig.ready)
        val ps=s.b(d.io.config.valid)&&s.b(d.io.config.ready)
        val ms=s.b(d.io.cacheConfig.valid)&&s.b(d.io.cacheConfig.ready)
        s.tick()
        if(ns){fires+=0;d.io.normConfig.valid.poke(false.B)}
        if(ps){fires+=1;d.io.config.valid.poke(false.B)}
        if(ms){fires+=2;d.io.cacheConfig.valid.poke(false.B)}
      }
      assert(fires.toSeq==Seq(0,1,2),"every held config must fire exactly once")
      s.issue(bytes=64,refill=1);s.check(1,span(0x1000,64))
    }
  }

}

class StaticMapContractTest extends AnyFlatSpec with ChiselScalatestTester {
  it should "detect overflowing windows duplicate slots and overlapping live stream ownership" in {
    for(mode<-0 until 3){
      assertThrows[chiseltest.ChiselAssertionError]{
        test(new OcmCacheMap(DmaReadParams(pagesPerRegion=2))).withAnnotations(DmaReadTestModel.backend){d=>
          d.io.rowCommit.valid.poke(false.B);d.io.config.valid.poke(false.B)
          for(i<-0 until 4){
            val p=d.io.pages(i);val m=p.metadata
            p.allocated.poke(true.B);p.pageValid.poke(false.B);p.writerOpen.poke(true.B);p.readers.poke(0.U);p.coverage.poke(0.U)
            m.canonicalStart.poke((0x1000+i*4096).U);m.validBytes.poke((if(mode==1)4096 else 64).U)
            m.ibPageBase.poke((0x8000+i*4096).U);m.contextId.poke(1.U);m.epoch.poke(1.U);m.logicalId.poke(1.U)
            m.generation.poke(1.U);m.layout.poke(1.U);m.writer.poke(IbWriter.DramFill.U)
            m.dramReadable.poke(true.B);m.consumers.poke(1.U);m.keepWeight.poke(false.B)
          }
          val c=d.io.config.bits
          c.target.poke(0.U);c.stream.poke(0.U);c.contextId.poke(1.U);c.epoch.poke(1.U);c.logicalId.poke(1.U)
          c.mappedStartAddr.poke(0x1000.U);c.mappedSize.poke(64.U);c.rowBytes.poke(64.U)
          c.localReuse.poke(false.B);c.rollingRows.poke(false.B);c.pageCount.poke(1.U)
          for(i<-0 until 4)c.pageSlots(i).poke(0.U)
          if(mode==0){
            c.mappedStartAddr.poke("hfffffffffffffff0".U);c.mappedSize.poke(32.U);c.rowBytes.poke(32.U)
            d.io.pages(0).metadata.canonicalStart.poke("hfffffffffffffff0".U);d.io.pages(0).metadata.validBytes.poke(32.U)
          }
          if(mode==1){c.mappedSize.poke(8192.U);c.rowBytes.poke(8192.U);c.pageCount.poke(2.U)}
          d.io.config.valid.poke(true.B);d.clock.step()
          if(mode==2){c.stream.poke(1.U);c.target.poke(1.U);d.clock.step()}
        }
      }
    }
    info("Three expected protocol assertions are caught; they are not unexpected regression failures")
  }
}
