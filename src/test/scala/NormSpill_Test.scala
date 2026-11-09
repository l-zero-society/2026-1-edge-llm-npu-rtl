package npu.dma
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import DmaReadTestModel._
class NormSpillTest extends AnyFlatSpec with ChiselScalatestTester {
  for((name,total,head,ibBytes)<-Seq(("NB only",64,64,0),("NB plus IB tail",544,32,512),
      ("DRAM without IB",224,32,0),("multi page IB plus DRAM",4736,64,4608))) {
    it should s"share phase1 and phase2 offsets for $name without virtual DRAM addressing" in {
      test(new DmaReadHarness(scheduled=true,bankedWrites=true)).withAnnotations(DmaReadTestModel.backend){d=>
        d.clock.setTimeout(0)
        val s=new Sim(d,stalls=false)
        val pages=(ibBytes+4095)/4096;val base=BigInt(0x9010);val logical=9
        for(i<-0 until pages){
          assert(s.pageCommand(IbPageOp.Allocate,i,PageSpec(canonical=i*4096,physical=if(i==0)0x40000 else 0xc0000,
            bytes=math.min(4096,ibBytes-i*4096),logical=logical,writer=IbWriter.Norm,consumers=0,dramReadable=false))==0)
        }
        val c=d.io.normConfig.bits
        c.enabled.poke(true.B); c.totalBytes.poke(total.U);c.localBytes.poke(head.U);c.ibBytes.poke(ibBytes.U);c.dramSpillBase.poke(base.U)
        c.contextId.poke(1.U);c.epoch.poke(1.U);c.logicalId.poke(logical.U);c.pageCount.poke(pages.U)
        for(i<-0 until d.p.cachePages){c.pageSlots(i).poke((if(i<pages)i else 0).U);c.generations(i).poke(1.U)}
        d.io.normConfig.valid.poke(true.B);s.waitFor(s.b(d.io.normConfig.ready));s.tick();d.io.normConfig.valid.poke(false.B)
        d.io.normExternalBytes.expect((total-head).U)
        d.io.credit(4).localReservedBytes.expect(head.U);d.io.credit(4).freeBytes.expect((8192-head).U)
        val values=Vector.tabulate(total)(i=>(i*19+(i>>8)*3+(Seed&255).toInt)&255)
        // Pending phase2 must not turn an incomplete producer page into DRAM.
        if(total>head){
          d.io.status(4).producerReady.poke(false.B)
          s.issue(stream=5,target=4,bytes=math.min(4096,total-head),refill=1,logical=logical,dest=head)
          for(_<-0 until 6)s.tick()
          assert(s.admissions.isEmpty && s.dramRequests.isEmpty)
        }
        for(offset<-0 until total by 16){
          val port=d.io.normStore
          s.idPoke(port.bits.identity,Id(4,1,1,100+offset/16,logical));port.bits.offset.poke(offset.U)
          val data=(0 until 16).foldLeft(BigInt(0))((v,i)=>v|(BigInt(values(offset+i))<<(8*i)))
          port.bits.data.poke(data.U);port.valid.poke(true.B);s.waitFor(s.b(port.ready));s.tick();port.valid.poke(false.B)
          s.waitFor(s.b(d.io.normStoreResult.valid));d.io.normStoreResult.bits.error.expect(false.B);s.tick()
          if(pages>0)d.io.pages(0).pageValid.expect(false.B)
          assert(s.admissions.isEmpty)
        }
        assert(s.normLocalCommits==head/16 && s.normDramCommits==(total-head-ibBytes)/16)
        assert((0 until head).map(i=>s.normLocal(BigInt(i)))==values.take(head))
        assert((0 until total-head-ibBytes).map(i=>s.normDram(base+i))==values.drop(head+ibBytes))
        for(i<-0 until pages){
          val pg=s.allocations(i)
          assert(span(pg.physical,pg.bytes).map(s.ib)==values.slice(head+i*4096,head+i*4096+pg.bytes))
          assert(!s.ib.contains(pg.physical+pg.bytes))
          assert(s.pageCommand(IbPageOp.FinishWriter,i)==0)
        }
        for(i<-0 until pages){val pg=s.allocations(i);assert(s.pageCommand(IbPageOp.Rebind,i,pg.copy(consumers=1))==0)}
        d.io.status(4).producerReady.poke(true.B)
        if(total==head){
          assert(s.dramRequests.isEmpty && s.ibReads.isEmpty && s.admissions.isEmpty)
          d.io.status(4).needsExternalSupply.poke(false.B)
        }else{
          var offset=head;var id=1
          while(offset<total){
            val n=math.min(4096,total-offset)
            if(id>1)s.issue(stream=5,target=4,bytes=n,refill=id,logical=logical,dest=offset)
            s.checkBytes(id,values.slice(offset,offset+n),dest=offset,streamLast=offset+n==total)
            s.consume(Id(4,1,1,id,logical),n);offset+=n;id+=1
          }
          if(total-head-ibBytes==0)assert(s.dramRequests.isEmpty)
          else assert(s.dramRequests.head.address==base && s.dramRequests.map(_.bytes).sum==total-head-ibBytes)
        }
        assert(s.writes.size==ibBytes && s.writeBeats.size==ibBytes/16)
        d.io.credit(4).freeBytes.expect((8192-head).U)
        if(total==head){
          c.enabled.poke(false.B);d.io.normConfig.valid.poke(true.B)
          s.waitFor(s.b(d.io.normConfig.ready));s.tick();d.io.normConfig.valid.poke(false.B)
          d.io.normEnabled.expect(false.B)
          d.io.status(4).needsExternalSupply.poke(true.B)
          s.configure(Config(stream=5,base=0x5000,tileBytes=16,tail=16))
          s.issue(stream=5,target=4,bytes=16,refill=30);s.check(30,span(0x5000,16));s.consume(Id(4,1,1,30),16)
        }
        info(s"$name: local=${s.normLocalCommits*16} IB=${s.writes.size} DRAM=${s.normDramCommits*16} committed bytes")
      }
    }
  }
}
