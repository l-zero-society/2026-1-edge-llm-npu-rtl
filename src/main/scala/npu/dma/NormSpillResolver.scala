package npu.dma

import chisel3._
import chisel3.util._

object NormLocation { val Local = 0; val IB = 1; val DRAM = 2 }
class NormSpillConfig(p: DmaReadParams) extends Bundle {
  val enabled = Bool() // explicit instruction-boundary enable/disable
  val totalBytes = UInt(32.W); val localBytes = UInt(32.W); val ibBytes = UInt(32.W)
  val dramSpillBase = UInt(64.W)
  val contextId = UInt(16.W); val epoch = UInt(16.W); val logicalId = UInt(16.W)
  val pageCount = UInt((p.regionBits+1).W)
  val pageSlots = Vec(p.cachePages,UInt(p.regionBits.W))
  val generations = Vec(p.cachePages,UInt(32.W))
}
class NormQuery extends Bundle {
  val offset = UInt(32.W); val bytes = UInt(13.W); val write = Bool()
}
class NormResolution(p: DmaReadParams) extends Bundle {
  val location = UInt(2.W); val address = UInt(64.W); val bytes = UInt(13.W)
  val page = UInt(p.regionBits.W); val generation = UInt(32.W)
  val available = Bool(); val inRange = Bool()
}
/** Shared phase1/phase2 coordinate system. DRAM base is the FIRST real spill
  * byte, never a virtual D-S address. Allocated capacity does not replace I.
  */
class NormSpillResolver(p: DmaReadParams) extends Module {
  val io = IO(new Bundle {
    val config = Input(new NormSpillConfig(p)); val pages = Input(Vec(p.cachePages,new IbPageState))
    val query = Input(new NormQuery); val result = Output(new NormResolution(p))
    val producerReady = Output(Bool())
  })
  val c=io.config; val q=io.query
  val split=c.localBytes +& c.ibBytes
  val inLocal=q.offset<c.localBytes; val inIB=q.offset>=c.localBytes && q.offset<split
  val relative=q.offset-c.localBytes
  val index=(relative>>12)(p.regionBits-1,0)
  val slot=c.pageSlots(index); val pg=io.pages(slot)
  val pageOffset=relative(11,0)
  val limit=Mux(inLocal,c.localBytes,Mux(inIB,split,c.totalBytes))
  val room=limit-q.offset
  val count=Mux(q.bytes<room,q.bytes,room)
  val pageRoom=4096.U-pageOffset
  val same=pg.allocated && pg.metadata.contextId===c.contextId && pg.metadata.epoch===c.epoch && pg.metadata.logicalId===c.logicalId &&
    pg.metadata.generation===c.generations(index)
  io.result.location:=Mux(inLocal,NormLocation.Local.U,Mux(inIB,NormLocation.IB.U,NormLocation.DRAM.U))
  io.result.address:=Mux(inLocal,q.offset,Mux(inIB,pg.metadata.ibPageBase+pageOffset,c.dramSpillBase+(q.offset-split)))
  io.result.bytes:=Mux(inIB && pageRoom<count,pageRoom,count)
  io.result.page:=slot;io.result.generation:=c.generations(index)
  io.result.inRange:=q.offset<c.totalBytes && q.offset(3,0)===0.U && q.bytes>0.U && q.bytes(3,0)===0.U
  io.result.available:= !inIB || (same && Mux(q.write,pg.writerOpen && pg.metadata.writer===IbWriter.Norm.U,
    pg.pageValid && !pg.writerOpen && pg.metadata.consumers.orR))
  io.producerReady := (0 until p.cachePages).map{i=>
    val s=io.pages(c.pageSlots(i)); val m=s.metadata
    i.U*4096.U>=c.ibBytes || (i.U<c.pageCount && s.allocated && s.pageValid && !s.writerOpen && m.consumers.orR &&
      m.contextId===c.contextId && m.epoch===c.epoch && m.logicalId===c.logicalId && m.generation===c.generations(i))
  }.reduce(_ && _)
}
class NormStoreRequest extends Bundle {
  val identity=new ReadIdentity; val offset=UInt(32.W); val data=UInt(128.W)
}
class NormStoreResult extends Bundle { val identity=new ReadIdentity;val offset=UInt(32.W);val error=Bool() }
class NormBackingWrite extends Bundle { val identity=new ReadIdentity;val address=UInt(64.W);val data=UInt(128.W) }
/** One outstanding 16B phase1 transaction. Local/DRAM ready are durable commit
  * acknowledgements; IB request capture and its later commit result are separate.
  */
class NormPhase1Adapter(p:DmaReadParams) extends Module {
  val io=IO(new Bundle{
    val config=Input(new NormSpillConfig(p));val pages=Input(Vec(p.cachePages,new IbPageState))
    val request=Flipped(Decoupled(new NormStoreRequest));val result=Decoupled(new NormStoreResult)
    val local=Decoupled(new NormBackingWrite);val dram=Decoupled(new NormBackingWrite)
    val ib=Decoupled(new IbProducerWrite(p));val ibResult=Flipped(Decoupled(new IbProducerResult))
    val drained=Output(Bool())
  })
  val active=RegInit(false.B);val sent=RegInit(false.B);val valid=RegInit(false.B)
  val x=Reg(new NormStoreRequest);val error=Reg(Bool())
  val resolver=Module(new NormSpillResolver(p));resolver.io.config:=io.config;resolver.io.pages:=io.pages
  resolver.io.query.offset:=x.offset;resolver.io.query.bytes:=16.U;resolver.io.query.write:=true.B
  val r=resolver.io.result
  io.request.ready:= !active && !valid;io.drained:= !active && !valid
  when(io.request.fire){x:=io.request.bits;active:=true.B;sent:=false.B}
  io.result.valid:=valid;io.result.bits.identity:=x.identity;io.result.bits.offset:=x.offset;io.result.bits.error:=error
  when(io.result.fire){valid:=false.B}
  val identity=x.identity.contextId===io.config.contextId && x.identity.epoch===io.config.epoch && x.identity.logicalId===io.config.logicalId
  val legal=r.inRange && r.available && identity && r.bytes===16.U
  for((port,kind)<-Seq(io.local->NormLocation.Local,io.dram->NormLocation.DRAM)){
    port.valid:=active && legal && r.location===kind.U
    port.bits.identity:=x.identity;port.bits.address:=r.address;port.bits.data:=x.data
  }
  io.ib.valid:=active && legal && r.location===NormLocation.IB.U && !sent
  io.ib.bits.identity:=x.identity;io.ib.bits.page:=r.page;io.ib.bits.generation:=r.generation
  io.ib.bits.offset:=(x.offset-io.config.localBytes)(11,0);io.ib.bits.laneCount:=1.U;io.ib.bits.data:=x.data
  when(io.ib.fire){sent:=true.B}
  io.ibResult.ready:=active && sent
  when(active && (!legal || io.local.fire || io.dram.fire || io.ibResult.fire)){
    active:=false.B;valid:=true.B;error:= !legal || (io.ibResult.fire && io.ibResult.bits.error)
  }
}
