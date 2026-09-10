package npu.top

import chisel3._
import chiseltest._
import npu.core._
import org.scalatest.flatspec.AnyFlatSpec

class VPUStageTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Production VPU stages"

  private val NumLines = 16
  private val activationLut =
    Array.tabulate(1024)(index => (index * 13 + 7) & 0xff)

  private def initVpu1(dut: VPU_Stage1): Unit = {
    dut.clock.setTimeout(0)
    dut.io.tpu_in.foreach(_.poke(0.S))
    dut.io.tpu_valid.foreach(_.poke(false.B))
    dut.io.tpu_row_change_update.poke(false.B)
    dut.io.direct_a.foreach(_.poke(0.S))
    dut.io.direct_b.foreach(_.poke(0.S))
    dut.io.direct_a_valid.poke(false.B)
    dut.io.direct_b_valid.poke(false.B)
    dut.io.vb_operand.foreach(_.poke(0.S))
    dut.io.vb_operand_valid.poke(false.B)
    dut.io.input_mode.poke(VPU1InputMode.TPU)
    dut.io.param_mode.poke(QuantParamMode.PER_MATRIX)
    dut.io.matrix_param.poke((BigInt(1) << 16).U)
    dut.io.act_mask.poke(0.U)
    dut.io.fusion_second.poke(false.B)
    dut.io.alu_mode.poke(GPALUMode.BYPASS)
    dut.io.out_shift.poke(0.U)
    dut.io.stall.poke(false.B)
    dut.io.soft_reset.poke(false.B)
    dut.io.qparam_line_in.foreach(_.poke(0.U))
    dut.io.qparam_line_valid.poke(false.B)
    dut.io.quant_lut_wr_en.poke(false.B)
    dut.io.quant_lut_wr_addr.poke(0.U)
    dut.io.quant_lut_wr_data.foreach(_.poke(0.U))
  }

  private def programActivationLut(dut: VPU_Stage1): Unit = {
    for (burst <- 0 until 32) {
      dut.io.quant_lut_wr_en.poke(true.B)
      dut.io.quant_lut_wr_addr.poke(burst.U)
      for (word <- 0 until 32) {
        dut.io.quant_lut_wr_data(word)
          .poke(activationLut(burst * 32 + word).U)
      }
      dut.clock.step()
      dut.io.fatal_alert.expect(false.B)
    }
    dut.io.quant_lut_wr_en.poke(false.B)
    dut.clock.step()
    dut.io.lut_ready.expect(true.B)
  }

  private def expectNoVpu1Output(dut: VPU_Stage1): Unit = {
    dut.io.out_valid.foreach(_.expect(false.B))
    dut.io.out_row_change_update.expect(false.B)
  }

  private def advanceToSevenCycleOutput(dut: VPU_Stage1): Unit = {
    // The accepting edge has already occurred. Six more enabled edges complete
    // the fixed seven-edge path.
    for (_ <- 0 until 6) {
      expectNoVpu1Output(dut)
      dut.clock.step()
    }
    dut.io.out_valid.foreach(_.expect(true.B))
  }

  it should "implement TPU QuantAct-to-GPALU and direct GPALU-to-activation paths" in {
    test(new VPU_Stage1()) { dut =>
      initVpu1(dut)
      dut.io.soft_reset.poke(true.B)
      dut.clock.step()
      dut.io.soft_reset.poke(false.B)
      programActivationLut(dut)

      // GEMM/TPU path: identity requantization, activation disabled, then
      // GPALU bypass. Row metadata must emerge with the seventh-cycle result.
      val tpuValues = Array.tabulate(NumLines)(lane => lane * 7 - 50)
      for (lane <- 0 until NumLines) {
        dut.io.tpu_in(lane).poke(tpuValues(lane).S)
        dut.io.tpu_valid(lane).poke(true.B)
      }
      dut.io.tpu_row_change_update.poke(true.B)
      expectNoVpu1Output(dut)
      dut.clock.step()
      dut.io.tpu_valid.foreach(_.poke(false.B))
      dut.io.tpu_row_change_update.poke(false.B)
      advanceToSevenCycleOutput(dut)
      for (lane <- 0 until NumLines) {
        dut.io.out_vec(lane).expect((tpuValues(lane) & 0xff).U)
      }
      dut.io.out_row_change_update.expect(true.B)
      dut.io.qparam_req_line.expect(false.B)
      dut.io.vb_read_req.expect(false.B)
      dut.io.fatal_alert.expect(false.B)
      dut.clock.step()
      dut.io.busy.expect(false.B)

      // Direct VPU1 path: the GPALU must force ADD and shift=0 even though MUL
      // and shift=31 are requested, then QuantAct must force activation.
      dut.io.input_mode.poke(VPU1InputMode.DIRECT)
      dut.io.alu_mode.poke(GPALUMode.MUL)
      dut.io.out_shift.poke(31.U)
      dut.io.matrix_param.poke(0.U)
      val directA = Array.tabulate(NumLines)(lane => lane - 8)
      val directB = Array.tabulate(NumLines)(lane => lane * 2 - 15)
      for (lane <- 0 until NumLines) {
        dut.io.direct_a(lane).poke(directA(lane).S)
        dut.io.direct_b(lane).poke(directB(lane).S)
      }
      dut.io.direct_a_valid.poke(true.B)
      dut.io.direct_b_valid.poke(true.B)
      expectNoVpu1Output(dut)
      dut.clock.step()
      dut.io.direct_a_valid.poke(false.B)
      dut.io.direct_b_valid.poke(false.B)
      advanceToSevenCycleOutput(dut)
      for (lane <- 0 until NumLines) {
        val sum = directA(lane) + directB(lane)
        dut.io.out_vec(lane).expect(activationLut(sum + 512).U)
      }
      dut.io.out_row_change_update.expect(false.B)
      dut.io.qparam_req_line.expect(false.B)
      dut.io.vb_read_req.expect(false.B)
      dut.io.fatal_alert.expect(false.B)
    }
  }

  private def initVpu2(dut: VPU_Stage2): Unit = {
    dut.clock.setTimeout(0)
    dut.io.in_vec.foreach(_.poke(0.U))
    dut.io.in_valid.foreach(_.poke(false.B))
    dut.io.row_change_update_in.poke(false.B)
    dut.io.norm_mode.poke(NormMode.BYPASS)
    dut.io.norm_phase.poke(false.B)
    dut.io.norm_layout.poke(NormLayoutMode.DISTRIBUTED)
    dut.io.logical_vector_length.poke(16.U)
    dut.io.inv_vector_length.poke(0.U)
    dut.io.epsilon.poke(0.U)
    dut.io.clr_acc.poke(false.B)
    dut.io.rope_en.poke(true.B)
    dut.io.stall.poke(false.B)
    dut.io.soft_reset.poke(false.B)
    dut.io.position_init.poke(false.B)
    dut.io.base_m_in.poke(0.U)
    dut.io.freq_block_in.foreach(_.poke(0.U))
    dut.io.freq_block_valid.poke(false.B)
    dut.io.norm_lut_wr_en.poke(false.B)
    dut.io.norm_lut_is_exp.poke(false.B)
    dut.io.norm_lut_wr_addr.poke(0.U)
    dut.io.norm_lut_wr_data.foreach(_.poke(0.U))
    dut.io.rope_cos_wr_en.poke(false.B)
    dut.io.rope_sin_wr_en.poke(false.B)
    dut.io.rope_lut_wr_addr.poke(0.U)
    dut.io.rope_lut_wr_data.foreach(_.poke(0.U))
  }

  it should "enable RoPE only for ONLINE layout and bypass it for DISTRIBUTED layout" in {
    test(new VPU_Stage2()) { dut =>
      initVpu2(dut)

      // The distributed normalization layout overrides a requested RoPE enable.
      dut.io.norm_mode.poke(NormMode.RMSNORM)
      dut.io.rope_active.expect(false.B)
      dut.io.freq_req_block.expect(false.B)
      dut.io.fatal_alert.expect(false.B)

      // In normalization bypass mode, the forced-off RoPE path is directly
      // observable as a same-cycle data/valid passthrough.
      dut.io.norm_mode.poke(NormMode.BYPASS)
      for (lane <- 0 until NumLines) {
        val value = (lane * 17 + 5) & 0xff
        dut.io.in_vec(lane).poke(value.U)
        dut.io.in_valid(lane).poke(true.B)
        dut.io.out_rope(lane).expect(value.U)
        dut.io.out_rope_valid(lane).expect(true.B)
      }
      dut.io.rope_active.expect(false.B)
      dut.io.freq_req_block.expect(false.B)

      dut.io.in_valid.foreach(_.poke(false.B))
      dut.io.norm_layout.poke(NormLayoutMode.ONLINE)
      dut.io.rope_active.expect(true.B)
      dut.io.freq_req_block.expect(true.B)
      dut.io.prefetch_ready.expect(false.B)
      dut.io.fatal_alert.expect(false.B)

      dut.io.rope_en.poke(false.B)
      dut.io.rope_active.expect(false.B)
      dut.io.freq_req_block.expect(false.B)
    }
  }
}
