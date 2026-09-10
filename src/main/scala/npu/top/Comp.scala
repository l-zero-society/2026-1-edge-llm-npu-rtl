package npu.top

import chisel3._
import chisel3.util._
import npu.core._

// Compute complex wired to the current TPU stream and independent QB/FB
// consumers. Quantization and RoPE parameters no longer pass through PB.
class ComputeUnit(val numLines: Int = 16) extends Module {
  require(numLines == 16)

  val io = IO(new Bundle {
    val ub_in = Input(Vec(numLines, UInt(8.W)))
    val wb_in = Input(Vec(numLines, UInt(8.W)))
    val vb_in = Input(Vec(numLines, UInt(8.W)))
    val nb_in = Input(Vec(numLines, UInt(8.W)))
    val ub_valid = Input(Bool())
    val wb_valid = Input(Bool())
    val vb_valid = Input(Bool())
    val nb_valid = Input(Bool())

    val ub_transpose_en = Input(Bool())
    val wb_transpose_en = Input(Bool())
    val ub_stream_en = Input(Bool())
    val wb_stream_en = Input(Bool())
    val comp_stream_en = Input(Bool())
    val output_transpose_en = Input(Bool())
    val ub_trans_ready = Output(Bool())
    val wb_trans_ready = Output(Bool())
    val comp_trans_ready = Output(Bool())

    // Current TPU_top contract.
    val tpu_input_tile_start = Input(Bool())
    val tpu_clear_w = Input(Bool())
    val tpu_interm_num = Input(UInt(32.W))
    val tpu_out_col_num = Input(UInt(32.W))
    val tpu_fusion_req = Output(Bool())

    // VPU1 operation-level controls. Change input_mode/output_route only when
    // vpu1_busy is false.
    val vpu1_input_mode = Input(UInt(1.W))
    val vpu1_output_route = Input(UInt(2.W))
    val vpu1_param_mode = Input(UInt(1.W))
    val matrix_quant_param = Input(UInt(QuantParamFormat.Bits.W))
    val vpu1_act_mask = Input(UInt(2.W))
    val vpu1_fusion_second = Input(Bool())
    val vpu1_alu_mode = Input(UInt(2.W))
    val vpu1_out_shift = Input(UInt(5.W))
    val vpu1_busy = Output(Bool())
    val vb_req = Output(Bool())

    // QB consumer: 64B = 16 x UInt32.
    val qb_data = Input(Vec(16, UInt(QuantParamFormat.Bits.W)))
    val qb_valid = Input(Bool())
    val qb_req = Output(Bool())

    // VPU2 routing and Normalizer configuration.
    val vpu2_input_sel = Input(UInt(2.W)) // 0: NB, 1: UB, 2: VPU1
    val vpu2_norm_mode = Input(UInt(2.W))
    val vpu2_norm_phase = Input(Bool())
    val vpu2_norm_layout = Input(UInt(1.W))
    val norm_logical_vector_length = Input(UInt(32.W))
    val norm_inv_vector_length = Input(UInt(24.W))
    val norm_epsilon = Input(UInt(32.W))
    val vpu2_clr_acc = Input(Bool())
    val vpu2_rope_en = Input(Bool())
    val vpu2_rope_active = Output(Bool())
    val nb_req = Output(Bool())

    // FB consumer: 32B = 16 x UInt16.
    val rope_position_init = Input(Bool())
    val rope_base_m = Input(UInt(32.W))
    val fb_data = Input(Vec(16, UInt(16.W)))
    val fb_valid = Input(Bool())
    val fb_req = Output(Bool())

    // Shared 256b LUT programming payload; addresses remain unit-specific.
    val quant_lut_wr_en = Input(Bool())
    val norm_lut_wr_en = Input(Bool())
    val norm_lut_is_exp = Input(Bool())
    val rope_cos_wr_en = Input(Bool())
    val rope_sin_wr_en = Input(Bool())
    val quant_lut_wr_addr = Input(UInt(5.W))
    val norm_lut_wr_addr = Input(UInt(4.W))
    val rope_lut_wr_addr = Input(UInt(6.W))
    val lut_wr_data = Input(UInt(256.W))

    val vb_out = Output(Vec(numLines, UInt(8.W)))
    val nb_out = Output(Vec(numLines, UInt(8.W)))
    val compute_out = Output(Vec(numLines, UInt(8.W)))
    val vb_out_valid = Output(Bool())
    val nb_out_valid = Output(Bool())
    val compute_out_valid = Output(Bool())

    val soft_reset = Input(Bool())
    val stall = Input(Bool())
    val lut_ready = Output(Bool())
    val fatal_alert = Output(Bool())
  })

  val tpu = Module(new TPU_top(numRows = numLines, numCols = numLines))
  val vpu1 = Module(new VPU_Stage1(numLines = numLines))
  val vpu2 = Module(new VPU_Stage2(numLines = numLines))
  val ubTransposer = Module(new PingPongTransposer(numLines, 8))
  val wbTransposer = Module(new PingPongTransposer(numLines, 8))
  val outTransposer = Module(new PingPongTransposer(numLines, 8))

  for (transposer <- Seq(ubTransposer, wbTransposer, outTransposer)) {
    transposer.io.stall := io.stall
  }
  ubTransposer.io.in_vec := io.ub_in
  ubTransposer.io.in_valid := io.ub_valid
  ubTransposer.io.transpose := io.ub_transpose_en
  ubTransposer.io.out_stream_en := io.ub_stream_en
  wbTransposer.io.in_vec := io.wb_in
  wbTransposer.io.in_valid := io.wb_valid
  wbTransposer.io.transpose := io.wb_transpose_en
  wbTransposer.io.out_stream_en := io.wb_stream_en
  io.ub_trans_ready := ubTransposer.io.ready
  io.wb_trans_ready := wbTransposer.io.ready

  val ubData = ubTransposer.io.out_vec
  val wbData = wbTransposer.io.out_vec
  val ubStreamValid = ubTransposer.io.out_valid
  val wbStreamValid = wbTransposer.io.out_valid

  tpu.io.in_input := VecInit(ubData.map(_.asSInt))
  tpu.io.input_valid := ubStreamValid
  tpu.io.input_tile_start := io.tpu_input_tile_start
  tpu.io.in_weight := VecInit(wbData.map(_.asSInt))
  tpu.io.weight_valid := wbStreamValid
  tpu.io.clear_W := io.tpu_clear_w
  tpu.io.intermNum := io.tpu_interm_num
  tpu.io.outColNum := io.tpu_out_col_num
  tpu.io.stall := io.stall
  io.tpu_fusion_req := tpu.io.fusion_req

  // Latch the topology and destination at the operation boundary. A requested
  // change while busy is reported and the in-flight operation keeps its route.
  val savedInputMode = RegInit(VPU1InputMode.TPU)
  val savedOutputRoute = RegInit(VPU1OutputRoute.BLOCK)
  when(!vpu1.io.busy) {
    savedInputMode := io.vpu1_input_mode
    savedOutputRoute := io.vpu1_output_route
  }
  val effectiveInputMode =
    Mux(vpu1.io.busy, savedInputMode, io.vpu1_input_mode)
  val effectiveOutputRoute =
    Mux(vpu1.io.busy, savedOutputRoute, io.vpu1_output_route)
  val vpu1ControlAlert = vpu1.io.busy &&
    (io.vpu1_input_mode =/= savedInputMode ||
      io.vpu1_output_route =/= savedOutputRoute)

  vpu1.io.tpu_in := tpu.io.out_accum
  vpu1.io.tpu_valid := tpu.io.out_valid
  vpu1.io.tpu_row_change_update := tpu.io.out_meta.row_change_update
  vpu1.io.direct_a := VecInit(ubData.map(_.asSInt))
  vpu1.io.direct_b := VecInit(wbData.map(_.asSInt))
  vpu1.io.direct_a_valid := ubStreamValid
  vpu1.io.direct_b_valid := wbStreamValid
  vpu1.io.vb_operand := VecInit(io.vb_in.map(_.asSInt))
  vpu1.io.vb_operand_valid := io.vb_valid
  vpu1.io.input_mode := effectiveInputMode
  vpu1.io.param_mode := io.vpu1_param_mode
  vpu1.io.matrix_param := io.matrix_quant_param
  vpu1.io.act_mask := io.vpu1_act_mask
  vpu1.io.fusion_second := io.vpu1_fusion_second
  vpu1.io.alu_mode := io.vpu1_alu_mode
  vpu1.io.out_shift := io.vpu1_out_shift
  vpu1.io.stall := io.stall
  vpu1.io.soft_reset := io.soft_reset
  vpu1.io.qparam_line_in := io.qb_data
  vpu1.io.qparam_line_valid := io.qb_valid
  vpu1.io.quant_lut_wr_en := io.quant_lut_wr_en
  vpu1.io.quant_lut_wr_addr := io.quant_lut_wr_addr
  vpu1.io.quant_lut_wr_data := io.lut_wr_data.asTypeOf(Vec(32, UInt(8.W)))
  io.qb_req := vpu1.io.qparam_req_line
  io.vb_req := vpu1.io.vb_read_req
  io.vpu1_busy := vpu1.io.busy

  val routeToVb = effectiveOutputRoute === VPU1OutputRoute.VB
  val routeToVpu2 = effectiveOutputRoute === VPU1OutputRoute.VPU2
  val routeToCompute = effectiveOutputRoute === VPU1OutputRoute.COMPUTE
  io.vb_out := Mux(
    routeToVb,
    vpu1.io.out_vec,
    VecInit(Seq.fill(numLines)(0.U(8.W)))
  )
  io.vb_out_valid := routeToVb && vpu1.io.out_valid(0)

  val vpu1ToVpu2Valid = routeToVpu2 && vpu1.io.out_valid(0)
  val vpu1ToComputeValid = routeToCompute && vpu1.io.out_valid(0)
  val vpu2Input = MuxLookup(io.vpu2_input_sel, io.nb_in)(Seq(
    0.U -> io.nb_in,
    1.U -> ubData,
    2.U -> vpu1.io.out_vec
  ))
  val vpu2InputValid = MuxLookup(io.vpu2_input_sel, io.nb_valid)(Seq(
    0.U -> io.nb_valid,
    1.U -> ubStreamValid,
    2.U -> vpu1ToVpu2Valid
  ))
  val vpu2RowChange =
    io.vpu2_input_sel === 2.U && vpu1ToVpu2Valid &&
      vpu1.io.out_row_change_update

  vpu2.io.in_vec := vpu2Input
  for (lane <- 0 until numLines)
    vpu2.io.in_valid(lane) := vpu2InputValid
  vpu2.io.row_change_update_in := vpu2RowChange
  vpu2.io.norm_mode := io.vpu2_norm_mode
  vpu2.io.norm_phase := io.vpu2_norm_phase
  vpu2.io.norm_layout := io.vpu2_norm_layout
  vpu2.io.logical_vector_length := io.norm_logical_vector_length
  vpu2.io.inv_vector_length := io.norm_inv_vector_length
  vpu2.io.epsilon := io.norm_epsilon
  vpu2.io.clr_acc := io.vpu2_clr_acc
  vpu2.io.rope_en := io.vpu2_rope_en
  io.vpu2_rope_active := vpu2.io.rope_active
  vpu2.io.stall := io.stall
  vpu2.io.soft_reset := io.soft_reset
  vpu2.io.position_init := io.rope_position_init
  vpu2.io.base_m_in := io.rope_base_m
  vpu2.io.freq_block_in := io.fb_data
  vpu2.io.freq_block_valid := io.fb_valid
  vpu2.io.norm_lut_wr_en := io.norm_lut_wr_en
  vpu2.io.norm_lut_is_exp := io.norm_lut_is_exp
  vpu2.io.norm_lut_wr_addr := io.norm_lut_wr_addr
  vpu2.io.norm_lut_wr_data := io.lut_wr_data.asTypeOf(Vec(16, UInt(16.W)))
  vpu2.io.rope_cos_wr_en := io.rope_cos_wr_en
  vpu2.io.rope_sin_wr_en := io.rope_sin_wr_en
  vpu2.io.rope_lut_wr_addr := io.rope_lut_wr_addr
  vpu2.io.rope_lut_wr_data := io.lut_wr_data.asTypeOf(Vec(16, UInt(16.W)))
  io.fb_req := vpu2.io.freq_req_block
  io.nb_req := vpu2.io.phase2_req
  io.nb_out := vpu2.io.out_norm_p1
  io.nb_out_valid := vpu2.io.out_norm_p1_valid(0)

  val preTransposeData =
    Mux(vpu1ToComputeValid, vpu1.io.out_vec, vpu2.io.out_rope)
  val preTransposeValid =
    vpu1ToComputeValid || vpu2.io.out_rope_valid(0)
  outTransposer.io.in_vec := preTransposeData
  outTransposer.io.in_valid := preTransposeValid
  outTransposer.io.transpose := io.output_transpose_en
  outTransposer.io.out_stream_en := io.comp_stream_en
  io.compute_out := outTransposer.io.out_vec
  io.compute_out_valid := outTransposer.io.out_valid
  io.comp_trans_ready := outTransposer.io.ready

  io.lut_ready := vpu1.io.lut_ready && vpu2.io.lut_ready
  val transposerAlert =
    ubTransposer.io.trans_alert || wbTransposer.io.trans_alert ||
      outTransposer.io.trans_alert
  io.fatal_alert :=
    tpu.io.fatal_alert || vpu1.io.fatal_alert || vpu2.io.fatal_alert ||
      transposerAlert || vpu1ControlAlert
}
