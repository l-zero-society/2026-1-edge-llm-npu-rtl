package npu.core

import chisel3._
import chisel3.util._

object GPALUMode {
  val BYPASS = 0.U(2.W)
  val ADD    = 1.U(2.W)
  val MUL    = 2.U(2.W)
}

// Three enabled clock edges from input to output. Data, mode, shift and
// clipping status travel together; global stall freezes all pipeline state.
// Output valid denotes a transferable beat and is suppressed during stall.
class GPALUCore(val inBits: Int = 8, val outBits: Int = 8) extends Module {
  require(inBits == 8 && outBits == 8, "VPU1 GPALU uses signed INT8 operands")

  val io = IO(new Bundle {
    val in_a = Input(SInt(8.W))
    val in_b = Input(SInt(8.W))
    val in_valid = Input(Bool())
    val input_mode = Input(UInt(1.W))
    val alu_mode = Input(UInt(2.W))
    val out_shift = Input(UInt(5.W))
    val stall = Input(Bool())

    val out_tpu = Output(SInt(8.W))
    val out_direct = Output(SInt(10.W))
    val out_tpu_valid = Output(Bool())
    val out_direct_valid = Output(Bool())
    // Saturation after shifting, aligned with the selected output beat.
    val overflow = Output(Bool())
    val busy = Output(Bool())
  })

  val run = !io.stall
  val direct = io.input_mode === VPU1InputMode.DIRECT
  val s1A = RegEnable(io.in_a, run)
  val s1B = RegEnable(io.in_b, run)
  val s1Mode = RegEnable(Mux(direct, GPALUMode.ADD, io.alu_mode), run)
  val s1Shift = RegEnable(Mux(direct, 0.U, io.out_shift), run)
  val s1Direct = RegEnable(direct, run)
  val s1Valid = RegEnable(io.in_valid, false.B, run)

  val result = MuxLookup(s1Mode, s1A.pad(16))(Seq(
    GPALUMode.ADD -> (s1A +& s1B).pad(16),
    GPALUMode.MUL -> (s1A * s1B)
  ))
  val s2Result = RegEnable(result, run)
  val s2Shift = RegEnable(s1Shift, run)
  val s2Direct = RegEnable(s1Direct, run)
  val s2Valid = RegEnable(s1Valid, false.B, run)

  val shifted = s2Result >> s2Shift
  val tpuClip = shifted < (-128).S || shifted > 127.S
  val directClip = s2Result < (-512).S || s2Result > 511.S
  val tpuResult = Mux(shifted < (-128).S, (-128).S,
    Mux(shifted > 127.S, 127.S, shifted)).asSInt
  val directResult = Mux(s2Result < (-512).S, (-512).S,
    Mux(s2Result > 511.S, 511.S, s2Result)).asSInt

  val s3Valid = RegEnable(s2Valid, false.B, run)
  val s3Direct = RegEnable(s2Direct, run)
  val s3Clip = RegEnable(Mux(s2Direct, directClip, tpuClip), run)
  io.out_tpu := RegEnable(tpuResult, run)
  io.out_direct := RegEnable(directResult, run)
  io.out_tpu_valid := run && s3Valid && !s3Direct
  io.out_direct_valid := run && s3Valid && s3Direct
  io.overflow := run && s3Valid && s3Clip
  io.busy := s1Valid || s2Valid || s3Valid
}

class GPALUUnit(
  val numLines: Int = 16,
  val inBits: Int = 8,
  val outBits: Int = 8
) extends Module {
  require(numLines == 16)
  require(inBits == 8 && outBits == 8)

  val io = IO(new Bundle {
    val in_vec_a = Input(Vec(numLines, SInt(8.W)))
    val in_vec_b = Input(Vec(numLines, SInt(8.W)))
    val in_valid = Input(Vec(numLines, Bool()))
    val input_mode = Input(UInt(1.W))
    val alu_mode = Input(UInt(2.W))
    val out_shift = Input(UInt(5.W))
    val stall = Input(Bool())

    val out_tpu = Output(Vec(numLines, SInt(8.W)))
    val out_direct = Output(Vec(numLines, SInt(10.W)))
    val out_tpu_valid = Output(Vec(numLines, Bool()))
    val out_direct_valid = Output(Vec(numLines, Bool()))
    val alu_alert = Output(Bool())
    val busy = Output(Bool())
  })

  val cores = Seq.fill(numLines)(Module(new GPALUCore(inBits, outBits)))
  for (r <- 0 until numLines) {
    cores(r).io.in_a := io.in_vec_a(r)
    cores(r).io.in_b := io.in_vec_b(r)
    cores(r).io.in_valid := io.in_valid(r)
    cores(r).io.input_mode := io.input_mode
    cores(r).io.alu_mode := io.alu_mode
    cores(r).io.out_shift := io.out_shift
    cores(r).io.stall := io.stall
    io.out_tpu(r) := cores(r).io.out_tpu
    io.out_direct(r) := cores(r).io.out_direct
    io.out_tpu_valid(r) := cores(r).io.out_tpu_valid
    io.out_direct_valid(r) := cores(r).io.out_direct_valid
  }
  io.alu_alert := VecInit(cores.map(_.io.overflow)).asUInt.orR
  io.busy := VecInit(cores.map(_.io.busy)).asUInt.orR
}
