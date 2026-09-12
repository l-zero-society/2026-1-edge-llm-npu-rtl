// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOMPUTEUNIT_H_
#define VERILATED_VCOMPUTEUNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VComputeUnit__Syms;
class VComputeUnit___024root;
class VComputeUnit_Accum_buffer;
class VComputeUnit_QuantActCore;
class VComputeUnit_RopePairCore;
class VComputeUnit_TransposerUnit;
class VComputeUnit_Universal_Wide_LUT_16;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VComputeUnit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VComputeUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_ub_in_0,7,0);
    VL_IN8(&io_ub_in_1,7,0);
    VL_IN8(&io_ub_in_2,7,0);
    VL_IN8(&io_ub_in_3,7,0);
    VL_IN8(&io_ub_in_4,7,0);
    VL_IN8(&io_ub_in_5,7,0);
    VL_IN8(&io_ub_in_6,7,0);
    VL_IN8(&io_ub_in_7,7,0);
    VL_IN8(&io_ub_in_8,7,0);
    VL_IN8(&io_ub_in_9,7,0);
    VL_IN8(&io_ub_in_10,7,0);
    VL_IN8(&io_ub_in_11,7,0);
    VL_IN8(&io_ub_in_12,7,0);
    VL_IN8(&io_ub_in_13,7,0);
    VL_IN8(&io_ub_in_14,7,0);
    VL_IN8(&io_ub_in_15,7,0);
    VL_IN8(&io_wb_in_0,7,0);
    VL_IN8(&io_wb_in_1,7,0);
    VL_IN8(&io_wb_in_2,7,0);
    VL_IN8(&io_wb_in_3,7,0);
    VL_IN8(&io_wb_in_4,7,0);
    VL_IN8(&io_wb_in_5,7,0);
    VL_IN8(&io_wb_in_6,7,0);
    VL_IN8(&io_wb_in_7,7,0);
    VL_IN8(&io_wb_in_8,7,0);
    VL_IN8(&io_wb_in_9,7,0);
    VL_IN8(&io_wb_in_10,7,0);
    VL_IN8(&io_wb_in_11,7,0);
    VL_IN8(&io_wb_in_12,7,0);
    VL_IN8(&io_wb_in_13,7,0);
    VL_IN8(&io_wb_in_14,7,0);
    VL_IN8(&io_wb_in_15,7,0);
    VL_IN8(&io_vb_in_0,7,0);
    VL_IN8(&io_vb_in_1,7,0);
    VL_IN8(&io_vb_in_2,7,0);
    VL_IN8(&io_vb_in_3,7,0);
    VL_IN8(&io_vb_in_4,7,0);
    VL_IN8(&io_vb_in_5,7,0);
    VL_IN8(&io_vb_in_6,7,0);
    VL_IN8(&io_vb_in_7,7,0);
    VL_IN8(&io_vb_in_8,7,0);
    VL_IN8(&io_vb_in_9,7,0);
    VL_IN8(&io_vb_in_10,7,0);
    VL_IN8(&io_vb_in_11,7,0);
    VL_IN8(&io_vb_in_12,7,0);
    VL_IN8(&io_vb_in_13,7,0);
    VL_IN8(&io_vb_in_14,7,0);
    VL_IN8(&io_vb_in_15,7,0);
    VL_IN8(&io_nb_in_0,7,0);
    VL_IN8(&io_nb_in_1,7,0);
    VL_IN8(&io_nb_in_2,7,0);
    VL_IN8(&io_nb_in_3,7,0);
    VL_IN8(&io_nb_in_4,7,0);
    VL_IN8(&io_nb_in_5,7,0);
    VL_IN8(&io_nb_in_6,7,0);
    VL_IN8(&io_nb_in_7,7,0);
    VL_IN8(&io_nb_in_8,7,0);
    VL_IN8(&io_nb_in_9,7,0);
    VL_IN8(&io_nb_in_10,7,0);
    VL_IN8(&io_nb_in_11,7,0);
    VL_IN8(&io_nb_in_12,7,0);
    VL_IN8(&io_nb_in_13,7,0);
    VL_IN8(&io_nb_in_14,7,0);
    VL_IN8(&io_nb_in_15,7,0);
    VL_IN8(&io_ub_valid,0,0);
    VL_IN8(&io_wb_valid,0,0);
    VL_IN8(&io_vb_valid,0,0);
    VL_IN8(&io_nb_valid,0,0);
    VL_IN8(&io_ub_transpose_en,0,0);
    VL_IN8(&io_wb_transpose_en,0,0);
    VL_IN8(&io_ub_stream_en,0,0);
    VL_IN8(&io_wb_stream_en,0,0);
    VL_IN8(&io_comp_stream_en,0,0);
    VL_IN8(&io_output_transpose_en,0,0);
    VL_IN8(&io_vector_compact_in,0,0);
    VL_IN8(&io_vector_compact_out,0,0);
    VL_OUT8(&io_zero_pad_busy,0,0);
    VL_OUT8(&io_compactor_busy,0,0);
    VL_OUT8(&io_ub_trans_ready,0,0);
    VL_OUT8(&io_wb_trans_ready,0,0);
    VL_OUT8(&io_comp_trans_ready,0,0);
    VL_IN8(&io_tpu_en,0,0);
    VL_IN8(&io_tpu_input_tile_start,0,0);
    VL_IN8(&io_tpu_clear_w,0,0);
    VL_OUT8(&io_tpu_fusion_req,0,0);
    VL_IN8(&io_vpu1_en,0,0);
    VL_IN8(&io_vpu1_input_mode,0,0);
    VL_IN8(&io_vpu1_output_route,1,0);
    VL_IN8(&io_vpu1_param_mode,0,0);
    VL_IN8(&io_vpu1_act_mask,1,0);
    VL_IN8(&io_vpu1_fusion_second,0,0);
    VL_IN8(&io_vpu1_alu_mode,1,0);
    VL_IN8(&io_vpu1_out_shift,4,0);
    VL_IN8(&io_direct_row_change_update,0,0);
    VL_OUT8(&io_vpu1_busy,0,0);
    VL_OUT8(&io_vb_req,0,0);
    VL_IN8(&io_qb_valid,0,0);
    VL_OUT8(&io_qb_req,0,0);
    VL_IN8(&io_vpu2_en,0,0);
    VL_IN8(&io_vpu2_input_sel,1,0);
    VL_IN8(&io_vpu2_norm_mode,1,0);
    VL_IN8(&io_vpu2_norm_phase,0,0);
    VL_IN8(&io_vpu2_norm_layout,0,0);
    VL_IN8(&io_vpu2_clr_acc,0,0);
    VL_IN8(&io_vpu2_rope_en,0,0);
    VL_OUT8(&io_vpu2_rope_active,0,0);
    VL_OUT8(&io_nb_req,0,0);
    VL_IN8(&io_rope_position_init,0,0);
    VL_IN8(&io_fb_valid,0,0);
    VL_OUT8(&io_fb_req,0,0);
    VL_IN8(&io_lut_program_start,0,0);
    VL_IN8(&io_lut_write,4,0);
    VL_OUT8(&io_lut_in_ready,0,0);
    VL_OUT8(&io_lut_prog_busy,0,0);
    VL_OUT8(&io_lut_prog_done,0,0);
    VL_OUT8(&io_lut_prog_alert,0,0);
    VL_OUT8(&io_vb_out_0,7,0);
    VL_OUT8(&io_vb_out_1,7,0);
    VL_OUT8(&io_vb_out_2,7,0);
    VL_OUT8(&io_vb_out_3,7,0);
    VL_OUT8(&io_vb_out_4,7,0);
    VL_OUT8(&io_vb_out_5,7,0);
    VL_OUT8(&io_vb_out_6,7,0);
    VL_OUT8(&io_vb_out_7,7,0);
    VL_OUT8(&io_vb_out_8,7,0);
    VL_OUT8(&io_vb_out_9,7,0);
    VL_OUT8(&io_vb_out_10,7,0);
    VL_OUT8(&io_vb_out_11,7,0);
    VL_OUT8(&io_vb_out_12,7,0);
    VL_OUT8(&io_vb_out_13,7,0);
    VL_OUT8(&io_vb_out_14,7,0);
    VL_OUT8(&io_vb_out_15,7,0);
    VL_OUT8(&io_nb_out_0,7,0);
    VL_OUT8(&io_nb_out_1,7,0);
    VL_OUT8(&io_nb_out_2,7,0);
    VL_OUT8(&io_nb_out_3,7,0);
    VL_OUT8(&io_nb_out_4,7,0);
    VL_OUT8(&io_nb_out_5,7,0);
    VL_OUT8(&io_nb_out_6,7,0);
    VL_OUT8(&io_nb_out_7,7,0);
    VL_OUT8(&io_nb_out_8,7,0);
    VL_OUT8(&io_nb_out_9,7,0);
    VL_OUT8(&io_nb_out_10,7,0);
    VL_OUT8(&io_nb_out_11,7,0);
    VL_OUT8(&io_nb_out_12,7,0);
    VL_OUT8(&io_nb_out_13,7,0);
    VL_OUT8(&io_nb_out_14,7,0);
    VL_OUT8(&io_nb_out_15,7,0);
    VL_OUT8(&io_compute_out_0,7,0);
    VL_OUT8(&io_compute_out_1,7,0);
    VL_OUT8(&io_compute_out_2,7,0);
    VL_OUT8(&io_compute_out_3,7,0);
    VL_OUT8(&io_compute_out_4,7,0);
    VL_OUT8(&io_compute_out_5,7,0);
    VL_OUT8(&io_compute_out_6,7,0);
    VL_OUT8(&io_compute_out_7,7,0);
    VL_OUT8(&io_compute_out_8,7,0);
    VL_OUT8(&io_compute_out_9,7,0);
    VL_OUT8(&io_compute_out_10,7,0);
    VL_OUT8(&io_compute_out_11,7,0);
    VL_OUT8(&io_compute_out_12,7,0);
    VL_OUT8(&io_compute_out_13,7,0);
    VL_OUT8(&io_compute_out_14,7,0);
    VL_OUT8(&io_compute_out_15,7,0);
    VL_OUT8(&io_vb_out_valid,0,0);
    VL_OUT8(&io_nb_out_valid,0,0);
    VL_OUT8(&io_compute_out_valid,0,0);
    VL_IN8(&io_soft_reset,0,0);
    VL_IN8(&io_stall,0,0);
    VL_OUT8(&io_lut_ready,0,0);
    VL_OUT8(&io_control_alert,0,0);
    VL_OUT8(&io_fatal_alert,0,0);
    VL_IN16(&io_fb_data_0,15,0);
    VL_IN16(&io_fb_data_1,15,0);
    VL_IN16(&io_fb_data_2,15,0);
    VL_IN16(&io_fb_data_3,15,0);
    VL_IN16(&io_fb_data_4,15,0);
    VL_IN16(&io_fb_data_5,15,0);
    VL_IN16(&io_fb_data_6,15,0);
    VL_IN16(&io_fb_data_7,15,0);
    VL_IN16(&io_fb_data_8,15,0);
    VL_IN16(&io_fb_data_9,15,0);
    VL_IN16(&io_fb_data_10,15,0);
    VL_IN16(&io_fb_data_11,15,0);
    VL_IN16(&io_fb_data_12,15,0);
    VL_IN16(&io_fb_data_13,15,0);
    VL_IN16(&io_fb_data_14,15,0);
    VL_IN16(&io_fb_data_15,15,0);
    VL_IN(&io_tpu_interm_num,31,0);
    VL_IN(&io_tpu_out_col_num,31,0);
    VL_IN(&io_matrix_quant_param,31,0);
    VL_IN(&io_qb_data_0,31,0);
    VL_IN(&io_qb_data_1,31,0);
    VL_IN(&io_qb_data_2,31,0);
    VL_IN(&io_qb_data_3,31,0);
    VL_IN(&io_qb_data_4,31,0);
    VL_IN(&io_qb_data_5,31,0);
    VL_IN(&io_qb_data_6,31,0);
    VL_IN(&io_qb_data_7,31,0);
    VL_IN(&io_qb_data_8,31,0);
    VL_IN(&io_qb_data_9,31,0);
    VL_IN(&io_qb_data_10,31,0);
    VL_IN(&io_qb_data_11,31,0);
    VL_IN(&io_qb_data_12,31,0);
    VL_IN(&io_qb_data_13,31,0);
    VL_IN(&io_qb_data_14,31,0);
    VL_IN(&io_qb_data_15,31,0);
    VL_IN(&io_norm_logical_vector_length,31,0);
    VL_IN(&io_norm_inv_vector_length,23,0);
    VL_IN(&io_norm_epsilon,31,0);
    VL_IN(&io_rope_base_m,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_1;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_2;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_3;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_4;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_5;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_6;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_7;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_8;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_9;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_10;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_11;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_12;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_13;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_14;
    VComputeUnit_Accum_buffer* const __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_15;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_1;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_2;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_3;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_4;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_5;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_6;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_7;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_8;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_9;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_10;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_11;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_12;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_13;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_14;
    VComputeUnit_QuantActCore* const __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_15;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14;
    VComputeUnit_Universal_Wide_LUT_16* const __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6;
    VComputeUnit_RopePairCore* const __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__ubTransposer__DOT__ping;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__ubTransposer__DOT__pong;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__wbTransposer__DOT__ping;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__wbTransposer__DOT__pong;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__outTransposer__DOT__ping;
    VComputeUnit_TransposerUnit* const __PVT__ComputeUnit__DOT__outTransposer__DOT__pong;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VComputeUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VComputeUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VComputeUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VComputeUnit();
  private:
    VL_UNCOPYABLE(VComputeUnit);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
