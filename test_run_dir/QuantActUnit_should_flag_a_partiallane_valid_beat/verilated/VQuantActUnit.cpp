// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQuantActUnit__pch.h"

//============================================================
// Constructors

VQuantActUnit::VQuantActUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VQuantActUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_input_mode{vlSymsp->TOP.io_input_mode}
    , io_in_valid_0{vlSymsp->TOP.io_in_valid_0}
    , io_in_valid_1{vlSymsp->TOP.io_in_valid_1}
    , io_in_valid_2{vlSymsp->TOP.io_in_valid_2}
    , io_in_valid_3{vlSymsp->TOP.io_in_valid_3}
    , io_in_valid_4{vlSymsp->TOP.io_in_valid_4}
    , io_in_valid_5{vlSymsp->TOP.io_in_valid_5}
    , io_in_valid_6{vlSymsp->TOP.io_in_valid_6}
    , io_in_valid_7{vlSymsp->TOP.io_in_valid_7}
    , io_in_valid_8{vlSymsp->TOP.io_in_valid_8}
    , io_in_valid_9{vlSymsp->TOP.io_in_valid_9}
    , io_in_valid_10{vlSymsp->TOP.io_in_valid_10}
    , io_in_valid_11{vlSymsp->TOP.io_in_valid_11}
    , io_in_valid_12{vlSymsp->TOP.io_in_valid_12}
    , io_in_valid_13{vlSymsp->TOP.io_in_valid_13}
    , io_in_valid_14{vlSymsp->TOP.io_in_valid_14}
    , io_in_valid_15{vlSymsp->TOP.io_in_valid_15}
    , io_param_mode{vlSymsp->TOP.io_param_mode}
    , io_act_mask{vlSymsp->TOP.io_act_mask}
    , io_fusion_second{vlSymsp->TOP.io_fusion_second}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_soft_reset{vlSymsp->TOP.io_soft_reset}
    , io_qparam_req_line{vlSymsp->TOP.io_qparam_req_line}
    , io_qparam_line_valid{vlSymsp->TOP.io_qparam_line_valid}
    , io_lut_wr_en{vlSymsp->TOP.io_lut_wr_en}
    , io_lut_wr_addr{vlSymsp->TOP.io_lut_wr_addr}
    , io_lut_wr_data_0{vlSymsp->TOP.io_lut_wr_data_0}
    , io_lut_wr_data_1{vlSymsp->TOP.io_lut_wr_data_1}
    , io_lut_wr_data_2{vlSymsp->TOP.io_lut_wr_data_2}
    , io_lut_wr_data_3{vlSymsp->TOP.io_lut_wr_data_3}
    , io_lut_wr_data_4{vlSymsp->TOP.io_lut_wr_data_4}
    , io_lut_wr_data_5{vlSymsp->TOP.io_lut_wr_data_5}
    , io_lut_wr_data_6{vlSymsp->TOP.io_lut_wr_data_6}
    , io_lut_wr_data_7{vlSymsp->TOP.io_lut_wr_data_7}
    , io_lut_wr_data_8{vlSymsp->TOP.io_lut_wr_data_8}
    , io_lut_wr_data_9{vlSymsp->TOP.io_lut_wr_data_9}
    , io_lut_wr_data_10{vlSymsp->TOP.io_lut_wr_data_10}
    , io_lut_wr_data_11{vlSymsp->TOP.io_lut_wr_data_11}
    , io_lut_wr_data_12{vlSymsp->TOP.io_lut_wr_data_12}
    , io_lut_wr_data_13{vlSymsp->TOP.io_lut_wr_data_13}
    , io_lut_wr_data_14{vlSymsp->TOP.io_lut_wr_data_14}
    , io_lut_wr_data_15{vlSymsp->TOP.io_lut_wr_data_15}
    , io_out_vec_0{vlSymsp->TOP.io_out_vec_0}
    , io_out_vec_1{vlSymsp->TOP.io_out_vec_1}
    , io_out_vec_2{vlSymsp->TOP.io_out_vec_2}
    , io_out_vec_3{vlSymsp->TOP.io_out_vec_3}
    , io_out_vec_4{vlSymsp->TOP.io_out_vec_4}
    , io_out_vec_5{vlSymsp->TOP.io_out_vec_5}
    , io_out_vec_6{vlSymsp->TOP.io_out_vec_6}
    , io_out_vec_7{vlSymsp->TOP.io_out_vec_7}
    , io_out_vec_8{vlSymsp->TOP.io_out_vec_8}
    , io_out_vec_9{vlSymsp->TOP.io_out_vec_9}
    , io_out_vec_10{vlSymsp->TOP.io_out_vec_10}
    , io_out_vec_11{vlSymsp->TOP.io_out_vec_11}
    , io_out_vec_12{vlSymsp->TOP.io_out_vec_12}
    , io_out_vec_13{vlSymsp->TOP.io_out_vec_13}
    , io_out_vec_14{vlSymsp->TOP.io_out_vec_14}
    , io_out_vec_15{vlSymsp->TOP.io_out_vec_15}
    , io_out_valid_0{vlSymsp->TOP.io_out_valid_0}
    , io_out_valid_1{vlSymsp->TOP.io_out_valid_1}
    , io_out_valid_2{vlSymsp->TOP.io_out_valid_2}
    , io_out_valid_3{vlSymsp->TOP.io_out_valid_3}
    , io_out_valid_4{vlSymsp->TOP.io_out_valid_4}
    , io_out_valid_5{vlSymsp->TOP.io_out_valid_5}
    , io_out_valid_6{vlSymsp->TOP.io_out_valid_6}
    , io_out_valid_7{vlSymsp->TOP.io_out_valid_7}
    , io_out_valid_8{vlSymsp->TOP.io_out_valid_8}
    , io_out_valid_9{vlSymsp->TOP.io_out_valid_9}
    , io_out_valid_10{vlSymsp->TOP.io_out_valid_10}
    , io_out_valid_11{vlSymsp->TOP.io_out_valid_11}
    , io_out_valid_12{vlSymsp->TOP.io_out_valid_12}
    , io_out_valid_13{vlSymsp->TOP.io_out_valid_13}
    , io_out_valid_14{vlSymsp->TOP.io_out_valid_14}
    , io_out_valid_15{vlSymsp->TOP.io_out_valid_15}
    , io_out_lookahead_0{vlSymsp->TOP.io_out_lookahead_0}
    , io_out_lookahead_1{vlSymsp->TOP.io_out_lookahead_1}
    , io_out_lookahead_2{vlSymsp->TOP.io_out_lookahead_2}
    , io_out_lookahead_3{vlSymsp->TOP.io_out_lookahead_3}
    , io_out_lookahead_4{vlSymsp->TOP.io_out_lookahead_4}
    , io_out_lookahead_5{vlSymsp->TOP.io_out_lookahead_5}
    , io_out_lookahead_6{vlSymsp->TOP.io_out_lookahead_6}
    , io_out_lookahead_7{vlSymsp->TOP.io_out_lookahead_7}
    , io_out_lookahead_8{vlSymsp->TOP.io_out_lookahead_8}
    , io_out_lookahead_9{vlSymsp->TOP.io_out_lookahead_9}
    , io_out_lookahead_10{vlSymsp->TOP.io_out_lookahead_10}
    , io_out_lookahead_11{vlSymsp->TOP.io_out_lookahead_11}
    , io_out_lookahead_12{vlSymsp->TOP.io_out_lookahead_12}
    , io_out_lookahead_13{vlSymsp->TOP.io_out_lookahead_13}
    , io_out_lookahead_14{vlSymsp->TOP.io_out_lookahead_14}
    , io_out_lookahead_15{vlSymsp->TOP.io_out_lookahead_15}
    , io_busy{vlSymsp->TOP.io_busy}
    , io_prefetch_ready{vlSymsp->TOP.io_prefetch_ready}
    , io_lut_ready{vlSymsp->TOP.io_lut_ready}
    , io_sync_alert{vlSymsp->TOP.io_sync_alert}
    , io_in_direct_0{vlSymsp->TOP.io_in_direct_0}
    , io_in_direct_1{vlSymsp->TOP.io_in_direct_1}
    , io_in_direct_2{vlSymsp->TOP.io_in_direct_2}
    , io_in_direct_3{vlSymsp->TOP.io_in_direct_3}
    , io_in_direct_4{vlSymsp->TOP.io_in_direct_4}
    , io_in_direct_5{vlSymsp->TOP.io_in_direct_5}
    , io_in_direct_6{vlSymsp->TOP.io_in_direct_6}
    , io_in_direct_7{vlSymsp->TOP.io_in_direct_7}
    , io_in_direct_8{vlSymsp->TOP.io_in_direct_8}
    , io_in_direct_9{vlSymsp->TOP.io_in_direct_9}
    , io_in_direct_10{vlSymsp->TOP.io_in_direct_10}
    , io_in_direct_11{vlSymsp->TOP.io_in_direct_11}
    , io_in_direct_12{vlSymsp->TOP.io_in_direct_12}
    , io_in_direct_13{vlSymsp->TOP.io_in_direct_13}
    , io_in_direct_14{vlSymsp->TOP.io_in_direct_14}
    , io_in_direct_15{vlSymsp->TOP.io_in_direct_15}
    , io_in_tpu_0{vlSymsp->TOP.io_in_tpu_0}
    , io_in_tpu_1{vlSymsp->TOP.io_in_tpu_1}
    , io_in_tpu_2{vlSymsp->TOP.io_in_tpu_2}
    , io_in_tpu_3{vlSymsp->TOP.io_in_tpu_3}
    , io_in_tpu_4{vlSymsp->TOP.io_in_tpu_4}
    , io_in_tpu_5{vlSymsp->TOP.io_in_tpu_5}
    , io_in_tpu_6{vlSymsp->TOP.io_in_tpu_6}
    , io_in_tpu_7{vlSymsp->TOP.io_in_tpu_7}
    , io_in_tpu_8{vlSymsp->TOP.io_in_tpu_8}
    , io_in_tpu_9{vlSymsp->TOP.io_in_tpu_9}
    , io_in_tpu_10{vlSymsp->TOP.io_in_tpu_10}
    , io_in_tpu_11{vlSymsp->TOP.io_in_tpu_11}
    , io_in_tpu_12{vlSymsp->TOP.io_in_tpu_12}
    , io_in_tpu_13{vlSymsp->TOP.io_in_tpu_13}
    , io_in_tpu_14{vlSymsp->TOP.io_in_tpu_14}
    , io_in_tpu_15{vlSymsp->TOP.io_in_tpu_15}
    , io_matrix_param{vlSymsp->TOP.io_matrix_param}
    , io_qparam_line_in_0{vlSymsp->TOP.io_qparam_line_in_0}
    , io_qparam_line_in_1{vlSymsp->TOP.io_qparam_line_in_1}
    , io_qparam_line_in_2{vlSymsp->TOP.io_qparam_line_in_2}
    , io_qparam_line_in_3{vlSymsp->TOP.io_qparam_line_in_3}
    , io_qparam_line_in_4{vlSymsp->TOP.io_qparam_line_in_4}
    , io_qparam_line_in_5{vlSymsp->TOP.io_qparam_line_in_5}
    , io_qparam_line_in_6{vlSymsp->TOP.io_qparam_line_in_6}
    , io_qparam_line_in_7{vlSymsp->TOP.io_qparam_line_in_7}
    , io_qparam_line_in_8{vlSymsp->TOP.io_qparam_line_in_8}
    , io_qparam_line_in_9{vlSymsp->TOP.io_qparam_line_in_9}
    , io_qparam_line_in_10{vlSymsp->TOP.io_qparam_line_in_10}
    , io_qparam_line_in_11{vlSymsp->TOP.io_qparam_line_in_11}
    , io_qparam_line_in_12{vlSymsp->TOP.io_qparam_line_in_12}
    , io_qparam_line_in_13{vlSymsp->TOP.io_qparam_line_in_13}
    , io_qparam_line_in_14{vlSymsp->TOP.io_qparam_line_in_14}
    , io_qparam_line_in_15{vlSymsp->TOP.io_qparam_line_in_15}
    , __PVT__QuantActUnit__DOT__cores_0{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_0}
    , __PVT__QuantActUnit__DOT__cores_1{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_1}
    , __PVT__QuantActUnit__DOT__cores_2{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_2}
    , __PVT__QuantActUnit__DOT__cores_3{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_3}
    , __PVT__QuantActUnit__DOT__cores_4{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_4}
    , __PVT__QuantActUnit__DOT__cores_5{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_5}
    , __PVT__QuantActUnit__DOT__cores_6{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_6}
    , __PVT__QuantActUnit__DOT__cores_7{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_7}
    , __PVT__QuantActUnit__DOT__cores_8{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_8}
    , __PVT__QuantActUnit__DOT__cores_9{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_9}
    , __PVT__QuantActUnit__DOT__cores_10{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_10}
    , __PVT__QuantActUnit__DOT__cores_11{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_11}
    , __PVT__QuantActUnit__DOT__cores_12{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_12}
    , __PVT__QuantActUnit__DOT__cores_13{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_13}
    , __PVT__QuantActUnit__DOT__cores_14{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_14}
    , __PVT__QuantActUnit__DOT__cores_15{vlSymsp->TOP.__PVT__QuantActUnit__DOT__cores_15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VQuantActUnit::VQuantActUnit(const char* _vcname__)
    : VQuantActUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VQuantActUnit::~VQuantActUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VQuantActUnit___024root___eval_debug_assertions(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VQuantActUnit___024root___eval_static(VQuantActUnit___024root* vlSelf);
void VQuantActUnit___024root___eval_initial(VQuantActUnit___024root* vlSelf);
void VQuantActUnit___024root___eval_settle(VQuantActUnit___024root* vlSelf);
void VQuantActUnit___024root___eval(VQuantActUnit___024root* vlSelf);

void VQuantActUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQuantActUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQuantActUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VQuantActUnit___024root___eval_static(&(vlSymsp->TOP));
        VQuantActUnit___024root___eval_initial(&(vlSymsp->TOP));
        VQuantActUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VQuantActUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VQuantActUnit::eventsPending() { return false; }

uint64_t VQuantActUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VQuantActUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VQuantActUnit___024root___eval_final(VQuantActUnit___024root* vlSelf);

VL_ATTR_COLD void VQuantActUnit::final() {
    VQuantActUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VQuantActUnit::hierName() const { return vlSymsp->name(); }
const char* VQuantActUnit::modelName() const { return "VQuantActUnit"; }
unsigned VQuantActUnit::threads() const { return 1; }
void VQuantActUnit::prepareClone() const { contextp()->prepareClone(); }
void VQuantActUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VQuantActUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VQuantActUnit::trace()' called on model that was Verilated without --trace option");
}
