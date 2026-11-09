package npu.dma

import chisel3._
import chisel3.util._

/** 1MiB = 4 x 256KiB. Independent durable write arbiters, not one read-arbiter
  * winner for three producers. Each input must hold its word until commit ACK.
  */
class IbBankWriteAdapter extends Module {
  val io=IO(new Bundle{
    val in=Flipped(Vec(3,Decoupled(new IbFillWrite)))
    val banks=Vec(4,Decoupled(new IbFillWrite))
  })
  val ready=Wire(Vec(4,Vec(3,Bool())))
  for(b<-0 until 4){
    val arb=Module(new RRArbiter(new IbFillWrite,3))
    val locked=RegInit(false.B);val held=Reg(UInt(2.W))
    for(i<-0 until 3){
      arb.io.in(i).bits:=io.in(i).bits
      arb.io.in(i).valid:=io.in(i).valid && io.in(i).bits.wordAddress(19,18)===b.U && (!locked || held===i.U)
      ready(b)(i):=arb.io.in(i).ready && io.in(i).bits.wordAddress(19,18)===b.U && (!locked || held===i.U)
    }
    io.banks(b)<>arb.io.out
    when(arb.io.out.valid && !arb.io.out.ready){locked:=true.B;held:=arb.io.chosen}
    when(arb.io.out.fire){locked:=false.B}
  }
  for(i<-0 until 3){
    io.in(i).ready:=ready.map(_(i)).reduce(_||_)
    when(io.in(i).valid){assert(io.in(i).bits.wordAddress<"h100000".U && io.in(i).bits.wordAddress(5,0)===0.U)}
  }
}
/** Separate read port. Pending writes win same-word hazards unless a read
  * descriptor has already been offered: that read is held and later writes wait.
  * Backend samples read data at request acceptance, including delayed responses.
  */
class IbReadWriteHazard extends Module {
  val io=IO(new Bundle{
    val read=Flipped(Decoupled(new IbWordRead));val backing=Decoupled(new IbWordRead)
    val writes=Flipped(Vec(4,Decoupled(new IbFillWrite)))
    val backingWrites=Vec(4,Decoupled(new IbFillWrite))
  })
  val heldRead=RegInit(false.B)
  val hazard=io.writes.map(w=>w.valid && w.bits.wordAddress===io.read.bits.wordAddress).reduce(_||_)
  io.backing.valid:=io.read.valid && (heldRead || !hazard);io.backing.bits:=io.read.bits
  io.read.ready:=io.backing.ready && (heldRead || !hazard)
  when(io.backing.valid && !io.backing.ready){heldRead:=true.B}
  when(io.backing.fire){heldRead:=false.B}
  for(b<-0 until 4){
    val blocked=heldRead && io.read.valid && io.writes(b).bits.wordAddress===io.read.bits.wordAddress
    io.backingWrites(b).valid:=io.writes(b).valid && !blocked
    io.backingWrites(b).bits:=io.writes(b).bits
    io.writes(b).ready:=io.backingWrites(b).ready && !blocked
  }
}

/** Explicit single-physical-port compatibility profile, never the system default. */
class IbLegacyBankMerge extends Module {
  val io=IO(new Bundle{val in=Flipped(Vec(4,Decoupled(new IbFillWrite)));val out=Decoupled(new IbFillWrite)})
  val a=Module(new RRArbiter(new IbFillWrite,4));val locked=RegInit(false.B);val held=Reg(UInt(2.W))
  for(i<-0 until 4){a.io.in(i)<>io.in(i);a.io.in(i).valid:=io.in(i).valid && (!locked || held===i.U);io.in(i).ready:=a.io.in(i).ready && (!locked || held===i.U)}
  io.out<>a.io.out
  when(a.io.out.valid && !a.io.out.ready){locked:=true.B;held:=a.io.chosen}
  when(a.io.out.fire){locked:=false.B}
}
