package npu.top

import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import npu.core._
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable
import scala.util.Random

class ComputeUnitTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ComputeUnit production routing"

  private def init(dut: ComputeUnit): Unit = {
    dut.clock.setTimeout(0)
    Seq(dut.io.ub_in, dut.io.wb_in, dut.io.vb_in, dut.io.nb_in).foreach(_.foreach(_.poke(0.U)))
    Seq(dut.io.ub_valid, dut.io.wb_valid, dut.io.vb_valid, dut.io.nb_valid,
      dut.io.ub_transpose_en, dut.io.wb_transpose_en, dut.io.output_transpose_en,
      dut.io.ub_stream_en, dut.io.wb_stream_en, dut.io.comp_stream_en,
      dut.io.vector_compact_in, dut.io.vector_compact_out,
      dut.io.tpu_en, dut.io.tpu_input_tile_start, dut.io.tpu_clear_w,
      dut.io.vpu1_en, dut.io.vpu1_fusion_second, dut.io.vpu2_en,
      dut.io.vpu2_norm_phase, dut.io.vpu2_clr_acc, dut.io.vpu2_rope_en,
      dut.io.rope_position_init, dut.io.lut_program_start,
      dut.io.qb_valid, dut.io.fb_valid, dut.io.soft_reset, dut.io.stall).foreach(_.poke(false.B))
    dut.io.tpu_interm_num.poke(1.U)
    dut.io.tpu_out_col_num.poke(1.U)
    dut.io.vpu1_input_mode.poke(VPU1InputMode.TPU)
    dut.io.vpu1_output_route.poke(VPU1OutputRoute.BLOCK)
    dut.io.vpu1_param_mode.poke(QuantParamMode.PER_MATRIX)
    dut.io.matrix_quant_param.poke((BigInt(1) << 16).U)
    dut.io.vpu1_act_mask.poke(0.U)
    dut.io.vpu1_alu_mode.poke(GPALUMode.BYPASS)
    dut.io.vpu1_out_shift.poke(0.U)
    dut.io.vpu2_input_sel.poke(0.U)
    dut.io.vpu2_norm_mode.poke(NormMode.BYPASS)
    dut.io.vpu2_norm_layout.poke(NormLayoutMode.ONLINE)
    dut.io.norm_logical_vector_length.poke(16.U)
    dut.io.norm_inv_vector_length.poke((1 << 16).U)
    dut.io.norm_epsilon.poke(0.U)
    dut.io.rope_base_m.poke(0.U)
    dut.io.lut_write.poke(0.U)
    dut.io.qb_data.foreach(_.poke(0.U))
    dut.io.fb_data.foreach(_.poke(0.U))
  }

  it should "route compute compact and transposed streams under common stall and program LUTs exclusively from WB" in {
    test(new ComputeUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      init(dut)
      val rng = new Random(0x789a)
      def drive(port: Vec[UInt], values: Seq[Int]): Unit =
        values.zipWithIndex.foreach { case (v, i) => port(i).poke((v & 255).U) }
      def expectVec(port: Vec[UInt], values: Seq[Int]): Unit =
        values.zipWithIndex.foreach { case (v, i) => port(i).expect((v & 255).U) }
      def healthy(): Unit = {
        dut.io.fatal_alert.expect(false.B)
        dut.io.qb_req.expect(false.B)
        dut.io.fb_req.expect(false.B)
      }
      def idle(cycles: Int = 12): Unit = {
        dut.io.ub_valid.poke(false.B)
        dut.io.wb_valid.poke(false.B)
        dut.io.nb_valid.poke(false.B)
        dut.io.stall.poke(false.B)
        dut.io.tpu_input_tile_start.poke(false.B)
        for (_ <- 0 until cycles) { healthy(); dut.clock.step() }
      }

      // TR2 configured on, but WB programming must never fill its banks.
      dut.io.wb_transpose_en.poke(true.B)
      dut.io.lut_write.poke(31.U)
      dut.io.lut_program_start.poke(true.B)
      dut.clock.step()
      dut.io.lut_program_start.poke(false.B)
      // Violation is diagnosed and backpressured. The same WB beat is retried.
      dut.io.tpu_en.poke(true.B)
      dut.io.wb_valid.poke(true.B)
      dut.io.lut_prog_alert.expect(true.B)
      dut.io.lut_in_ready.expect(false.B)
      dut.clock.step()
      dut.io.tpu_en.poke(false.B)
      val tables = Seq(64, 32, 32, 128, 128)
      for (target <- 0 until 5; address <- 0 until tables(target)) {
        val payload = if (target == 0) {
          (0 until 16).map(i => (address * 16 + i - 512).max(-128).min(127) & 255)
        } else {
          // Exp/Scale/Cos = Q14 one, Sin = zero; byte0 is the low byte.
          val word = if (target == 3) 0 else 16384
          (0 until 16).map(i => if (i % 2 == 0) word & 255 else word >> 8)
        }
        drive(dut.io.wb_in, payload)
        dut.io.wb_valid.poke(true.B)
        dut.io.lut_write.poke(0.U) // changing the external bitmap is ignored
        if (rng.nextInt(4) == 0) {
          dut.io.stall.poke(true.B)
          dut.io.lut_in_ready.expect(false.B)
          dut.io.lut_prog_done.expect(false.B)
          dut.clock.step(2)
        }
        dut.io.stall.poke(false.B)
        dut.io.lut_in_ready.expect(true.B)
        dut.io.lut_ready.expect(false.B)
        dut.io.compute_out_valid.expect(false.B)
        dut.io.wb_trans_ready.expect(true.B)
        healthy()
        dut.clock.step()
      }
      dut.io.wb_valid.poke(false.B)
      dut.io.lut_prog_done.expect(false.B)
      dut.io.lut_prog_busy.expect(true.B)
      dut.clock.step()
      dut.io.lut_prog_done.expect(true.B)
      dut.io.lut_prog_busy.expect(false.B)
      dut.io.lut_ready.expect(true.B)
      dut.io.wb_transpose_en.poke(false.B)
      idle()

      // Direct VPU1, including BLOCK/VB/VPU2/final destinations. The identity
      // activation above makes ordering and signed-byte wiring observable.
      dut.io.vpu1_en.poke(true.B)
      dut.io.vpu1_input_mode.poke(VPU1InputMode.DIRECT)
      dut.io.vpu1_alu_mode.poke(GPALUMode.MUL) // DIRECT must still use ADD
      dut.io.vpu1_out_shift.poke(31.U)
      for (route <- Seq(0, 1, 2, 3)) {
        dut.io.vpu1_busy.expect(false.B)
        dut.io.vpu1_output_route.poke(route.U)
        dut.io.vpu2_en.poke((route == 2).B)
        dut.io.vpu2_input_sel.poke(2.U)
        val pending = mutable.Queue[(Int, Seq[Int])]()
        var tick = 0
        var row = 0
        var cycles = 0
        while ((row < 20 || pending.nonEmpty) && cycles < 200) {
          val stall = rng.nextInt(4) == 0
          val send = row < 20 && rng.nextInt(5) != 0
          dut.io.stall.poke(stall.B)
          dut.io.ub_valid.poke(send.B)
          dut.io.wb_valid.poke(send.B)
          val a = (0 until 16).map(i => (row + i) % 31 - 15)
          val b = (0 until 16).map(i => i - 8)
          drive(dut.io.ub_in, a)
          drive(dut.io.wb_in, b)
          if (send && !stall) {
            pending.enqueue((tick + 7, a.zip(b).map { case (x, y) => x + y }))
            row += 1
          }
          val due = !stall && pending.headOption.exists(_._1 == tick)
          dut.io.vb_out_valid.expect((due && route == 1).B)
          dut.io.compute_out_valid.expect((due && (route == 2 || route == 3)).B)
          if (due) {
            val gold = pending.dequeue()._2
            if (route == 1) expectVec(dut.io.vb_out, gold)
            if (route >= 2) expectVec(dut.io.compute_out, gold)
          }
          healthy()
          dut.clock.step()
          if (!stall) tick += 1
          cycles += 1
        }
        assert(row == 20 && pending.isEmpty)
        idle()
      }

      // VPU2 direct UB and NB routes. Bypassed transposers must not collect
      // these >32 beats in their otherwise idle ping/pong banks.
      dut.io.vpu1_en.poke(false.B)
      dut.io.vpu1_output_route.poke(VPU1OutputRoute.BLOCK)
      dut.io.vpu2_en.poke(true.B)
      for (source <- Seq(0, 1)) {
        dut.io.vpu2_input_sel.poke(source.U)
        for (row <- 0 until 35) {
          val x = (0 until 16).map(i => (row * 7 + i) & 255)
          drive(dut.io.ub_in, x)
          drive(dut.io.nb_in, x)
          dut.io.ub_valid.poke((source == 1).B)
          dut.io.nb_valid.poke((source == 0).B)
          dut.io.compute_out_valid.expect(true.B)
          expectVec(dut.io.compute_out, x)
          healthy()
          dut.clock.step()
        }
        idle()
      }

      // ZP -> VPU2 bypass -> Compactor: two compact input vectors emerge as
      // exactly two output beats, despite 32 physical rows and random stalls.
      dut.io.vpu2_input_sel.poke(1.U)
      dut.io.vector_compact_in.poke(true.B)
      dut.io.vector_compact_out.poke(true.B)
      for (tile <- 0 until 2) {
        var row = 0
        while (row < 16) {
          val stall = rng.nextInt(3) == 0
          val x = (0 until 16).map(i => 20 + tile * 30 + i)
          drive(dut.io.ub_in, x)
          dut.io.ub_valid.poke((row == 0).B)
          dut.io.stall.poke(stall.B)
          dut.io.zero_pad_busy.expect((row != 0).B)
          dut.io.compactor_busy.expect((row != 0).B)
          dut.io.compute_out_valid.expect((row == 0 && !stall).B)
          if (row == 0 && !stall) expectVec(dut.io.compute_out, x)
          healthy()
          dut.clock.step()
          if (!stall) row += 1
        }
      }
      idle()
      dut.io.output_transpose_en.poke(true.B)
      dut.io.control_alert.expect(true.B) // no silent configuration override
      dut.io.output_transpose_en.poke(false.B)
      dut.io.vector_compact_in.poke(false.B)
      dut.io.vector_compact_out.poke(false.B)

      // End-to-end TPU smoke: X[M,K], W[N,K], Y=X*W^T. Sparse permutation W
      // checks the convention without saturation obscuring the route result.
      dut.io.vpu2_en.poke(false.B)
      dut.io.tpu_en.poke(true.B)
      dut.io.vpu1_en.poke(true.B)
      dut.io.vpu1_input_mode.poke(VPU1InputMode.TPU)
      dut.io.vpu1_output_route.poke(VPU1OutputRoute.COMPUTE)
      dut.io.vpu1_alu_mode.poke(GPALUMode.BYPASS)
      dut.io.vpu1_out_shift.poke(0.U)
      val x = Vector.tabulate(16, 16)((m, k) => (3*m + 5*k) % 31 - 15)
      val w = Vector.tabulate(16, 16)((n, k) => if (k == (n + 3) % 16) 1 else 0)
      val y = Vector.tabulate(16, 16)((m, n) => x(m)((n + 3) % 16))
      val transposedY = y.transpose
      for ((tr1, tr2, tr3) <- Seq((false, false, false), (true, false, false),
        (false, true, true), (true, true, false))) {
        dut.io.ub_transpose_en.poke(tr1.B)
        dut.io.wb_transpose_en.poke(tr2.B)
        dut.io.output_transpose_en.poke(tr3.B)
        dut.io.ub_stream_en.poke(false.B)
        dut.io.wb_stream_en.poke(false.B)
        dut.io.comp_stream_en.poke(tr3.B)
        dut.io.tpu_clear_w.poke(true.B)
        dut.clock.step()
        dut.io.tpu_clear_w.poke(false.B)
        def acceptedStep(): Unit = {
          if (rng.nextInt(4) == 0) {
            dut.io.stall.poke(true.B)
            dut.io.compute_out_valid.expect(false.B)
            healthy()
            dut.clock.step(2)
          }
          dut.io.stall.poke(false.B)
          healthy()
          dut.clock.step()
        }
        val storedW = if (tr2) w.transpose else w
        for (n <- 0 until 16) {
          drive(dut.io.wb_in, storedW(n))
          dut.io.wb_valid.poke(true.B)
          acceptedStep()
        }
        dut.io.wb_valid.poke(false.B)
        if (tr2) {
          dut.io.wb_stream_en.poke(true.B)
          for (_ <- 0 until 16) acceptedStep()
          dut.io.wb_stream_en.poke(false.B)
        }
        val storedX = if (tr1) x.transpose else x
        for (m <- 0 until 16) {
          drive(dut.io.ub_in, storedX(m))
          dut.io.ub_valid.poke(true.B)
          dut.io.tpu_input_tile_start.poke((!tr1 && m == 0).B)
          acceptedStep()
        }
        dut.io.ub_valid.poke(false.B)
        dut.io.tpu_input_tile_start.poke(false.B)
        if (tr1) {
          dut.io.ub_stream_en.poke(true.B)
          for (m <- 0 until 16) {
            dut.io.tpu_input_tile_start.poke((m == 0).B)
            acceptedStep()
          }
          dut.io.ub_stream_en.poke(false.B)
          dut.io.tpu_input_tile_start.poke(false.B)
        }
        var seen = 0
        var cycles = 0
        while (seen < 16 && cycles < 300) {
          val stall = rng.nextInt(4) == 0
          dut.io.stall.poke(stall.B)
          if (stall) dut.io.compute_out_valid.expect(false.B)
          else if (dut.io.compute_out_valid.peek().litToBoolean) {
            expectVec(dut.io.compute_out, if (tr3) transposedY(seen) else y(seen))
            seen += 1
          }
          healthy()
          dut.clock.step()
          cycles += 1
        }
        assert(seen == 16, s"Missing TPU result with transposers $tr1/$tr2/$tr3")
        idle(40)
        dut.io.vpu1_busy.expect(false.B)
      }
    }
  }
}
