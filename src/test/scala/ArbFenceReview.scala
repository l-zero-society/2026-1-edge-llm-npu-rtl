// sbt 'set Compile / unmanagedSources ~= (_.filter(_.getPath.contains("/npu/dma/")))' 'set Test / unmanagedSources ~= (_.filter(f => Set("DmaRead_Test.scala","ArbFenceReview.scala").contains(f.getName)))' 'testOnly npu.dma.ArbFenceReview'
package npu.dma
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
class ArbFenceReview extends AnyFlatSpec with ChiselScalatestTester {
 import DmaReadTestModel._
 it should "progress a destructive control after a FinishWriter stalls an unrelated unreserved admission" in {
 test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend){ d =>
 val s=new Sim(d,stalls=false)
 val pg=PageSpec(bytes=16,logical=8,writer=IbWriter.Output,consumers=0,dramReadable=false)
 assert(s.pageCommand(IbPageOp.Allocate,0,pg)==0)
 assert(!s.outputWrite(0,0,BigInt(7),1,Id(0,1,1,90,8)))
 s.configure(Config(stream=1,base=0x5000,tileBytes=16,tail=16))
 d.io.status(1).producerReady.poke(false.B)
 s.issue(stream=1,target=1,bytes=16,refill=2,logical=2)
 val c=d.io.pageCommand.bits
 c.page.poke(0.U);c.expectedContext.poke(1.U);c.expectedEpoch.poke(1.U)
 c.expectedGeneration.poke(1.U);c.expectedLogicalId.poke(8.U);c.op.poke(IbPageOp.FinishWriter.U)
 d.io.pageCommand.valid.poke(true.B);d.io.status(1).producerReady.poke(true.B)
 d.io.pageCommand.ready.expect(true.B);s.tick()
 d.io.pages(0).pageValid.expect(true.B);d.io.pageResult.bits.error.expect(0.U)
 c.op.poke(IbPageOp.Invalidate.U)
 for(_<-0 until 32 if !s.b(d.io.pageCommand.ready)) s.tick()
 assert(s.b(d.io.pageCommand.ready),"Invalidate and unreserved WB admission are mutually blocked")
 s.tick(); d.io.status(1).full.poke(true.B); d.io.pageCommand.valid.poke(false.B)
 s.waitFor(s.b(d.io.pageResult.valid)); d.io.pageResult.bits.error.expect(0.U)
 d.io.pageResult.bits.op.expect(IbPageOp.Invalidate.U); s.tick()
 d.io.pages(0).allocated.expect(false.B)
 for(_<-0 until 4)s.tick()
 assert(s.admissions.isEmpty);d.io.credit(1).reservedBytes.expect(0.U)
 d.io.status(1).full.poke(false.B);d.io.status(1).enabled.poke(false.B)
 for(_<-0 until 4)s.tick()
 assert(s.admissions.isEmpty);d.io.status(1).enabled.poke(true.B)
 s.check(2,span(0x5000,16))
 assert(s.admissions.count(_.refill==2)==1 && s.dones.count(_.id.refill==2)==1)
 s.consume(Id(1,1,1,2,2),16)
 d.io.credit(1).reservedBytes.expect(0.U);d.io.credit(1).bufferedBytes.expect(0.U)
 d.io.credit(1).entriesUsed.expect(0.U);d.io.credit(1).freeBytes.expect(8192.U)
 }
 }
 it should "keep destructive control fenced behind real reader and consumer lifetime" in {
   test(new DmaReadHarness(scheduled=true)).withAnnotations(DmaReadTestModel.backend){d=>
     val s=new Sim(d,stalls=false)
     val pg=PageSpec(canonical=0x8000,bytes=16,logical=8,writer=IbWriter.Output,consumers=0,dramReadable=false)
     assert(s.pageCommand(IbPageOp.Allocate,0,pg)==0)
     assert(!s.outputWrite(0,0,BigInt(7),1,Id(0,1,1,90,8)))
     assert(s.pageCommand(IbPageOp.FinishWriter,0)==0)
     s.configure(Config(base=0x4000,tileBytes=64,tail=64));s.dramAllow=false
     s.issue(bytes=64,refill=1);s.waitFor(s.admissions.nonEmpty)
     val c=d.io.pageCommand.bits;c.op.poke(IbPageOp.Invalidate.U);c.page.poke(0.U)
     c.expectedContext.poke(1.U);c.expectedEpoch.poke(1.U);c.expectedLogicalId.poke(8.U);c.expectedGeneration.poke(1.U)
     d.io.pageCommand.valid.poke(true.B)
     for(_<-0 until 8){d.io.pageCommand.ready.expect(false.B);s.tick()}
     s.dramAllow=true;s.check(1,span(0x4000,64));d.io.pageCommand.ready.expect(false.B)
     s.consume(Id(0,1,1,1),64);s.waitFor(s.b(d.io.pageCommand.ready));s.tick();d.io.pageCommand.valid.poke(false.B)
     s.waitFor(s.b(d.io.pageResult.valid));d.io.pageResult.bits.error.expect(0.U);s.tick()
     d.io.pages(0).allocated.expect(false.B);assert(s.dones.size==1)
   }
 }

}
