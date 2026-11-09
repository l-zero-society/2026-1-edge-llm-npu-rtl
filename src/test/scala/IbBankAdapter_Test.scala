package npu.dma
import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable
class BankTestHarness extends Module {
  val io=IO(new Bundle{val in=Flipped(Vec(3,Decoupled(new IbFillWrite)));val banks=Vec(4,Decoupled(new IbFillWrite));val read=Flipped(Decoupled(new IbWordRead));val backing=Decoupled(new IbWordRead)})
  val a=Module(new IbBankWriteAdapter);a.io.in<>io.in
  val h=Module(new IbReadWriteHazard);h.io.read<>io.read;io.backing<>h.io.backing
  h.io.writes<>a.io.banks;io.banks<>h.io.backingWrites
}
class IbBankAdapterTest extends AnyFlatSpec with ChiselScalatestTester {
  for(conflict<-Seq(false,true)){
    it should s"commit independent writers with exact lanes and stable bank backpressure conflict=$conflict" in {
      test(new BankTestHarness).withAnnotations(DmaReadTestModel.backend){d=>
        val count=32;val next=Array.fill(3)(0);val commits=Array.fill(3)(0)
        val store=mutable.Map.empty[BigInt,Int];val expected=mutable.Map.empty[BigInt,Int]
        val held=mutable.Map.empty[Int,Seq[BigInt]];var cycles=0;var peak=0;var readCount=0
        def snapshot(w:IbFillWrite):Seq[BigInt]=Seq(w.wordAddress.peek().litValue,w.data.peek().litValue,w.laneMask.peek().litValue,
          w.page.peek().litValue,w.generation.peek().litValue,w.identity.target.peek().litValue,w.identity.refillId.peek().litValue)
        def address(i:Int,n:Int):BigInt=(if(conflict)BigInt(0x1000+i*4096)else BigInt(i)*0x40000)+n*64
        while(next.exists(_<count)&&cycles<400){
          for(i<-0 until 3){
            val n=next(i);val x=d.io.in(i);x.valid.poke((n<count).B)
            x.bits.wordAddress.poke(address(i,n).U);x.bits.page.poke(i.U);x.bits.generation.poke(7.U)
            val id=x.bits.identity;id.target.poke(i.U);id.contextId.poke(1.U);id.epoch.poke(2.U);id.logicalId.poke((10+i).U);id.refillId.poke(n.U)
            val lane=if(i==0)0 else n%4;val mask=if(i==0)15 else 1<<lane
            val bytes=if(i==0)64 else 16
            val data=(0 until bytes).foldLeft(BigInt(0))((v,k)=>v|(BigInt((i*71+n*7+k)&255)<<(8*(k+lane*16))))
            x.bits.laneMask.poke(mask.U);x.bits.data.poke(data.U)
          }
          for(b<-0 until 4)d.io.banks(b).ready.poke((!conflict || cycles%7>=3).B)
          d.io.read.valid.poke(true.B);d.io.read.bits.wordAddress.poke(0xe0000.U);d.io.read.bits.laneMask.poke(15.U);d.io.backing.ready.poke(true.B)
          var accepted=0
          for(b<-0 until 4){
            val w=d.io.banks(b)
            if(held.contains(b))assert(w.valid.peek().litToBoolean&&snapshot(w.bits)==held(b))
            if(w.valid.peek().litToBoolean){
              assert(((w.bits.wordAddress.peek().litValue>>18)&3)==b)
              if(w.ready.peek().litToBoolean){
                val i=w.bits.identity.target.peek().litValue.toInt;val n=w.bits.identity.refillId.peek().litValue.toInt
                assert(n==commits(i));commits(i)+=1
                val mask=w.bits.laneMask.peek().litValue.toInt;val a=w.bits.wordAddress.peek().litValue;val data=w.bits.data.peek().litValue
                for(k<-0 until 64 if (mask&(1<<(k/16)))!=0){
                  store(a+k)=((data>>(8*k))&255).toInt
                  val payloadIndex=if(i==0)k else k%16
                  expected(address(i,n)+k)=(i*71+n*7+payloadIndex)&255
                }
                accepted+=Integer.bitCount(mask)*16;held.remove(b)
              }else held(b)=snapshot(w.bits)
            }else held.remove(b)
          }
          if(d.io.backing.valid.peek().litToBoolean)readCount+=1
          for(i<-0 until 3)if(next(i)<count&&d.io.in(i).ready.peek().litToBoolean)next(i)+=1
          peak=peak.max(accepted);d.clock.step();cycles+=1
        }
        assert(next.forall(_==count)&&commits.forall(_==count)&&store==expected)
        if(!conflict){assert(cycles==32&&peak==96&&readCount==32);info("32 cycles: 3072 durable write bytes (96B/cycle) plus 2048 read-port bytes; independent banks")}
        else {assert(peak==64&&cycles>32);info(s"same-bank contention: $cycles cycles, no sustained 96B claim")}
        // Same-word read waits even while its write is stalled; unrelated words do not.
        for(i<-0 until 3)d.io.in(i).valid.poke((i==0).B)
        d.io.in(0).bits.wordAddress.poke(0x1000.U);d.io.banks(0).ready.poke(false.B)
        d.io.read.bits.wordAddress.poke(0x1000.U);d.io.read.ready.expect(false.B)
        d.clock.step(3);d.io.banks(0).ready.poke(true.B);d.io.read.ready.expect(false.B);d.clock.step()
        d.io.in(0).valid.poke(false.B);d.io.read.ready.expect(true.B)
        d.io.read.bits.wordAddress.poke(0x2000.U);d.io.backing.ready.poke(false.B);d.clock.step()
        d.io.in(0).bits.wordAddress.poke(0x2000.U);d.io.in(0).valid.poke(true.B)
        for(_<-0 until 3){d.io.backing.valid.expect(true.B);d.io.backing.bits.wordAddress.expect(0x2000.U)
          d.io.banks(0).valid.expect(false.B);d.io.in(0).ready.expect(false.B);d.clock.step()}
        d.io.backing.ready.poke(true.B);d.clock.step();d.io.read.valid.poke(false.B)
        d.io.banks(0).valid.expect(true.B);d.clock.step();d.io.in(0).valid.poke(false.B)
      }
    }
  }
}

class BankedReadIntegrationTest extends AnyFlatSpec with ChiselScalatestTester {
  import DmaReadTestModel._
  it should "commit DRAM fill output and Norm independently into three banks and keep IB read independent" in {
    test(new DmaReadHarness(bankedWrites=true)).withAnnotations(DmaReadTestModel.backend){d=>
      val s=new Sim(d,stalls=false)
      assert(s.pageCommand(IbPageOp.Allocate,0,PageSpec(physical=0,bytes=64))==0)
      assert(s.pageCommand(IbPageOp.Allocate,1,PageSpec(canonical=0x5000,physical=0x40000,bytes=16,logical=2,writer=IbWriter.Output,consumers=0))==0)
      assert(s.pageCommand(IbPageOp.Allocate,2,PageSpec(canonical=0x1000,physical=0x80000,bytes=16,logical=3,writer=IbWriter.Norm,consumers=0,dramReadable=false))==0)
      val c=d.io.normConfig.bits
      c.enabled.poke(true.B);c.totalBytes.poke(16.U);c.localBytes.poke(0.U);c.ibBytes.poke(16.U);c.dramSpillBase.poke(0.U)
      c.contextId.poke(1.U);c.epoch.poke(1.U);c.logicalId.poke(3.U);c.pageCount.poke(1.U)
      for(i<-0 until d.p.cachePages){c.pageSlots(i).poke(2.U);c.generations(i).poke(1.U)}
      d.io.normConfig.valid.poke(true.B);s.waitFor(s.b(d.io.normConfig.ready));s.tick();d.io.normConfig.valid.poke(false.B)
      s.configure(Config(tileBytes=64,tail=64,passes=2));d.io.computeStall.poke(true.B)
      def norm(id:Int,value:Int):Unit={val x=d.io.normStore;s.idPoke(x.bits.identity,Id(4,1,1,id,3));x.bits.offset.poke(0.U);x.bits.data.poke(value.U)
        x.valid.poke(true.B);s.waitFor(s.b(x.ready));s.tick();x.valid.poke(false.B)}
      s.fillAllow=false
      s.offerProducer(1,0,BigInt(0x12345678),1,Id(1,1,1,90,2));norm(91,0x8765432)
      s.issue(bytes=64,refill=1)
      s.waitFor((0 until 3).forall(b=>s.b(d.io.bankWrites(b).valid)))
      // Hold the next output/Norm requests on their real input backpressure.
      val out=d.io.producerWrite;s.idPoke(out.bits.identity,Id(1,1,1,92,2));out.bits.page.poke(1.U)
      out.bits.generation.poke(1.U);out.bits.offset.poke(0.U);out.bits.laneCount.poke(1.U);out.bits.data.poke(0x99.U);out.valid.poke(true.B)
      val ns=d.io.normStore;s.idPoke(ns.bits.identity,Id(4,1,1,93,3));ns.bits.offset.poke(0.U);ns.bits.data.poke(0xaa.U);ns.valid.poke(true.B)
      for(_<-0 until 6){
        out.ready.expect(false.B);ns.ready.expect(false.B)
        d.io.bankWrites(1).bits.identity.refillId.expect(90.U);d.io.bankWrites(2).bits.identity.refillId.expect(91.U)
        out.bits.data.expect(0x99.U);ns.bits.data.expect(0xaa.U);s.tick()
      }
      assert(s.writes.isEmpty && s.dones.isEmpty && s.deliveries.flatMap(_.bytes).size==64)
      s.fillAllow=true;s.tick();assert(s.bankCycleBytes.last==96);s.fillAllow=false
      var outputAccepted=false;var normAccepted=false;var waited=0
      while((!outputAccepted || !normAccepted || !s.dones.exists(_.id.refill==1)) && waited<100){
        val of=s.b(out.valid)&&s.b(out.ready);val nf=s.b(ns.valid)&&s.b(ns.ready)
        s.tick();waited+=1
        if(of){assert(!outputAccepted);outputAccepted=true;out.valid.poke(false.B)}
        if(nf){assert(!normAccepted);normAccepted=true;ns.valid.poke(false.B)}
      }
      assert(outputAccepted&&normAccepted);s.check(1,span(0x1000,64),streamLast=false)
      assert(s.writes.size==96 && s.producerResults.size==1 && s.normResults.size==1)
      assert(!s.producerResults.head._2 && !s.normResults.head._3)
      assert(span(0,64).map(s.ib)==expected(span(0x1000,64)))
      for(i<-1 until 3){d.io.pages(i).coverage.expect(1.U);d.io.pages(i).pageValid.expect(false.B)}
      s.backingAllow=false
      s.issue(bytes=64,refill=2);s.waitFor(s.b(d.io.wordRead.valid)&&(1 until 3).forall(b=>s.b(d.io.bankWrites(b).valid)))
      val reads=s.ibReads.size
      s.fillAllow=true;s.backingAllow=true;s.tick()
      assert(s.ibReads.size==reads+1 && s.bankCycleBytes.last==32)
      s.check(2,span(0x1000,64))
      for(_<-0 until 8)s.tick()
      assert(s.deliveries.flatMap(_.bytes).size==128 && s.writes.size==128 && s.dones.size==2)
      assert(s.pageCommand(IbPageOp.FinishWriter,1)==0 && s.pageCommand(IbPageOp.FinishWriter,2)==0)
      info("production bank path: 64+16+16=96B committed together; separate 64B IB read plus two 16B commits verified")
    }
  }
}
