package npu.top

import chisel3._
import chisel3.util._
import npu.core._

// Production VPU1 with the two fixed data paths:
// TPU    : INT32 -> QuantAct -> INT8 -> GPALU(+VB) -> INT8
// DIRECT : UB/WB INT8 -> forced ADD INT10 -> QuantAct LUT -> INT8
class VPU_Stage1(
  val numLines: Int = 16,
  val writeBits: Int = 128,
  val quantIndexBits: Int = 10
) extends Module {
  require(numLines == 16)

  private val lutWords = writeBits / 8
  private val lutAddrBits = log2Ceil((1 << quantIndexBits) / lutWords)

  val io = IO(new Bundle {
    val tpu_in = Input(Vec(numLines, SInt(32.W)))
    val tpu_valid = Input(Vec(numLines, Bool()))
    val tpu_row_change_update = Input(Bool())

    val direct_a = Input(Vec(numLines, SInt(8.W)))
    val direct_b = Input(Vec(numLines, SInt(8.W)))
    val direct_a_valid = Input(Bool())
    val direct_b_valid = Input(Bool())

    // Synchronous VB response for the request issued by vb_read_req.
    val vb_operand = Input(Vec(numLines, SInt(8.W)))
    val vb_operand_valid = Input(Bool())
    val vb_read_req = Output(Bool())

    val input_mode = Input(UInt(1.W))
    val param_mode = Input(UInt(1.W))
    val matrix_param = Input(UInt(QuantParamFormat.Bits.W))
    val act_mask = Input(UInt(2.W))
    val fusion_second = Input(Bool())
    val alu_mode = Input(UInt(2.W))
    val out_shift = Input(UInt(5.W))
    val stall = Input(Bool())
    val soft_reset = Input(Bool())

    val qparam_req_line = Output(Bool())
    val qparam_line_in =
      Input(Vec(numLines, UInt(QuantParamFormat.Bits.W)))
    val qparam_line_valid = Input(Bool())

    val quant_lut_wr_en = Input(Bool())
    val quant_lut_wr_addr = Input(UInt(lutAddrBits.W))
    val quant_lut_wr_data = Input(Vec(lutWords, UInt(8.W)))

    val out_vec = Output(Vec(numLines, UInt(8.W)))
    val out_valid = Output(Vec(numLines, Bool()))
    val out_row_change_update = Output(Bool())
    val out_lookahead = Output(Bool())
    val busy = Output(Bool())
    val prefetch_ready = Output(Bool())
    val lut_ready = Output(Bool())
    val fatal_alert = Output(Bool())
  })

  val quant = Module(new QuantActUnit(
    numLines = numLines,
    writeBits = writeBits,
    indexBits = quantIndexBits
  ))
  val gpalu = Module(new GPALUUnit(numLines = numLines))
  val direct = io.input_mode === VPU1InputMode.DIRECT

  quant.io.in_tpu := io.tpu_in
  quant.io.in_direct := gpalu.io.out_direct
  quant.io.input_mode := io.input_mode
  quant.io.param_mode := io.param_mode
  quant.io.matrix_param := io.matrix_param
  quant.io.act_mask := io.act_mask
  quant.io.fusion_second := io.fusion_second
  quant.io.stall := io.stall
  quant.io.soft_reset := io.soft_reset
  quant.io.qparam_line_in := io.qparam_line_in
  quant.io.qparam_line_valid := io.qparam_line_valid
  quant.io.lut_wr_en := io.quant_lut_wr_en
  quant.io.lut_wr_addr := io.quant_lut_wr_addr
  quant.io.lut_wr_data := io.quant_lut_wr_data

  gpalu.io.input_mode := io.input_mode
  gpalu.io.alu_mode := io.alu_mode
  gpalu.io.out_shift := io.out_shift
  gpalu.io.stall := io.stall

  for (lane <- 0 until numLines) {
    quant.io.in_valid(lane) :=
      Mux(direct, gpalu.io.out_direct_valid(lane), io.tpu_valid(lane))
    gpalu.io.in_vec_a(lane) :=
      Mux(direct, io.direct_a(lane), quant.io.out_vec(lane).asSInt)
    gpalu.io.in_vec_b(lane) :=
      Mux(direct, io.direct_b(lane), io.vb_operand(lane))
    gpalu.io.in_valid(lane) := Mux(
      direct,
      io.direct_a_valid && io.direct_b_valid,
      quant.io.out_valid(lane) &&
        (io.alu_mode === GPALUMode.BYPASS || io.vb_operand_valid)
    )
    io.out_vec(lane) :=
      Mux(direct, quant.io.out_vec(lane), gpalu.io.out_tpu(lane).asUInt)
    io.out_valid(lane) :=
      Mux(direct, quant.io.out_valid(lane), gpalu.io.out_tpu_valid(lane))
  }

  io.out_lookahead := quant.io.out_lookahead(0)
  io.vb_read_req :=
    !direct && io.alu_mode =/= GPALUMode.BYPASS && io.out_lookahead

  // Both fixed paths have seven enabled edges of latency. Carry TPU position
  // metadata through the same global-stall domain so it remains data-aligned.
  val metaPipe = RegInit(VecInit(Seq.fill(7)(false.B)))
  when(!io.stall) {
    metaPipe(0) :=
      !direct && io.tpu_valid.asUInt.andR && io.tpu_row_change_update
    for (stage <- 1 until 7) metaPipe(stage) := metaPipe(stage - 1)
  }
  io.out_row_change_update := io.out_valid(0) && metaPipe(6)

  io.qparam_req_line := quant.io.qparam_req_line
  io.busy := quant.io.busy || gpalu.io.busy
  io.prefetch_ready := quant.io.prefetch_ready
  io.lut_ready := quant.io.lut_ready
  val missingVbResponse =
    !direct && io.alu_mode =/= GPALUMode.BYPASS &&
    quant.io.out_valid(0) && !io.vb_operand_valid
  io.fatal_alert := quant.io.sync_alert || gpalu.io.alu_alert || missingVbResponse
}

// Production VPU2. The Normalizer keeps one row-change metadata bit per
// physical phase-1 beat and emits it with the matching phase-2 output beat.
class VPU_Stage2(
  val numLines: Int = 16,
  val vectorSize: Int = 4096,
  val writeBits: Int = 128,
  val normIndexBits: Int = 8,
  val ropeIndexBits: Int = 10
) extends Module {
  require(numLines == 16)

  private val lutWords = writeBits / 16
  private val normLutAddrBits = log2Ceil((1 << normIndexBits) / lutWords)
  private val ropeLutAddrBits = log2Ceil((1 << ropeIndexBits) / lutWords)

  val io = IO(new Bundle {
    val in_vec = Input(Vec(numLines, UInt(8.W)))
    val in_valid = Input(Vec(numLines, Bool()))
    val row_change_update_in = Input(Bool())

    val norm_mode = Input(UInt(2.W))
    val norm_phase = Input(Bool())
    val norm_layout = Input(UInt(1.W))
    val logical_vector_length = Input(UInt(32.W))
    val inv_vector_length = Input(UInt(24.W))
    val epsilon = Input(UInt(32.W))
    val clr_acc = Input(Bool())
    val rope_en = Input(Bool())
    val stall = Input(Bool())
    val soft_reset = Input(Bool())

    val position_init = Input(Bool())
    val base_m_in = Input(UInt(32.W))
    val freq_req_block = Output(Bool())
    val freq_block_in = Input(Vec(16, UInt(16.W)))
    val freq_block_valid = Input(Bool())

    val norm_lut_wr_en = Input(Bool())
    val norm_lut_is_exp = Input(Bool())
    val norm_lut_wr_addr = Input(UInt(normLutAddrBits.W))
    val norm_lut_wr_data = Input(Vec(lutWords, UInt(16.W)))
    val rope_cos_wr_en = Input(Bool())
    val rope_sin_wr_en = Input(Bool())
    val rope_lut_wr_addr = Input(UInt(ropeLutAddrBits.W))
    val rope_lut_wr_data = Input(Vec(lutWords, UInt(16.W)))

    val out_norm_p1 = Output(Vec(numLines, UInt(8.W)))
    val out_norm_p1_valid = Output(Vec(numLines, Bool()))
    val phase2_req = Output(Bool())
    val out_rope = Output(Vec(numLines, UInt(8.W)))
    val out_rope_valid = Output(Vec(numLines, Bool()))
    val rope_active = Output(Bool())
    val prefetch_ready = Output(Bool())
    val lut_ready = Output(Bool())
    val fatal_alert = Output(Bool())
  })

  val norm = Module(new UniversalNormUnit(
    numLines = numLines,
    writeBits = writeBits,
    vectorSize = vectorSize,
    indexBits = normIndexBits
  ))
  val rope = Module(new RopeUnit(
    numLines = numLines,
    writeBits = writeBits,
    indexBits = ropeIndexBits
  ))

  val isBypass = io.norm_mode === NormMode.BYPASS
  val phase1Selected = !io.norm_phase && !isBypass
  val phase2Selected = io.norm_phase && !isBypass
  // RoPE consumes the ONLINE lane/time layout. DISTRIBUTED normalization
  // presents one vector across the lanes, so that layout always bypasses RoPE.
  val ropeActive = io.rope_en && io.norm_layout === NormLayoutMode.ONLINE

  norm.io.phase1_in_vec := io.in_vec
  norm.io.phase2_in_vec := io.in_vec
  for (lane <- 0 until numLines) {
    norm.io.phase1_valid_vec(lane) := io.in_valid(lane) && phase1Selected
    norm.io.phase2_valid_vec(lane) := io.in_valid(lane) && phase2Selected
  }
  norm.io.phase1_row_change_update_in := io.row_change_update_in
  norm.io.mode_sel := io.norm_mode
  norm.io.layout_mode := io.norm_layout
  norm.io.logical_vector_length := io.logical_vector_length
  norm.io.inv_vector_length := io.inv_vector_length
  norm.io.epsilon := io.epsilon
  norm.io.clr_acc := io.clr_acc
  norm.io.stall := io.stall
  norm.io.lut_wr_en := io.norm_lut_wr_en
  norm.io.lut_is_exp := io.norm_lut_is_exp
  norm.io.lut_wr_addr := io.norm_lut_wr_addr
  norm.io.lut_wr_data := io.norm_lut_wr_data

  val ropeInput = Mux(isBypass, io.in_vec, norm.io.phase2_out_vec)
  val ropeValid = Mux(isBypass, io.in_valid, norm.io.phase2_out_valid_vec)
  rope.io.in_vec := VecInit(ropeInput.map(_.asSInt))
  rope.io.in_valid := ropeValid
  rope.io.row_change_update := Mux(
    isBypass,
    io.row_change_update_in,
    norm.io.phase2_row_change_update_out
  )
  rope.io.rope_en := ropeActive
  rope.io.stall := io.stall
  rope.io.soft_reset := io.soft_reset
  rope.io.position_init := io.position_init
  rope.io.base_m_in := io.base_m_in
  rope.io.freq_block_in := io.freq_block_in
  rope.io.freq_block_valid := io.freq_block_valid
  rope.io.lut_cos_wr_en := io.rope_cos_wr_en
  rope.io.lut_sin_wr_en := io.rope_sin_wr_en
  rope.io.lut_wr_addr := io.rope_lut_wr_addr
  rope.io.lut_wr_data := io.rope_lut_wr_data

  io.out_norm_p1 := norm.io.phase1_out_vec
  io.out_norm_p1_valid := norm.io.phase1_out_valid_vec
  io.phase2_req := norm.io.phase2_req
  for (lane <- 0 until numLines) io.out_rope(lane) := rope.io.out_vec(lane).asUInt
  io.out_rope_valid := rope.io.out_valid
  io.freq_req_block := rope.io.freq_req_block
  io.rope_active := ropeActive
  io.prefetch_ready := rope.io.prefetch_ready
  io.lut_ready := norm.io.lut_ready && rope.io.lut_ready
  io.fatal_alert := norm.io.sync_alert || rope.io.sync_alert
}
