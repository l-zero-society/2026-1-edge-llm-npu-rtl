// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTPU_top__pch.h"

//============================================================
// Constructors

VTPU_top::VTPU_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTPU_top__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in_input_0{vlSymsp->TOP.io_in_input_0}
    , io_in_input_1{vlSymsp->TOP.io_in_input_1}
    , io_in_input_2{vlSymsp->TOP.io_in_input_2}
    , io_in_input_3{vlSymsp->TOP.io_in_input_3}
    , io_in_input_4{vlSymsp->TOP.io_in_input_4}
    , io_in_input_5{vlSymsp->TOP.io_in_input_5}
    , io_in_input_6{vlSymsp->TOP.io_in_input_6}
    , io_in_input_7{vlSymsp->TOP.io_in_input_7}
    , io_in_input_8{vlSymsp->TOP.io_in_input_8}
    , io_in_input_9{vlSymsp->TOP.io_in_input_9}
    , io_in_input_10{vlSymsp->TOP.io_in_input_10}
    , io_in_input_11{vlSymsp->TOP.io_in_input_11}
    , io_in_input_12{vlSymsp->TOP.io_in_input_12}
    , io_in_input_13{vlSymsp->TOP.io_in_input_13}
    , io_in_input_14{vlSymsp->TOP.io_in_input_14}
    , io_in_input_15{vlSymsp->TOP.io_in_input_15}
    , io_input_valid{vlSymsp->TOP.io_input_valid}
    , io_input_tile_start{vlSymsp->TOP.io_input_tile_start}
    , io_in_weight_0{vlSymsp->TOP.io_in_weight_0}
    , io_in_weight_1{vlSymsp->TOP.io_in_weight_1}
    , io_in_weight_2{vlSymsp->TOP.io_in_weight_2}
    , io_in_weight_3{vlSymsp->TOP.io_in_weight_3}
    , io_in_weight_4{vlSymsp->TOP.io_in_weight_4}
    , io_in_weight_5{vlSymsp->TOP.io_in_weight_5}
    , io_in_weight_6{vlSymsp->TOP.io_in_weight_6}
    , io_in_weight_7{vlSymsp->TOP.io_in_weight_7}
    , io_in_weight_8{vlSymsp->TOP.io_in_weight_8}
    , io_in_weight_9{vlSymsp->TOP.io_in_weight_9}
    , io_in_weight_10{vlSymsp->TOP.io_in_weight_10}
    , io_in_weight_11{vlSymsp->TOP.io_in_weight_11}
    , io_in_weight_12{vlSymsp->TOP.io_in_weight_12}
    , io_in_weight_13{vlSymsp->TOP.io_in_weight_13}
    , io_in_weight_14{vlSymsp->TOP.io_in_weight_14}
    , io_in_weight_15{vlSymsp->TOP.io_in_weight_15}
    , io_weight_valid{vlSymsp->TOP.io_weight_valid}
    , io_clear_W{vlSymsp->TOP.io_clear_W}
    , io_stall{vlSymsp->TOP.io_stall}
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
    , io_out_meta_row_change_update{vlSymsp->TOP.io_out_meta_row_change_update}
    , io_fusion_req{vlSymsp->TOP.io_fusion_req}
    , io_fatal_alert{vlSymsp->TOP.io_fatal_alert}
    , io_intermNum{vlSymsp->TOP.io_intermNum}
    , io_outColNum{vlSymsp->TOP.io_outColNum}
    , io_out_accum_0{vlSymsp->TOP.io_out_accum_0}
    , io_out_accum_1{vlSymsp->TOP.io_out_accum_1}
    , io_out_accum_2{vlSymsp->TOP.io_out_accum_2}
    , io_out_accum_3{vlSymsp->TOP.io_out_accum_3}
    , io_out_accum_4{vlSymsp->TOP.io_out_accum_4}
    , io_out_accum_5{vlSymsp->TOP.io_out_accum_5}
    , io_out_accum_6{vlSymsp->TOP.io_out_accum_6}
    , io_out_accum_7{vlSymsp->TOP.io_out_accum_7}
    , io_out_accum_8{vlSymsp->TOP.io_out_accum_8}
    , io_out_accum_9{vlSymsp->TOP.io_out_accum_9}
    , io_out_accum_10{vlSymsp->TOP.io_out_accum_10}
    , io_out_accum_11{vlSymsp->TOP.io_out_accum_11}
    , io_out_accum_12{vlSymsp->TOP.io_out_accum_12}
    , io_out_accum_13{vlSymsp->TOP.io_out_accum_13}
    , io_out_accum_14{vlSymsp->TOP.io_out_accum_14}
    , io_out_accum_15{vlSymsp->TOP.io_out_accum_15}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_0{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_0}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_1{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_1}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_2{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_2}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_3{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_3}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_4{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_4}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_5{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_5}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_6{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_6}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_7{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_7}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_8{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_8}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_9{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_9}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_10{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_10}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_11{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_11}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_12{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_12}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_13{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_13}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_14{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_14}
    , __PVT__TPU_top__DOT__accumulator__DOT__buffers_15{vlSymsp->TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTPU_top::VTPU_top(const char* _vcname__)
    : VTPU_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTPU_top::~VTPU_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTPU_top___024root___eval_debug_assertions(VTPU_top___024root* vlSelf);
#endif  // VL_DEBUG
void VTPU_top___024root___eval_static(VTPU_top___024root* vlSelf);
void VTPU_top___024root___eval_initial(VTPU_top___024root* vlSelf);
void VTPU_top___024root___eval_settle(VTPU_top___024root* vlSelf);
void VTPU_top___024root___eval(VTPU_top___024root* vlSelf);

void VTPU_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTPU_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTPU_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTPU_top___024root___eval_static(&(vlSymsp->TOP));
        VTPU_top___024root___eval_initial(&(vlSymsp->TOP));
        VTPU_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTPU_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTPU_top::eventsPending() { return false; }

uint64_t VTPU_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTPU_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTPU_top___024root___eval_final(VTPU_top___024root* vlSelf);

VL_ATTR_COLD void VTPU_top::final() {
    VTPU_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTPU_top::hierName() const { return vlSymsp->name(); }
const char* VTPU_top::modelName() const { return "VTPU_top"; }
unsigned VTPU_top::threads() const { return 1; }
void VTPU_top::prepareClone() const { contextp()->prepareClone(); }
void VTPU_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VTPU_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VTPU_top::trace()' called on model that was Verilated without --trace option");
}
