package npu.core

import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable

// Exhaustive route/control harness. VPU_Test.scala separately verifies that the
// production VPU_Stage1 exposes these same two fixed datapaths.
class VPU1RouteHarness extends Module {
  val io = IO(new Bundle {
    val tpu = Input(Vec(16, SInt(32.W)))
    val tpu_valid = Input(Bool())
    val ub = Input(Vec(16, SInt(8.W)))
    val wb = Input(Vec(16, SInt(8.W)))
    val ub_valid = Input(Bool())
    val wb_valid = Input(Bool())
    // Mock VB contents at the requested read address. The harness models the
    // one-cycle synchronous read; its response remains available during stall.
    val vb_read_data = Input(Vec(16, SInt(8.W)))
    val vb_read_req = Output(Bool())
    val input_mode = Input(UInt(1.W))
    val output_route = Input(UInt(2.W))
    val alu_mode = Input(UInt(2.W))
    val out_shift = Input(UInt(5.W))
    val act_mask = Input(UInt(2.W))
    val fusion_second = Input(Bool())
    val matrix_param = Input(UInt(32.W))
    val stall = Input(Bool())
    val lut_wr_en = Input(Bool())
    val lut_wr_addr = Input(UInt(5.W))
    val lut_wr_data = Input(Vec(32, UInt(8.W)))
    val result = Output(Vec(16, UInt(8.W)))
    val vb_valid = Output(Bool())
    val vpu2_valid = Output(Bool())
    val compute_valid = Output(Bool())
    val result_valid = Output(Bool()) // Internal completion, even for BLOCK.
    val drained = Output(Bool())
    val control_alert = Output(Bool())
    val sync_alert = Output(Bool())
    val qparam_req = Output(Bool())
  })

  val qa = Module(new QuantActUnit())
  val alu = Module(new GPALUUnit())
  val busy = qa.io.busy || alu.io.busy
  io.drained := !busy
  val savedMode = RegInit(VPU1InputMode.TPU)
  val savedRoute = RegInit(VPU1OutputRoute.BLOCK)
  when(!busy) {
    savedMode := io.input_mode
    savedRoute := io.output_route
  }
  // Reject topology/destination changes while any result is in flight.
  // Keep routing the old operation and expose the violated drain contract.
  io.control_alert := busy &&
    ((io.input_mode =/= savedMode) || (io.output_route =/= savedRoute))
  val mode = Mux(busy, savedMode, io.input_mode)
  val route = Mux(busy, savedRoute, io.output_route)
  val direct = mode === VPU1InputMode.DIRECT

  qa.io.input_mode := mode
  qa.io.in_tpu := io.tpu
  qa.io.in_direct := alu.io.out_direct
  qa.io.param_mode := QuantParamMode.PER_MATRIX
  qa.io.matrix_param := io.matrix_param
  qa.io.act_mask := io.act_mask
  qa.io.fusion_second := io.fusion_second
  qa.io.stall := io.stall
  qa.io.soft_reset := false.B
  qa.io.qparam_line_in := VecInit(Seq.fill(16)(0.U(32.W)))
  qa.io.qparam_line_valid := false.B
  qa.io.lut_wr_en := io.lut_wr_en
  qa.io.lut_wr_addr := io.lut_wr_addr
  qa.io.lut_wr_data := io.lut_wr_data

  io.vb_read_req := !direct && io.alu_mode =/= GPALUMode.BYPASS && qa.io.out_lookahead(0)
  val vbResponse = RegEnable(io.vb_read_data, io.vb_read_req)
  alu.io.input_mode := mode
  alu.io.alu_mode := io.alu_mode
  alu.io.out_shift := io.out_shift
  alu.io.stall := io.stall
  for (l <- 0 until 16) {
    qa.io.in_valid(l) := Mux(direct, alu.io.out_direct_valid(l), io.tpu_valid)
    alu.io.in_vec_a(l) := Mux(direct, io.ub(l), qa.io.out_vec(l).asSInt)
    alu.io.in_vec_b(l) := Mux(direct, io.wb(l), vbResponse(l))
    alu.io.in_valid(l) := Mux(direct, io.ub_valid && io.wb_valid, qa.io.out_valid(l))
    io.result(l) := Mux(direct, qa.io.out_vec(l), alu.io.out_tpu(l).asUInt)
  }
  val valid = Mux(direct, qa.io.out_valid(0), alu.io.out_tpu_valid(0))
  io.result_valid := valid
  io.vb_valid := valid && route === VPU1OutputRoute.VB
  io.vpu2_valid := valid && route === VPU1OutputRoute.VPU2
  io.compute_valid := valid && route === VPU1OutputRoute.COMPUTE
  io.sync_alert := qa.io.sync_alert
  io.qparam_req := qa.io.qparam_req_line
}

class VPU1RouteTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "VPU1 fixed routes"

  private def signed(x: Int): Int = if ((x & 255) >= 128) (x & 255) - 256 else x & 255
  private def clip(x: Int): Int = x.max(-128).min(127)
  private val lut = Array.tabulate(1024)(i => ((i * 37) ^ (i >> 3) ^ (i >> 8)) & 255)

  private def init(dut: VPU1RouteHarness): Unit = {
    dut.clock.setTimeout(0)
    dut.io.tpu.foreach(_.poke(0.S))
    dut.io.ub.foreach(_.poke(0.S))
    dut.io.wb.foreach(_.poke(0.S))
    dut.io.vb_read_data.foreach(_.poke(0.S))
    dut.io.tpu_valid.poke(false.B)
    dut.io.ub_valid.poke(false.B)
    dut.io.wb_valid.poke(false.B)
    dut.io.input_mode.poke(0.U)
    dut.io.output_route.poke(0.U)
    dut.io.alu_mode.poke(0.U)
    dut.io.out_shift.poke(0.U)
    dut.io.act_mask.poke(0.U)
    dut.io.fusion_second.poke(false.B)
    dut.io.matrix_param.poke((BigInt(1) << 16).U)
    dut.io.stall.poke(false.B)
    for (burst <- 0 until 32) {
      dut.io.lut_wr_en.poke(true.B)
      dut.io.lut_wr_addr.poke(burst.U)
      for (w <- 0 until 32) dut.io.lut_wr_data(w).poke(lut(burst * 32 + w).U)
      dut.clock.step()
    }
    dut.io.lut_wr_en.poke(false.B)
    dut.clock.step(2)
  }

  it should "sustain both seven-cycle paths, align lookahead VB reads, and switch routes only after drain" in {
    test(new VPU1RouteHarness) { dut =>
      init(dut)
      // Persistent mock VB holds the first GEMM's result for fusion operand2.
      var vb = Vector.empty[Array[Int]]
      var sawResponseStall = false
      // Check all masks, all TPU ops, all destinations, and TPU -> direct -> TPU.
      for (mask <- 0 until 4; op <- 0 until 3) {
        def runOperation(direct: Boolean, second: Boolean, route: Int, stalledRun: Boolean): Unit = {
          dut.io.drained.expect(true.B)
          dut.io.input_mode.poke((if (direct) 1 else 0).U)
          dut.io.output_route.poke(route.U)
          dut.io.alu_mode.poke((if (second || direct) op else 0).U)
          dut.io.out_shift.poke((if (direct) 31 else 0).U)
          dut.io.act_mask.poke(mask.U)
          dut.io.fusion_second.poke(second.B)
          val expected = mutable.Queue[(Int, Array[Int])]()
          val vbExpected = mutable.Queue[(Int, Int)]()
          var received = Vector.empty[Array[Int]]
          var tick = 0
          var row = 0
          var cycle = 0
          var vbReads = 0
          var previousReq = false
          while ((row < 20 || expected.nonEmpty) && cycle < 120) {
            // Force stalls over the first VB/LUT response and at later boundaries.
            val stall = stalledRun && ((cycle >= 4 && cycle <= 6) || cycle % 19 == 12)
            val bubble = stalledRun && cycle % 13 == 9
            dut.io.stall.poke(stall.B)
            // Occasionally only one direct source is valid: no partial ADD accepted.
            val ubValid = row < 20 && !bubble
            val wbValid = row < 20 && !(stalledRun && cycle % 13 == 10)
            val accepted = row < 20 && !bubble && (!direct || wbValid) && !stall
            dut.io.tpu_valid.poke((!direct && row < 20 && !bubble).B)
            dut.io.ub_valid.poke((direct && ubValid).B)
            dut.io.wb_valid.poke((direct && wbValid).B)
            val xs = Array.tabulate(16)(l => -600 + row * 47 + l * 13)
            val us = Array.tabulate(16)(l => if (l == 0) -128 else if (l == 1) 127 else (row * 17 + l * 11) % 256 - 128)
            val ws = Array.tabulate(16)(l => if (l == 0) -128 else if (l == 1) 127 else (row * 31 + l * 7) % 256 - 128)
            for (l <- 0 until 16) {
              dut.io.tpu(l).poke(xs(l).S)
              dut.io.ub(l).poke(us(l).S)
              dut.io.wb(l).poke(ws(l).S)
              // VB read index advances on requests, independently of source timing.
              dut.io.vb_read_data(l).poke((if (vbReads < vb.size) vb(vbReads)(l) else 0).S)
            }
            if (accepted) {
              val act = (mask & (if (second) 2 else 1)) != 0
              val gold = Array.tabulate(16) { l =>
                if (direct) lut(us(l) + ws(l) + 512)
                else {
                  val a = if (act) signed(lut(xs(l).max(-512).min(511) + 512)) else clip(xs(l))
                  val b = if (second) vb(row)(l) else 0
                  val value = if (!second || op == 0) a else if (op == 1) a + b else a * b
                  clip(value) & 255
                }
              }
              expected.enqueue((tick + 7, gold))
              if (!direct && second && op != 0) vbExpected.enqueue((tick + 3, row))
              row += 1
            }
            val readDue = !stall && vbExpected.headOption.exists(_._1 == tick)
            dut.io.vb_read_req.expect(readDue.B)
            if (readDue) {
              assert(vbExpected.dequeue()._2 == vbReads)
              vbReads += 1
            }
            if (previousReq && stall) sawResponseStall = true
            previousReq = readDue
            val due = !stall && expected.headOption.exists(_._1 == tick)
            dut.io.result_valid.expect(due.B)
            dut.io.vb_valid.expect((due && route == 1).B)
            dut.io.vpu2_valid.expect((due && route == 2).B)
            dut.io.compute_valid.expect((due && route == 3).B)
            if (due) {
              val gold = expected.dequeue()._2
              for (l <- 0 until 16) dut.io.result(l).expect(gold(l).U)
              received :+= gold.map(signed)
            }
            dut.io.control_alert.expect(false.B)
            dut.io.sync_alert.expect(false.B)
            dut.io.qparam_req.expect(false.B)
            dut.clock.step()
            if (!stall) tick += 1
            cycle += 1
          }
          assert(row == 20 && expected.isEmpty && vbExpected.isEmpty)
          if (!stalledRun) assert(cycle == 27, "Expected 16 elements/cycle after seven-cycle fill")
          dut.io.tpu_valid.poke(false.B)
          dut.io.ub_valid.poke(false.B)
          dut.io.wb_valid.poke(false.B)
          dut.io.stall.poke(false.B)
          dut.io.drained.expect(true.B)
          if (!direct && !second) vb = received
        }
        runOperation(direct = false, second = false, route = 1, stalledRun = false)
        runOperation(direct = false, second = true, route = 2, stalledRun = true)
        runOperation(direct = true, second = false, route = 3, stalledRun = false)
        runOperation(direct = true, second = false, route = 0, stalledRun = true)
        runOperation(direct = false, second = true, route = 3, stalledRun = false)
        if (mask == 0 && op == 0) {
          runOperation(direct = true, second = false, route = 1, stalledRun = false)
          runOperation(direct = true, second = false, route = 2, stalledRun = false)
          runOperation(direct = false, second = true, route = 0, stalledRun = false)
        }
      }
      assert(sawResponseStall, "Must exercise VB/LUT response arriving during global stall")
    }
  }

  it should "flag and reject mode or destination changes until the current pipeline drains" in {
    test(new VPU1RouteHarness) { dut =>
      init(dut)
      dut.io.output_route.poke(1.U)
      dut.io.tpu.foreach(_.poke(42.S))
      dut.io.tpu_valid.poke(true.B)
      dut.clock.step()
      dut.io.tpu_valid.poke(false.B)
      dut.io.drained.expect(false.B)
      dut.io.output_route.poke(3.U)
      dut.io.control_alert.expect(true.B)
      dut.io.output_route.poke(1.U)
      dut.io.input_mode.poke(1.U)
      dut.io.control_alert.expect(true.B)
      dut.io.output_route.poke(3.U)
      for (_ <- 0 until 6) {
        dut.io.compute_valid.expect(false.B)
        dut.clock.step()
      }
      dut.io.vb_valid.expect(true.B)
      dut.io.compute_valid.expect(false.B)
      dut.io.result.foreach(_.expect(42.U))
      dut.clock.step()
      dut.io.drained.expect(true.B)
      dut.io.control_alert.expect(false.B)
      dut.io.ub.foreach(_.poke(127.S))
      dut.io.wb.foreach(_.poke(127.S))
      dut.io.ub_valid.poke(true.B)
      dut.io.wb_valid.poke(true.B)
      dut.io.alu_mode.poke(2.U)
      dut.io.out_shift.poke(31.U)
      dut.clock.step()
      dut.io.ub_valid.poke(false.B)
      dut.io.wb_valid.poke(false.B)
      dut.clock.step(6)
      dut.io.compute_valid.expect(true.B)
      dut.io.vb_valid.expect(false.B)
      dut.io.result.foreach(_.expect(lut(254 + 512).U))
      dut.clock.step()
      dut.io.drained.expect(true.B)
    }
  }
}
