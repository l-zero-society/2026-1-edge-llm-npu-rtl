package npu.core

import chisel3._

// Operation-level controls: change only after both pipelines have drained.
object VPU1InputMode {
  val TPU    = 0.U(1.W)
  val DIRECT = 1.U(1.W)
}

object VPU1OutputRoute {
  val BLOCK   = 0.U(2.W)
  val VB      = 1.U(2.W)
  val VPU2    = 2.U(2.W)
  val COMPUTE = 3.U(2.W)
}
