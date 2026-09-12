// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRopeUnit__pch.h"

//============================================================
// Constructors

VRopeUnit::VRopeUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRopeUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in_vec_0{vlSymsp->TOP.io_in_vec_0}
    , io_in_vec_1{vlSymsp->TOP.io_in_vec_1}
    , io_in_vec_2{vlSymsp->TOP.io_in_vec_2}
    , io_in_vec_3{vlSymsp->TOP.io_in_vec_3}
    , io_in_vec_4{vlSymsp->TOP.io_in_vec_4}
    , io_in_vec_5{vlSymsp->TOP.io_in_vec_5}
    , io_in_vec_6{vlSymsp->TOP.io_in_vec_6}
    , io_in_vec_7{vlSymsp->TOP.io_in_vec_7}
    , io_in_vec_8{vlSymsp->TOP.io_in_vec_8}
    , io_in_vec_9{vlSymsp->TOP.io_in_vec_9}
    , io_in_vec_10{vlSymsp->TOP.io_in_vec_10}
    , io_in_vec_11{vlSymsp->TOP.io_in_vec_11}
    , io_in_vec_12{vlSymsp->TOP.io_in_vec_12}
    , io_in_vec_13{vlSymsp->TOP.io_in_vec_13}
    , io_in_vec_14{vlSymsp->TOP.io_in_vec_14}
    , io_in_vec_15{vlSymsp->TOP.io_in_vec_15}
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
    , io_rope_en{vlSymsp->TOP.io_rope_en}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_soft_reset{vlSymsp->TOP.io_soft_reset}
    , io_row_change_update{vlSymsp->TOP.io_row_change_update}
    , io_position_init{vlSymsp->TOP.io_position_init}
    , io_freq_req_block{vlSymsp->TOP.io_freq_req_block}
    , io_freq_block_valid{vlSymsp->TOP.io_freq_block_valid}
    , io_lut_cos_wr_en{vlSymsp->TOP.io_lut_cos_wr_en}
    , io_lut_sin_wr_en{vlSymsp->TOP.io_lut_sin_wr_en}
    , io_lut_wr_addr{vlSymsp->TOP.io_lut_wr_addr}
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
    , io_prefetch_ready{vlSymsp->TOP.io_prefetch_ready}
    , io_lut_ready{vlSymsp->TOP.io_lut_ready}
    , io_sync_alert{vlSymsp->TOP.io_sync_alert}
    , io_freq_block_in_0{vlSymsp->TOP.io_freq_block_in_0}
    , io_freq_block_in_1{vlSymsp->TOP.io_freq_block_in_1}
    , io_freq_block_in_2{vlSymsp->TOP.io_freq_block_in_2}
    , io_freq_block_in_3{vlSymsp->TOP.io_freq_block_in_3}
    , io_freq_block_in_4{vlSymsp->TOP.io_freq_block_in_4}
    , io_freq_block_in_5{vlSymsp->TOP.io_freq_block_in_5}
    , io_freq_block_in_6{vlSymsp->TOP.io_freq_block_in_6}
    , io_freq_block_in_7{vlSymsp->TOP.io_freq_block_in_7}
    , io_freq_block_in_8{vlSymsp->TOP.io_freq_block_in_8}
    , io_freq_block_in_9{vlSymsp->TOP.io_freq_block_in_9}
    , io_freq_block_in_10{vlSymsp->TOP.io_freq_block_in_10}
    , io_freq_block_in_11{vlSymsp->TOP.io_freq_block_in_11}
    , io_freq_block_in_12{vlSymsp->TOP.io_freq_block_in_12}
    , io_freq_block_in_13{vlSymsp->TOP.io_freq_block_in_13}
    , io_freq_block_in_14{vlSymsp->TOP.io_freq_block_in_14}
    , io_freq_block_in_15{vlSymsp->TOP.io_freq_block_in_15}
    , io_lut_wr_data_0{vlSymsp->TOP.io_lut_wr_data_0}
    , io_lut_wr_data_1{vlSymsp->TOP.io_lut_wr_data_1}
    , io_lut_wr_data_2{vlSymsp->TOP.io_lut_wr_data_2}
    , io_lut_wr_data_3{vlSymsp->TOP.io_lut_wr_data_3}
    , io_lut_wr_data_4{vlSymsp->TOP.io_lut_wr_data_4}
    , io_lut_wr_data_5{vlSymsp->TOP.io_lut_wr_data_5}
    , io_lut_wr_data_6{vlSymsp->TOP.io_lut_wr_data_6}
    , io_lut_wr_data_7{vlSymsp->TOP.io_lut_wr_data_7}
    , io_base_m_in{vlSymsp->TOP.io_base_m_in}
    , __PVT__RopeUnit__DOT__pairs_0{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_0}
    , __PVT__RopeUnit__DOT__pairs_1{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_1}
    , __PVT__RopeUnit__DOT__pairs_2{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_2}
    , __PVT__RopeUnit__DOT__pairs_3{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_3}
    , __PVT__RopeUnit__DOT__pairs_4{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_4}
    , __PVT__RopeUnit__DOT__pairs_5{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_5}
    , __PVT__RopeUnit__DOT__pairs_6{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_6}
    , __PVT__RopeUnit__DOT__pairs_7{vlSymsp->TOP.__PVT__RopeUnit__DOT__pairs_7}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRopeUnit::VRopeUnit(const char* _vcname__)
    : VRopeUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRopeUnit::~VRopeUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRopeUnit___024root___eval_debug_assertions(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VRopeUnit___024root___eval_static(VRopeUnit___024root* vlSelf);
void VRopeUnit___024root___eval_initial(VRopeUnit___024root* vlSelf);
void VRopeUnit___024root___eval_settle(VRopeUnit___024root* vlSelf);
void VRopeUnit___024root___eval(VRopeUnit___024root* vlSelf);

void VRopeUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRopeUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRopeUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRopeUnit___024root___eval_static(&(vlSymsp->TOP));
        VRopeUnit___024root___eval_initial(&(vlSymsp->TOP));
        VRopeUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRopeUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRopeUnit::eventsPending() { return false; }

uint64_t VRopeUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRopeUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRopeUnit___024root___eval_final(VRopeUnit___024root* vlSelf);

VL_ATTR_COLD void VRopeUnit::final() {
    VRopeUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRopeUnit::hierName() const { return vlSymsp->name(); }
const char* VRopeUnit::modelName() const { return "VRopeUnit"; }
unsigned VRopeUnit::threads() const { return 1; }
void VRopeUnit::prepareClone() const { contextp()->prepareClone(); }
void VRopeUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VRopeUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VRopeUnit::trace()' called on model that was Verilated without --trace option");
}
