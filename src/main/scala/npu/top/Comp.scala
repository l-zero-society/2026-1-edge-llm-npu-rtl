package npu.top

import chisel3._
import chisel3.util._
import npu.core._

// Compute complex wired to the current TPU stream and independent QB/FB
// consumers. Quantization and RoPE parameters no longer pass through PB.
class ComputeUnit(val numLines: Int = 16) extends Module {
  require(numLines == 16)
  private val LUT_WRITE_BITS = 128

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
    val vector_compact_in = Input(Bool())
    val vector_compact_out = Input(Bool())
    val zero_pad_busy = Output(Bool())
    val compactor_busy = Output(Bool())
    val ub_trans_ready = Output(Bool())
    val wb_trans_ready = Output(Bool())
    val comp_trans_ready = Output(Bool())

    // Current TPU_top contract.
    val tpu_en = Input(Bool())
    val tpu_input_tile_start = Input(Bool())
    val tpu_clear_w = Input(Bool())
    val tpu_interm_num = Input(UInt(32.W))
    val tpu_out_col_num = Input(UInt(32.W))
    val tpu_fusion_req = Output(Bool())

    // VPU1 operation-level controls. Change input_mode/output_route only when
    // vpu1_busy is false.
    val vpu1_en = Input(Bool())
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
    val vpu2_en = Input(Bool())
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

    // WB owns the 128b programming payload. Selection is latched on start.
    val lut_program_start = Input(Bool())
    val lut_write = Input(UInt(5.W))
    val lut_in_ready = Output(Bool())
    val lut_prog_busy = Output(Bool())
    val lut_prog_done = Output(Bool())
    val lut_prog_alert = Output(Bool())

    val vb_out = Output(Vec(numLines, UInt(8.W)))
    val nb_out = Output(Vec(numLines, UInt(8.W)))
    val compute_out = Output(Vec(numLines, UInt(8.W)))
    val vb_out_valid = Output(Bool())
    val nb_out_valid = Output(Bool())
    val compute_out_valid = Output(Bool())

    val soft_reset = Input(Bool())
    val stall = Input(Bool())
    val lut_ready = Output(Bool())
    val control_alert = Output(Bool())
    val fatal_alert = Output(Bool())
  })

  val tpu = Module(new TPU_top(numRows = numLines, numCols = numLines))
  val vpu1 = Module(new VPU_Stage1(numLines = numLines, writeBits = LUT_WRITE_BITS))
  val vpu2 = Module(new VPU_Stage2(numLines = numLines, writeBits = LUT_WRITE_BITS))
  val ubTransposer = Module(new PingPongTransposer(numLines, 8))
  val wbTransposer = Module(new PingPongTransposer(numLines, 8))
  val outTransposer = Module(new PingPongTransposer(numLines, 8))
  val zeroPadder = Module(new ZeroPadder(numLines))
  val compactor = Module(new Compactor(numLines))
  val lutProgrammer = Module(new LutProgrammingController())

  // Configuration tasks require a drained compute path with all three compute
  // enables deasserted. WB is exclusively owned from start through final ACK.
  val programActive = io.lut_program_start || lutProgrammer.io.busy
  val computeSelected = io.tpu_en || io.vpu1_en || io.vpu2_en
  val programConflict = computeSelected || vpu1.io.busy || zeroPadder.io.busy ||
    compactor.io.busy || io.ub_valid || io.vb_valid || io.nb_valid ||
    io.ub_stream_en || io.wb_stream_en || io.comp_stream_en ||
    io.tpu_input_tile_start || io.tpu_clear_w
  lutProgrammer.io.start := io.lut_program_start && !programConflict
  // A violation during an active task backpressures WB without duplicating it.
  lutProgrammer.io.in_valid := io.wb_valid && !programConflict
  lutProgrammer.io.in_data := io.wb_in.asUInt
  lutProgrammer.io.lut_write := io.lut_write
  lutProgrammer.io.stall := io.stall
  lutProgrammer.io.soft_reset := io.soft_reset
  io.lut_in_ready := lutProgrammer.io.in_ready && !programConflict
  io.lut_prog_busy := lutProgrammer.io.busy
  io.lut_prog_done := lutProgrammer.io.done
  io.lut_prog_alert := lutProgrammer.io.alert ||
    (programActive && programConflict && !io.stall && !io.soft_reset)
  val computeInputAllowed = !programActive && !io.soft_reset

  zeroPadder.io.in_vec := io.ub_in
  zeroPadder.io.in_valid := io.ub_valid && computeInputAllowed
  zeroPadder.io.compact_en := io.vector_compact_in
  zeroPadder.io.stall := io.stall
  zeroPadder.io.soft_reset := io.soft_reset
  io.zero_pad_busy := zeroPadder.io.busy

  for (transposer <- Seq(ubTransposer, wbTransposer, outTransposer)) {
    transposer.io.stall := io.stall
  }
  // PingPongTransposer's transpose=0 is buffered row read, not a stream
  // bypass. Route around the entire unit and disable both ports when bypassed.
  ubTransposer.io.in_vec := zeroPadder.io.out_vec
  ubTransposer.io.in_valid := zeroPadder.io.out_valid && io.ub_transpose_en && computeInputAllowed
  ubTransposer.io.transpose := io.ub_transpose_en
  ubTransposer.io.out_stream_en := io.ub_stream_en && io.ub_transpose_en && computeInputAllowed
  wbTransposer.io.in_vec := io.wb_in
  wbTransposer.io.in_valid := io.wb_valid && io.wb_transpose_en && computeInputAllowed
  wbTransposer.io.transpose := io.wb_transpose_en
  wbTransposer.io.out_stream_en := io.wb_stream_en && io.wb_transpose_en && computeInputAllowed
  io.ub_trans_ready := !io.ub_transpose_en || ubTransposer.io.ready
  io.wb_trans_ready := !io.wb_transpose_en || wbTransposer.io.ready

  val ubData = Mux(io.ub_transpose_en, ubTransposer.io.out_vec, zeroPadder.io.out_vec)
  val wbData = Mux(io.wb_transpose_en, wbTransposer.io.out_vec, io.wb_in)
  val ubStreamValid = computeInputAllowed && !io.stall &&
    Mux(io.ub_transpose_en, ubTransposer.io.out_valid, zeroPadder.io.out_valid)
  val wbStreamValid = computeInputAllowed && !io.stall &&
    Mux(io.wb_transpose_en, wbTransposer.io.out_valid, io.wb_valid)

  tpu.io.in_input := VecInit(ubData.map(_.asSInt))
  tpu.io.input_valid := ubStreamValid && io.tpu_en
  // Tile-start is supplied in the post-TR1 stream domain by Central Control.
  tpu.io.input_tile_start := io.tpu_input_tile_start && tpu.io.input_valid
  tpu.io.in_weight := VecInit(wbData.map(_.asSInt))
  tpu.io.weight_valid := wbStreamValid && io.tpu_en
  tpu.io.clear_W := io.tpu_clear_w && io.tpu_en && computeInputAllowed
  tpu.io.intermNum := io.tpu_interm_num
  tpu.io.outColNum := io.tpu_out_col_num
  tpu.io.stall := io.stall
  io.tpu_fusion_req := tpu.io.fusion_req

  // Latch the topology and destination at the operation boundary. A requested
  // change while busy is reported and the in-flight operation keeps its route.
  val savedInputMode = RegInit(VPU1InputMode.TPU)
  val savedOutputRoute = RegInit(VPU1OutputRoute.BLOCK)
  when(!vpu1.io.busy && !io.stall) {
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
  vpu1.io.tpu_valid := VecInit(tpu.io.out_valid.map(_ && io.vpu1_en && computeInputAllowed))
  vpu1.io.tpu_row_change_update := tpu.io.out_meta.row_change_update
  vpu1.io.direct_a := VecInit(ubData.map(_.asSInt))
  vpu1.io.direct_b := VecInit(wbData.map(_.asSInt))
  vpu1.io.direct_a_valid := ubStreamValid && io.vpu1_en
  vpu1.io.direct_b_valid := wbStreamValid && io.vpu1_en
  vpu1.io.vb_operand := VecInit(io.vb_in.map(_.asSInt))
  vpu1.io.vb_operand_valid := io.vb_valid
  vpu1.io.input_mode := effectiveInputMode
  vpu1.io.param_mode := Mux(io.vpu1_en && computeInputAllowed,
    io.vpu1_param_mode, QuantParamMode.PER_MATRIX)
  vpu1.io.matrix_param := io.matrix_quant_param
  vpu1.io.act_mask := io.vpu1_act_mask
  vpu1.io.fusion_second := io.vpu1_fusion_second
  vpu1.io.alu_mode := io.vpu1_alu_mode
  vpu1.io.out_shift := io.vpu1_out_shift
  vpu1.io.stall := io.stall
  vpu1.io.soft_reset := io.soft_reset
  vpu1.io.qparam_line_in := io.qb_data
  vpu1.io.qparam_line_valid := io.qb_valid
  vpu1.io.quant_lut_wr_en := lutProgrammer.io.act_wr_en
  vpu1.io.quant_lut_wr_addr := lutProgrammer.io.act_wr_addr
  vpu1.io.quant_lut_wr_data := lutProgrammer.io.act_wr_data
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
    vpu2.io.in_valid(lane) := vpu2InputValid && io.vpu2_en && computeInputAllowed
  vpu2.io.row_change_update_in := vpu2RowChange
  vpu2.io.norm_mode := io.vpu2_norm_mode
  vpu2.io.norm_phase := io.vpu2_norm_phase
  vpu2.io.norm_layout := io.vpu2_norm_layout
  vpu2.io.logical_vector_length := io.norm_logical_vector_length
  vpu2.io.inv_vector_length := io.norm_inv_vector_length
  vpu2.io.epsilon := io.norm_epsilon
  vpu2.io.clr_acc := io.vpu2_clr_acc
  vpu2.io.rope_en := io.vpu2_rope_en && io.vpu2_en && computeInputAllowed
  io.vpu2_rope_active := vpu2.io.rope_active
  vpu2.io.stall := io.stall
  vpu2.io.soft_reset := io.soft_reset
  vpu2.io.position_init := io.rope_position_init
  vpu2.io.base_m_in := io.rope_base_m
  vpu2.io.freq_block_in := io.fb_data
  vpu2.io.freq_block_valid := io.fb_valid
  vpu2.io.norm_lut_wr_en := lutProgrammer.io.exp_wr_en || lutProgrammer.io.scale_wr_en
  vpu2.io.norm_lut_is_exp := lutProgrammer.io.exp_wr_en
  vpu2.io.norm_lut_wr_addr := lutProgrammer.io.norm_wr_addr
  vpu2.io.norm_lut_wr_data := lutProgrammer.io.wide_wr_data
  vpu2.io.rope_cos_wr_en := lutProgrammer.io.cos_wr_en
  vpu2.io.rope_sin_wr_en := lutProgrammer.io.sin_wr_en
  vpu2.io.rope_lut_wr_addr := lutProgrammer.io.rope_wr_addr
  vpu2.io.rope_lut_wr_data := lutProgrammer.io.wide_wr_data
  io.fb_req := vpu2.io.freq_req_block
  io.nb_req := vpu2.io.phase2_req
  io.nb_out := vpu2.io.out_norm_p1
  io.nb_out_valid := vpu2.io.out_norm_p1_valid(0)

  val preTransposeData =
    Mux(routeToCompute, vpu1.io.out_vec, vpu2.io.out_rope)
  val preTransposeValid =
    Mux(routeToCompute, vpu1ToComputeValid, vpu2.io.out_rope_valid(0))
  outTransposer.io.in_vec := preTransposeData
  outTransposer.io.in_valid := preTransposeValid && io.output_transpose_en && computeInputAllowed
  outTransposer.io.transpose := io.output_transpose_en
  outTransposer.io.out_stream_en := io.comp_stream_en && io.output_transpose_en && computeInputAllowed
  compactor.io.in_vec := Mux(io.output_transpose_en, outTransposer.io.out_vec, preTransposeData)
  compactor.io.in_valid := computeInputAllowed &&
    Mux(io.output_transpose_en, outTransposer.io.out_valid, preTransposeValid)
  compactor.io.compact_en := io.vector_compact_out
  compactor.io.stall := io.stall
  compactor.io.soft_reset := io.soft_reset
  io.compute_out := compactor.io.out_vec
  io.compute_out_valid := compactor.io.out_valid
  io.compactor_busy := compactor.io.busy
  io.comp_trans_ready := !io.output_transpose_en || outTransposer.io.ready

  io.lut_ready := !programActive && vpu1.io.lut_ready && vpu2.io.lut_ready
  val transposerAlert =
    ubTransposer.io.trans_alert || wbTransposer.io.trans_alert ||
      outTransposer.io.trans_alert
  val illegalCompactTranspose = io.vector_compact_out && io.output_transpose_en
  val finalSourceCollision = vpu1ToComputeValid && vpu2.io.out_rope_valid(0)
  io.control_alert := io.lut_prog_alert || vpu1ControlAlert ||
    illegalCompactTranspose || finalSourceCollision || io.vpu2_input_sel === 3.U
  io.fatal_alert :=
    tpu.io.fatal_alert || vpu1.io.fatal_alert || vpu2.io.fatal_alert ||
      transposerAlert || io.control_alert || zeroPadder.io.sync_alert || compactor.io.sync_alert
}
