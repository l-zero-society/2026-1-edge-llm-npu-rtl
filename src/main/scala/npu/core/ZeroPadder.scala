import circt.stage.ChiselStage // import first
import chisel3._
import chisel3.util._



class Zero_Padder extends Module {
  val io = IO(new Bundle {
    val zext_in   = Input(SInt(8.W))
    val zext_out  = Output(SInt(8.W))
  })

    val counter = RegInit(0.U(4.W))

    counter := counter + 1.U

    val sel = !(counter.orR)

    io.zext_out := Mux(sel, io.zext_in, 0.S)
}

object zext extends App {
  ChiselStage.emitSystemVerilogFile(new Zero_Padder, Array("--target-dir", "generated/core"))
  println("Extract SV Finished! Please check 'generated' directory")
}