// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUniversalNormUnit__pch.h"

//============================================================
// Constructors

VUniversalNormUnit::VUniversalNormUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VUniversalNormUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_phase1_in_vec_0{vlSymsp->TOP.io_phase1_in_vec_0}
    , io_phase1_in_vec_1{vlSymsp->TOP.io_phase1_in_vec_1}
    , io_phase1_in_vec_2{vlSymsp->TOP.io_phase1_in_vec_2}
    , io_phase1_in_vec_3{vlSymsp->TOP.io_phase1_in_vec_3}
    , io_phase1_in_vec_4{vlSymsp->TOP.io_phase1_in_vec_4}
    , io_phase1_in_vec_5{vlSymsp->TOP.io_phase1_in_vec_5}
    , io_phase1_in_vec_6{vlSymsp->TOP.io_phase1_in_vec_6}
    , io_phase1_in_vec_7{vlSymsp->TOP.io_phase1_in_vec_7}
    , io_phase1_in_vec_8{vlSymsp->TOP.io_phase1_in_vec_8}
    , io_phase1_in_vec_9{vlSymsp->TOP.io_phase1_in_vec_9}
    , io_phase1_in_vec_10{vlSymsp->TOP.io_phase1_in_vec_10}
    , io_phase1_in_vec_11{vlSymsp->TOP.io_phase1_in_vec_11}
    , io_phase1_in_vec_12{vlSymsp->TOP.io_phase1_in_vec_12}
    , io_phase1_in_vec_13{vlSymsp->TOP.io_phase1_in_vec_13}
    , io_phase1_in_vec_14{vlSymsp->TOP.io_phase1_in_vec_14}
    , io_phase1_in_vec_15{vlSymsp->TOP.io_phase1_in_vec_15}
    , io_phase1_valid_vec_0{vlSymsp->TOP.io_phase1_valid_vec_0}
    , io_phase1_valid_vec_1{vlSymsp->TOP.io_phase1_valid_vec_1}
    , io_phase1_valid_vec_2{vlSymsp->TOP.io_phase1_valid_vec_2}
    , io_phase1_valid_vec_3{vlSymsp->TOP.io_phase1_valid_vec_3}
    , io_phase1_valid_vec_4{vlSymsp->TOP.io_phase1_valid_vec_4}
    , io_phase1_valid_vec_5{vlSymsp->TOP.io_phase1_valid_vec_5}
    , io_phase1_valid_vec_6{vlSymsp->TOP.io_phase1_valid_vec_6}
    , io_phase1_valid_vec_7{vlSymsp->TOP.io_phase1_valid_vec_7}
    , io_phase1_valid_vec_8{vlSymsp->TOP.io_phase1_valid_vec_8}
    , io_phase1_valid_vec_9{vlSymsp->TOP.io_phase1_valid_vec_9}
    , io_phase1_valid_vec_10{vlSymsp->TOP.io_phase1_valid_vec_10}
    , io_phase1_valid_vec_11{vlSymsp->TOP.io_phase1_valid_vec_11}
    , io_phase1_valid_vec_12{vlSymsp->TOP.io_phase1_valid_vec_12}
    , io_phase1_valid_vec_13{vlSymsp->TOP.io_phase1_valid_vec_13}
    , io_phase1_valid_vec_14{vlSymsp->TOP.io_phase1_valid_vec_14}
    , io_phase1_valid_vec_15{vlSymsp->TOP.io_phase1_valid_vec_15}
    , io_phase1_row_change_update_in{vlSymsp->TOP.io_phase1_row_change_update_in}
    , io_phase1_out_vec_0{vlSymsp->TOP.io_phase1_out_vec_0}
    , io_phase1_out_vec_1{vlSymsp->TOP.io_phase1_out_vec_1}
    , io_phase1_out_vec_2{vlSymsp->TOP.io_phase1_out_vec_2}
    , io_phase1_out_vec_3{vlSymsp->TOP.io_phase1_out_vec_3}
    , io_phase1_out_vec_4{vlSymsp->TOP.io_phase1_out_vec_4}
    , io_phase1_out_vec_5{vlSymsp->TOP.io_phase1_out_vec_5}
    , io_phase1_out_vec_6{vlSymsp->TOP.io_phase1_out_vec_6}
    , io_phase1_out_vec_7{vlSymsp->TOP.io_phase1_out_vec_7}
    , io_phase1_out_vec_8{vlSymsp->TOP.io_phase1_out_vec_8}
    , io_phase1_out_vec_9{vlSymsp->TOP.io_phase1_out_vec_9}
    , io_phase1_out_vec_10{vlSymsp->TOP.io_phase1_out_vec_10}
    , io_phase1_out_vec_11{vlSymsp->TOP.io_phase1_out_vec_11}
    , io_phase1_out_vec_12{vlSymsp->TOP.io_phase1_out_vec_12}
    , io_phase1_out_vec_13{vlSymsp->TOP.io_phase1_out_vec_13}
    , io_phase1_out_vec_14{vlSymsp->TOP.io_phase1_out_vec_14}
    , io_phase1_out_vec_15{vlSymsp->TOP.io_phase1_out_vec_15}
    , io_phase1_out_valid_vec_0{vlSymsp->TOP.io_phase1_out_valid_vec_0}
    , io_phase1_out_valid_vec_1{vlSymsp->TOP.io_phase1_out_valid_vec_1}
    , io_phase1_out_valid_vec_2{vlSymsp->TOP.io_phase1_out_valid_vec_2}
    , io_phase1_out_valid_vec_3{vlSymsp->TOP.io_phase1_out_valid_vec_3}
    , io_phase1_out_valid_vec_4{vlSymsp->TOP.io_phase1_out_valid_vec_4}
    , io_phase1_out_valid_vec_5{vlSymsp->TOP.io_phase1_out_valid_vec_5}
    , io_phase1_out_valid_vec_6{vlSymsp->TOP.io_phase1_out_valid_vec_6}
    , io_phase1_out_valid_vec_7{vlSymsp->TOP.io_phase1_out_valid_vec_7}
    , io_phase1_out_valid_vec_8{vlSymsp->TOP.io_phase1_out_valid_vec_8}
    , io_phase1_out_valid_vec_9{vlSymsp->TOP.io_phase1_out_valid_vec_9}
    , io_phase1_out_valid_vec_10{vlSymsp->TOP.io_phase1_out_valid_vec_10}
    , io_phase1_out_valid_vec_11{vlSymsp->TOP.io_phase1_out_valid_vec_11}
    , io_phase1_out_valid_vec_12{vlSymsp->TOP.io_phase1_out_valid_vec_12}
    , io_phase1_out_valid_vec_13{vlSymsp->TOP.io_phase1_out_valid_vec_13}
    , io_phase1_out_valid_vec_14{vlSymsp->TOP.io_phase1_out_valid_vec_14}
    , io_phase1_out_valid_vec_15{vlSymsp->TOP.io_phase1_out_valid_vec_15}
    , io_phase2_in_vec_0{vlSymsp->TOP.io_phase2_in_vec_0}
    , io_phase2_in_vec_1{vlSymsp->TOP.io_phase2_in_vec_1}
    , io_phase2_in_vec_2{vlSymsp->TOP.io_phase2_in_vec_2}
    , io_phase2_in_vec_3{vlSymsp->TOP.io_phase2_in_vec_3}
    , io_phase2_in_vec_4{vlSymsp->TOP.io_phase2_in_vec_4}
    , io_phase2_in_vec_5{vlSymsp->TOP.io_phase2_in_vec_5}
    , io_phase2_in_vec_6{vlSymsp->TOP.io_phase2_in_vec_6}
    , io_phase2_in_vec_7{vlSymsp->TOP.io_phase2_in_vec_7}
    , io_phase2_in_vec_8{vlSymsp->TOP.io_phase2_in_vec_8}
    , io_phase2_in_vec_9{vlSymsp->TOP.io_phase2_in_vec_9}
    , io_phase2_in_vec_10{vlSymsp->TOP.io_phase2_in_vec_10}
    , io_phase2_in_vec_11{vlSymsp->TOP.io_phase2_in_vec_11}
    , io_phase2_in_vec_12{vlSymsp->TOP.io_phase2_in_vec_12}
    , io_phase2_in_vec_13{vlSymsp->TOP.io_phase2_in_vec_13}
    , io_phase2_in_vec_14{vlSymsp->TOP.io_phase2_in_vec_14}
    , io_phase2_in_vec_15{vlSymsp->TOP.io_phase2_in_vec_15}
    , io_phase2_valid_vec_0{vlSymsp->TOP.io_phase2_valid_vec_0}
    , io_phase2_valid_vec_1{vlSymsp->TOP.io_phase2_valid_vec_1}
    , io_phase2_valid_vec_2{vlSymsp->TOP.io_phase2_valid_vec_2}
    , io_phase2_valid_vec_3{vlSymsp->TOP.io_phase2_valid_vec_3}
    , io_phase2_valid_vec_4{vlSymsp->TOP.io_phase2_valid_vec_4}
    , io_phase2_valid_vec_5{vlSymsp->TOP.io_phase2_valid_vec_5}
    , io_phase2_valid_vec_6{vlSymsp->TOP.io_phase2_valid_vec_6}
    , io_phase2_valid_vec_7{vlSymsp->TOP.io_phase2_valid_vec_7}
    , io_phase2_valid_vec_8{vlSymsp->TOP.io_phase2_valid_vec_8}
    , io_phase2_valid_vec_9{vlSymsp->TOP.io_phase2_valid_vec_9}
    , io_phase2_valid_vec_10{vlSymsp->TOP.io_phase2_valid_vec_10}
    , io_phase2_valid_vec_11{vlSymsp->TOP.io_phase2_valid_vec_11}
    , io_phase2_valid_vec_12{vlSymsp->TOP.io_phase2_valid_vec_12}
    , io_phase2_valid_vec_13{vlSymsp->TOP.io_phase2_valid_vec_13}
    , io_phase2_valid_vec_14{vlSymsp->TOP.io_phase2_valid_vec_14}
    , io_phase2_valid_vec_15{vlSymsp->TOP.io_phase2_valid_vec_15}
    , io_phase2_out_vec_0{vlSymsp->TOP.io_phase2_out_vec_0}
    , io_phase2_out_vec_1{vlSymsp->TOP.io_phase2_out_vec_1}
    , io_phase2_out_vec_2{vlSymsp->TOP.io_phase2_out_vec_2}
    , io_phase2_out_vec_3{vlSymsp->TOP.io_phase2_out_vec_3}
    , io_phase2_out_vec_4{vlSymsp->TOP.io_phase2_out_vec_4}
    , io_phase2_out_vec_5{vlSymsp->TOP.io_phase2_out_vec_5}
    , io_phase2_out_vec_6{vlSymsp->TOP.io_phase2_out_vec_6}
    , io_phase2_out_vec_7{vlSymsp->TOP.io_phase2_out_vec_7}
    , io_phase2_out_vec_8{vlSymsp->TOP.io_phase2_out_vec_8}
    , io_phase2_out_vec_9{vlSymsp->TOP.io_phase2_out_vec_9}
    , io_phase2_out_vec_10{vlSymsp->TOP.io_phase2_out_vec_10}
    , io_phase2_out_vec_11{vlSymsp->TOP.io_phase2_out_vec_11}
    , io_phase2_out_vec_12{vlSymsp->TOP.io_phase2_out_vec_12}
    , io_phase2_out_vec_13{vlSymsp->TOP.io_phase2_out_vec_13}
    , io_phase2_out_vec_14{vlSymsp->TOP.io_phase2_out_vec_14}
    , io_phase2_out_vec_15{vlSymsp->TOP.io_phase2_out_vec_15}
    , io_phase2_out_valid_vec_0{vlSymsp->TOP.io_phase2_out_valid_vec_0}
    , io_phase2_out_valid_vec_1{vlSymsp->TOP.io_phase2_out_valid_vec_1}
    , io_phase2_out_valid_vec_2{vlSymsp->TOP.io_phase2_out_valid_vec_2}
    , io_phase2_out_valid_vec_3{vlSymsp->TOP.io_phase2_out_valid_vec_3}
    , io_phase2_out_valid_vec_4{vlSymsp->TOP.io_phase2_out_valid_vec_4}
    , io_phase2_out_valid_vec_5{vlSymsp->TOP.io_phase2_out_valid_vec_5}
    , io_phase2_out_valid_vec_6{vlSymsp->TOP.io_phase2_out_valid_vec_6}
    , io_phase2_out_valid_vec_7{vlSymsp->TOP.io_phase2_out_valid_vec_7}
    , io_phase2_out_valid_vec_8{vlSymsp->TOP.io_phase2_out_valid_vec_8}
    , io_phase2_out_valid_vec_9{vlSymsp->TOP.io_phase2_out_valid_vec_9}
    , io_phase2_out_valid_vec_10{vlSymsp->TOP.io_phase2_out_valid_vec_10}
    , io_phase2_out_valid_vec_11{vlSymsp->TOP.io_phase2_out_valid_vec_11}
    , io_phase2_out_valid_vec_12{vlSymsp->TOP.io_phase2_out_valid_vec_12}
    , io_phase2_out_valid_vec_13{vlSymsp->TOP.io_phase2_out_valid_vec_13}
    , io_phase2_out_valid_vec_14{vlSymsp->TOP.io_phase2_out_valid_vec_14}
    , io_phase2_out_valid_vec_15{vlSymsp->TOP.io_phase2_out_valid_vec_15}
    , io_phase2_row_change_update_out{vlSymsp->TOP.io_phase2_row_change_update_out}
    , io_mode_sel{vlSymsp->TOP.io_mode_sel}
    , io_layout_mode{vlSymsp->TOP.io_layout_mode}
    , io_clr_acc{vlSymsp->TOP.io_clr_acc}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_phase2_req{vlSymsp->TOP.io_phase2_req}
    , io_lut_wr_en{vlSymsp->TOP.io_lut_wr_en}
    , io_lut_is_exp{vlSymsp->TOP.io_lut_is_exp}
    , io_lut_wr_addr{vlSymsp->TOP.io_lut_wr_addr}
    , io_lut_ready{vlSymsp->TOP.io_lut_ready}
    , io_sync_alert{vlSymsp->TOP.io_sync_alert}
    , io_phase1_vector_done{vlSymsp->TOP.io_phase1_vector_done}
    , io_lut_wr_data_0{vlSymsp->TOP.io_lut_wr_data_0}
    , io_lut_wr_data_1{vlSymsp->TOP.io_lut_wr_data_1}
    , io_lut_wr_data_2{vlSymsp->TOP.io_lut_wr_data_2}
    , io_lut_wr_data_3{vlSymsp->TOP.io_lut_wr_data_3}
    , io_lut_wr_data_4{vlSymsp->TOP.io_lut_wr_data_4}
    , io_lut_wr_data_5{vlSymsp->TOP.io_lut_wr_data_5}
    , io_lut_wr_data_6{vlSymsp->TOP.io_lut_wr_data_6}
    , io_lut_wr_data_7{vlSymsp->TOP.io_lut_wr_data_7}
    , io_metadata_count{vlSymsp->TOP.io_metadata_count}
    , io_logical_vector_length{vlSymsp->TOP.io_logical_vector_length}
    , io_inv_vector_length{vlSymsp->TOP.io_inv_vector_length}
    , io_epsilon{vlSymsp->TOP.io_epsilon}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_0{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_0}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_1{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_1}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_2{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_2}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_3{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_3}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_4{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_4}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_5{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_5}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_6{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_6}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_7{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_7}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_8{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_8}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_9{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_9}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_10{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_10}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_11{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_11}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_12{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_12}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_13{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_13}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_14{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_14}
    , __PVT__UniversalNormUnit__DOT__streamExpLuts_15{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__streamExpLuts_15}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_0{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_0}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_1{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_1}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_2{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_2}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_3{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_3}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_4{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_4}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_5{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_5}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_6{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_6}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_7{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_7}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_8{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_8}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_9{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_9}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_10{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_10}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_11{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_11}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_12{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_12}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_13{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_13}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_14{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_14}
    , __PVT__UniversalNormUnit__DOT__correctionExpLuts_15{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__correctionExpLuts_15}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_0{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_0}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_1{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_1}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_2{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_2}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_3{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_3}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_4{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_4}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_5{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_5}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_6{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_6}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_7{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_7}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_8{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_8}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_9{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_9}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_10{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_10}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_11{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_11}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_12{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_12}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_13{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_13}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_14{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_14}
    , __PVT__UniversalNormUnit__DOT__phase2ExpLuts_15{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__phase2ExpLuts_15}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_0{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_0}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_1{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_1}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_2{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_2}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_3{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_3}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_4{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_4}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_5{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_5}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_6{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_6}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_7{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_7}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_8{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_8}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_9{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_9}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_10{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_10}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_11{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_11}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_12{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_12}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_13{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_13}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_14{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_14}
    , __PVT__UniversalNormUnit__DOT__scaleLuts_15{vlSymsp->TOP.__PVT__UniversalNormUnit__DOT__scaleLuts_15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VUniversalNormUnit::VUniversalNormUnit(const char* _vcname__)
    : VUniversalNormUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VUniversalNormUnit::~VUniversalNormUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VUniversalNormUnit___024root___eval_debug_assertions(VUniversalNormUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VUniversalNormUnit___024root___eval_static(VUniversalNormUnit___024root* vlSelf);
void VUniversalNormUnit___024root___eval_initial(VUniversalNormUnit___024root* vlSelf);
void VUniversalNormUnit___024root___eval_settle(VUniversalNormUnit___024root* vlSelf);
void VUniversalNormUnit___024root___eval(VUniversalNormUnit___024root* vlSelf);

void VUniversalNormUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUniversalNormUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUniversalNormUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VUniversalNormUnit___024root___eval_static(&(vlSymsp->TOP));
        VUniversalNormUnit___024root___eval_initial(&(vlSymsp->TOP));
        VUniversalNormUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VUniversalNormUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VUniversalNormUnit::eventsPending() { return false; }

uint64_t VUniversalNormUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VUniversalNormUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VUniversalNormUnit___024root___eval_final(VUniversalNormUnit___024root* vlSelf);

VL_ATTR_COLD void VUniversalNormUnit::final() {
    VUniversalNormUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VUniversalNormUnit::hierName() const { return vlSymsp->name(); }
const char* VUniversalNormUnit::modelName() const { return "VUniversalNormUnit"; }
unsigned VUniversalNormUnit::threads() const { return 1; }
void VUniversalNormUnit::prepareClone() const { contextp()->prepareClone(); }
void VUniversalNormUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VUniversalNormUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VUniversalNormUnit::trace()' called on model that was Verilated without --trace option");
}
