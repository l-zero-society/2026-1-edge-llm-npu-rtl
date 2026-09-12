import chisel3._
import chisel3.util._

class vectomat extends Module {
  val io = IO(new Bundle {
    val in_vec    = Input(Vec(16, UInt(8.W)))
    val out_vec   = Output(Vec(16, UInt(8.W)))
    val in_valid  = Input(Bool())
    val out_valid = Output(Bool())
  })

  val matreg = RegInit(
    VecInit(Seq.fill(15)(VecInit(Seq.fill(16)(0.U(8.W)))))
  )

  // The first vector of each matrix occurs once per 16 valid vectors.
  val (vectorCount, _) = Counter(io.in_valid, 16)
  val firstVector = io.in_valid && vectorCount === 0.U

  val collectCount = RegInit(0.U(4.W))
  val outputActive = RegInit(false.B)
  val outputIndex  = RegInit(0.U(4.W))

  // Receive matrix 15's first vector while starting the first output.
  val startOutput = firstVector && collectCount === 15.U

  io.out_valid := startOutput || outputActive
  io.out_vec   := Mux(startOutput, matreg(0), matreg(outputIndex))

  when(firstVector) {
    when(collectCount === 15.U) {
      // Output the old matreg(0) and overwrite it on the same clock edge.
      matreg(0)    := io.in_vec
      collectCount := 0.U
      outputActive := true.B
      outputIndex  := 1.U
    }.otherwise {
      // Indexed write: update only the selected vector register.
      matreg(collectCount) := io.in_vec
      collectCount         := collectCount + 1.U
    }
  }

  // Output matreg(1), ..., matreg(14), then matreg(0).
  when(outputActive) {
    when(outputIndex === 0.U) {
      outputActive := false.B
    }.elsewhen(outputIndex === 14.U) {
      outputIndex := 0.U
    }.otherwise {
      outputIndex := outputIndex + 1.U
    }
  }
}
