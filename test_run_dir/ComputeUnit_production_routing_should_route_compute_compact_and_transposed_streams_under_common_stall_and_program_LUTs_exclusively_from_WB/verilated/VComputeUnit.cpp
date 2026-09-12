// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VComputeUnit__pch.h"

//============================================================
// Constructors

VComputeUnit::VComputeUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VComputeUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ub_in_0{vlSymsp->TOP.io_ub_in_0}
    , io_ub_in_1{vlSymsp->TOP.io_ub_in_1}
    , io_ub_in_2{vlSymsp->TOP.io_ub_in_2}
    , io_ub_in_3{vlSymsp->TOP.io_ub_in_3}
    , io_ub_in_4{vlSymsp->TOP.io_ub_in_4}
    , io_ub_in_5{vlSymsp->TOP.io_ub_in_5}
    , io_ub_in_6{vlSymsp->TOP.io_ub_in_6}
    , io_ub_in_7{vlSymsp->TOP.io_ub_in_7}
    , io_ub_in_8{vlSymsp->TOP.io_ub_in_8}
    , io_ub_in_9{vlSymsp->TOP.io_ub_in_9}
    , io_ub_in_10{vlSymsp->TOP.io_ub_in_10}
    , io_ub_in_11{vlSymsp->TOP.io_ub_in_11}
    , io_ub_in_12{vlSymsp->TOP.io_ub_in_12}
    , io_ub_in_13{vlSymsp->TOP.io_ub_in_13}
    , io_ub_in_14{vlSymsp->TOP.io_ub_in_14}
    , io_ub_in_15{vlSymsp->TOP.io_ub_in_15}
    , io_wb_in_0{vlSymsp->TOP.io_wb_in_0}
    , io_wb_in_1{vlSymsp->TOP.io_wb_in_1}
    , io_wb_in_2{vlSymsp->TOP.io_wb_in_2}
    , io_wb_in_3{vlSymsp->TOP.io_wb_in_3}
    , io_wb_in_4{vlSymsp->TOP.io_wb_in_4}
    , io_wb_in_5{vlSymsp->TOP.io_wb_in_5}
    , io_wb_in_6{vlSymsp->TOP.io_wb_in_6}
    , io_wb_in_7{vlSymsp->TOP.io_wb_in_7}
    , io_wb_in_8{vlSymsp->TOP.io_wb_in_8}
    , io_wb_in_9{vlSymsp->TOP.io_wb_in_9}
    , io_wb_in_10{vlSymsp->TOP.io_wb_in_10}
    , io_wb_in_11{vlSymsp->TOP.io_wb_in_11}
    , io_wb_in_12{vlSymsp->TOP.io_wb_in_12}
    , io_wb_in_13{vlSymsp->TOP.io_wb_in_13}
    , io_wb_in_14{vlSymsp->TOP.io_wb_in_14}
    , io_wb_in_15{vlSymsp->TOP.io_wb_in_15}
    , io_vb_in_0{vlSymsp->TOP.io_vb_in_0}
    , io_vb_in_1{vlSymsp->TOP.io_vb_in_1}
    , io_vb_in_2{vlSymsp->TOP.io_vb_in_2}
    , io_vb_in_3{vlSymsp->TOP.io_vb_in_3}
    , io_vb_in_4{vlSymsp->TOP.io_vb_in_4}
    , io_vb_in_5{vlSymsp->TOP.io_vb_in_5}
    , io_vb_in_6{vlSymsp->TOP.io_vb_in_6}
    , io_vb_in_7{vlSymsp->TOP.io_vb_in_7}
    , io_vb_in_8{vlSymsp->TOP.io_vb_in_8}
    , io_vb_in_9{vlSymsp->TOP.io_vb_in_9}
    , io_vb_in_10{vlSymsp->TOP.io_vb_in_10}
    , io_vb_in_11{vlSymsp->TOP.io_vb_in_11}
    , io_vb_in_12{vlSymsp->TOP.io_vb_in_12}
    , io_vb_in_13{vlSymsp->TOP.io_vb_in_13}
    , io_vb_in_14{vlSymsp->TOP.io_vb_in_14}
    , io_vb_in_15{vlSymsp->TOP.io_vb_in_15}
    , io_nb_in_0{vlSymsp->TOP.io_nb_in_0}
    , io_nb_in_1{vlSymsp->TOP.io_nb_in_1}
    , io_nb_in_2{vlSymsp->TOP.io_nb_in_2}
    , io_nb_in_3{vlSymsp->TOP.io_nb_in_3}
    , io_nb_in_4{vlSymsp->TOP.io_nb_in_4}
    , io_nb_in_5{vlSymsp->TOP.io_nb_in_5}
    , io_nb_in_6{vlSymsp->TOP.io_nb_in_6}
    , io_nb_in_7{vlSymsp->TOP.io_nb_in_7}
    , io_nb_in_8{vlSymsp->TOP.io_nb_in_8}
    , io_nb_in_9{vlSymsp->TOP.io_nb_in_9}
    , io_nb_in_10{vlSymsp->TOP.io_nb_in_10}
    , io_nb_in_11{vlSymsp->TOP.io_nb_in_11}
    , io_nb_in_12{vlSymsp->TOP.io_nb_in_12}
    , io_nb_in_13{vlSymsp->TOP.io_nb_in_13}
    , io_nb_in_14{vlSymsp->TOP.io_nb_in_14}
    , io_nb_in_15{vlSymsp->TOP.io_nb_in_15}
    , io_ub_valid{vlSymsp->TOP.io_ub_valid}
    , io_wb_valid{vlSymsp->TOP.io_wb_valid}
    , io_vb_valid{vlSymsp->TOP.io_vb_valid}
    , io_nb_valid{vlSymsp->TOP.io_nb_valid}
    , io_ub_transpose_en{vlSymsp->TOP.io_ub_transpose_en}
    , io_wb_transpose_en{vlSymsp->TOP.io_wb_transpose_en}
    , io_ub_stream_en{vlSymsp->TOP.io_ub_stream_en}
    , io_wb_stream_en{vlSymsp->TOP.io_wb_stream_en}
    , io_comp_stream_en{vlSymsp->TOP.io_comp_stream_en}
    , io_output_transpose_en{vlSymsp->TOP.io_output_transpose_en}
    , io_vector_compact_in{vlSymsp->TOP.io_vector_compact_in}
    , io_vector_compact_out{vlSymsp->TOP.io_vector_compact_out}
    , io_zero_pad_busy{vlSymsp->TOP.io_zero_pad_busy}
    , io_compactor_busy{vlSymsp->TOP.io_compactor_busy}
    , io_ub_trans_ready{vlSymsp->TOP.io_ub_trans_ready}
    , io_wb_trans_ready{vlSymsp->TOP.io_wb_trans_ready}
    , io_comp_trans_ready{vlSymsp->TOP.io_comp_trans_ready}
    , io_tpu_en{vlSymsp->TOP.io_tpu_en}
    , io_tpu_input_tile_start{vlSymsp->TOP.io_tpu_input_tile_start}
    , io_tpu_clear_w{vlSymsp->TOP.io_tpu_clear_w}
    , io_tpu_fusion_req{vlSymsp->TOP.io_tpu_fusion_req}
    , io_vpu1_en{vlSymsp->TOP.io_vpu1_en}
    , io_vpu1_input_mode{vlSymsp->TOP.io_vpu1_input_mode}
    , io_vpu1_output_route{vlSymsp->TOP.io_vpu1_output_route}
    , io_vpu1_param_mode{vlSymsp->TOP.io_vpu1_param_mode}
    , io_vpu1_act_mask{vlSymsp->TOP.io_vpu1_act_mask}
    , io_vpu1_fusion_second{vlSymsp->TOP.io_vpu1_fusion_second}
    , io_vpu1_alu_mode{vlSymsp->TOP.io_vpu1_alu_mode}
    , io_vpu1_out_shift{vlSymsp->TOP.io_vpu1_out_shift}
    , io_direct_row_change_update{vlSymsp->TOP.io_direct_row_change_update}
    , io_vpu1_busy{vlSymsp->TOP.io_vpu1_busy}
    , io_vb_req{vlSymsp->TOP.io_vb_req}
    , io_qb_valid{vlSymsp->TOP.io_qb_valid}
    , io_qb_req{vlSymsp->TOP.io_qb_req}
    , io_vpu2_en{vlSymsp->TOP.io_vpu2_en}
    , io_vpu2_input_sel{vlSymsp->TOP.io_vpu2_input_sel}
    , io_vpu2_norm_mode{vlSymsp->TOP.io_vpu2_norm_mode}
    , io_vpu2_norm_phase{vlSymsp->TOP.io_vpu2_norm_phase}
    , io_vpu2_norm_layout{vlSymsp->TOP.io_vpu2_norm_layout}
    , io_vpu2_clr_acc{vlSymsp->TOP.io_vpu2_clr_acc}
    , io_vpu2_rope_en{vlSymsp->TOP.io_vpu2_rope_en}
    , io_vpu2_rope_active{vlSymsp->TOP.io_vpu2_rope_active}
    , io_nb_req{vlSymsp->TOP.io_nb_req}
    , io_rope_position_init{vlSymsp->TOP.io_rope_position_init}
    , io_fb_valid{vlSymsp->TOP.io_fb_valid}
    , io_fb_req{vlSymsp->TOP.io_fb_req}
    , io_lut_program_start{vlSymsp->TOP.io_lut_program_start}
    , io_lut_write{vlSymsp->TOP.io_lut_write}
    , io_lut_in_ready{vlSymsp->TOP.io_lut_in_ready}
    , io_lut_prog_busy{vlSymsp->TOP.io_lut_prog_busy}
    , io_lut_prog_done{vlSymsp->TOP.io_lut_prog_done}
    , io_lut_prog_alert{vlSymsp->TOP.io_lut_prog_alert}
    , io_vb_out_0{vlSymsp->TOP.io_vb_out_0}
    , io_vb_out_1{vlSymsp->TOP.io_vb_out_1}
    , io_vb_out_2{vlSymsp->TOP.io_vb_out_2}
    , io_vb_out_3{vlSymsp->TOP.io_vb_out_3}
    , io_vb_out_4{vlSymsp->TOP.io_vb_out_4}
    , io_vb_out_5{vlSymsp->TOP.io_vb_out_5}
    , io_vb_out_6{vlSymsp->TOP.io_vb_out_6}
    , io_vb_out_7{vlSymsp->TOP.io_vb_out_7}
    , io_vb_out_8{vlSymsp->TOP.io_vb_out_8}
    , io_vb_out_9{vlSymsp->TOP.io_vb_out_9}
    , io_vb_out_10{vlSymsp->TOP.io_vb_out_10}
    , io_vb_out_11{vlSymsp->TOP.io_vb_out_11}
    , io_vb_out_12{vlSymsp->TOP.io_vb_out_12}
    , io_vb_out_13{vlSymsp->TOP.io_vb_out_13}
    , io_vb_out_14{vlSymsp->TOP.io_vb_out_14}
    , io_vb_out_15{vlSymsp->TOP.io_vb_out_15}
    , io_nb_out_0{vlSymsp->TOP.io_nb_out_0}
    , io_nb_out_1{vlSymsp->TOP.io_nb_out_1}
    , io_nb_out_2{vlSymsp->TOP.io_nb_out_2}
    , io_nb_out_3{vlSymsp->TOP.io_nb_out_3}
    , io_nb_out_4{vlSymsp->TOP.io_nb_out_4}
    , io_nb_out_5{vlSymsp->TOP.io_nb_out_5}
    , io_nb_out_6{vlSymsp->TOP.io_nb_out_6}
    , io_nb_out_7{vlSymsp->TOP.io_nb_out_7}
    , io_nb_out_8{vlSymsp->TOP.io_nb_out_8}
    , io_nb_out_9{vlSymsp->TOP.io_nb_out_9}
    , io_nb_out_10{vlSymsp->TOP.io_nb_out_10}
    , io_nb_out_11{vlSymsp->TOP.io_nb_out_11}
    , io_nb_out_12{vlSymsp->TOP.io_nb_out_12}
    , io_nb_out_13{vlSymsp->TOP.io_nb_out_13}
    , io_nb_out_14{vlSymsp->TOP.io_nb_out_14}
    , io_nb_out_15{vlSymsp->TOP.io_nb_out_15}
    , io_compute_out_0{vlSymsp->TOP.io_compute_out_0}
    , io_compute_out_1{vlSymsp->TOP.io_compute_out_1}
    , io_compute_out_2{vlSymsp->TOP.io_compute_out_2}
    , io_compute_out_3{vlSymsp->TOP.io_compute_out_3}
    , io_compute_out_4{vlSymsp->TOP.io_compute_out_4}
    , io_compute_out_5{vlSymsp->TOP.io_compute_out_5}
    , io_compute_out_6{vlSymsp->TOP.io_compute_out_6}
    , io_compute_out_7{vlSymsp->TOP.io_compute_out_7}
    , io_compute_out_8{vlSymsp->TOP.io_compute_out_8}
    , io_compute_out_9{vlSymsp->TOP.io_compute_out_9}
    , io_compute_out_10{vlSymsp->TOP.io_compute_out_10}
    , io_compute_out_11{vlSymsp->TOP.io_compute_out_11}
    , io_compute_out_12{vlSymsp->TOP.io_compute_out_12}
    , io_compute_out_13{vlSymsp->TOP.io_compute_out_13}
    , io_compute_out_14{vlSymsp->TOP.io_compute_out_14}
    , io_compute_out_15{vlSymsp->TOP.io_compute_out_15}
    , io_vb_out_valid{vlSymsp->TOP.io_vb_out_valid}
    , io_nb_out_valid{vlSymsp->TOP.io_nb_out_valid}
    , io_compute_out_valid{vlSymsp->TOP.io_compute_out_valid}
    , io_soft_reset{vlSymsp->TOP.io_soft_reset}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_lut_ready{vlSymsp->TOP.io_lut_ready}
    , io_control_alert{vlSymsp->TOP.io_control_alert}
    , io_fatal_alert{vlSymsp->TOP.io_fatal_alert}
    , io_fb_data_0{vlSymsp->TOP.io_fb_data_0}
    , io_fb_data_1{vlSymsp->TOP.io_fb_data_1}
    , io_fb_data_2{vlSymsp->TOP.io_fb_data_2}
    , io_fb_data_3{vlSymsp->TOP.io_fb_data_3}
    , io_fb_data_4{vlSymsp->TOP.io_fb_data_4}
    , io_fb_data_5{vlSymsp->TOP.io_fb_data_5}
    , io_fb_data_6{vlSymsp->TOP.io_fb_data_6}
    , io_fb_data_7{vlSymsp->TOP.io_fb_data_7}
    , io_fb_data_8{vlSymsp->TOP.io_fb_data_8}
    , io_fb_data_9{vlSymsp->TOP.io_fb_data_9}
    , io_fb_data_10{vlSymsp->TOP.io_fb_data_10}
    , io_fb_data_11{vlSymsp->TOP.io_fb_data_11}
    , io_fb_data_12{vlSymsp->TOP.io_fb_data_12}
    , io_fb_data_13{vlSymsp->TOP.io_fb_data_13}
    , io_fb_data_14{vlSymsp->TOP.io_fb_data_14}
    , io_fb_data_15{vlSymsp->TOP.io_fb_data_15}
    , io_tpu_interm_num{vlSymsp->TOP.io_tpu_interm_num}
    , io_tpu_out_col_num{vlSymsp->TOP.io_tpu_out_col_num}
    , io_matrix_quant_param{vlSymsp->TOP.io_matrix_quant_param}
    , io_qb_data_0{vlSymsp->TOP.io_qb_data_0}
    , io_qb_data_1{vlSymsp->TOP.io_qb_data_1}
    , io_qb_data_2{vlSymsp->TOP.io_qb_data_2}
    , io_qb_data_3{vlSymsp->TOP.io_qb_data_3}
    , io_qb_data_4{vlSymsp->TOP.io_qb_data_4}
    , io_qb_data_5{vlSymsp->TOP.io_qb_data_5}
    , io_qb_data_6{vlSymsp->TOP.io_qb_data_6}
    , io_qb_data_7{vlSymsp->TOP.io_qb_data_7}
    , io_qb_data_8{vlSymsp->TOP.io_qb_data_8}
    , io_qb_data_9{vlSymsp->TOP.io_qb_data_9}
    , io_qb_data_10{vlSymsp->TOP.io_qb_data_10}
    , io_qb_data_11{vlSymsp->TOP.io_qb_data_11}
    , io_qb_data_12{vlSymsp->TOP.io_qb_data_12}
    , io_qb_data_13{vlSymsp->TOP.io_qb_data_13}
    , io_qb_data_14{vlSymsp->TOP.io_qb_data_14}
    , io_qb_data_15{vlSymsp->TOP.io_qb_data_15}
    , io_norm_logical_vector_length{vlSymsp->TOP.io_norm_logical_vector_length}
    , io_norm_inv_vector_length{vlSymsp->TOP.io_norm_inv_vector_length}
    , io_norm_epsilon{vlSymsp->TOP.io_norm_epsilon}
    , io_rope_base_m{vlSymsp->TOP.io_rope_base_m}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_1}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_2}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_3}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_4}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_5}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_6}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_7}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_8}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_9}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_10}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_11}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_12}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_13}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_14}
    , __PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_15}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_1}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_2}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_3}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_4}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_5}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_6}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_7}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_8}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_9}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_10}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_11}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_12}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_13}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_14}
    , __PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_15}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6}
    , __PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7{vlSymsp->TOP.__PVT__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7}
    , __PVT__ComputeUnit__DOT__ubTransposer__DOT__ping{vlSymsp->TOP.__PVT__ComputeUnit__DOT__ubTransposer__DOT__ping}
    , __PVT__ComputeUnit__DOT__ubTransposer__DOT__pong{vlSymsp->TOP.__PVT__ComputeUnit__DOT__ubTransposer__DOT__pong}
    , __PVT__ComputeUnit__DOT__wbTransposer__DOT__ping{vlSymsp->TOP.__PVT__ComputeUnit__DOT__wbTransposer__DOT__ping}
    , __PVT__ComputeUnit__DOT__wbTransposer__DOT__pong{vlSymsp->TOP.__PVT__ComputeUnit__DOT__wbTransposer__DOT__pong}
    , __PVT__ComputeUnit__DOT__outTransposer__DOT__ping{vlSymsp->TOP.__PVT__ComputeUnit__DOT__outTransposer__DOT__ping}
    , __PVT__ComputeUnit__DOT__outTransposer__DOT__pong{vlSymsp->TOP.__PVT__ComputeUnit__DOT__outTransposer__DOT__pong}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VComputeUnit::VComputeUnit(const char* _vcname__)
    : VComputeUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VComputeUnit::~VComputeUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VComputeUnit___024root___eval_debug_assertions(VComputeUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VComputeUnit___024root___eval_static(VComputeUnit___024root* vlSelf);
void VComputeUnit___024root___eval_initial(VComputeUnit___024root* vlSelf);
void VComputeUnit___024root___eval_settle(VComputeUnit___024root* vlSelf);
void VComputeUnit___024root___eval(VComputeUnit___024root* vlSelf);

void VComputeUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComputeUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VComputeUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VComputeUnit___024root___eval_static(&(vlSymsp->TOP));
        VComputeUnit___024root___eval_initial(&(vlSymsp->TOP));
        VComputeUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VComputeUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VComputeUnit::eventsPending() { return false; }

uint64_t VComputeUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VComputeUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VComputeUnit___024root___eval_final(VComputeUnit___024root* vlSelf);

VL_ATTR_COLD void VComputeUnit::final() {
    VComputeUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VComputeUnit::hierName() const { return vlSymsp->name(); }
const char* VComputeUnit::modelName() const { return "VComputeUnit"; }
unsigned VComputeUnit::threads() const { return 1; }
void VComputeUnit::prepareClone() const { contextp()->prepareClone(); }
void VComputeUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VComputeUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VComputeUnit::trace()' called on model that was Verilated without --trace option");
}
