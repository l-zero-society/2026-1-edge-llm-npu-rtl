// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVPU1RouteHarness__pch.h"

//============================================================
// Constructors

VVPU1RouteHarness::VVPU1RouteHarness(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVPU1RouteHarness__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_tpu_valid{vlSymsp->TOP.io_tpu_valid}
    , io_ub_0{vlSymsp->TOP.io_ub_0}
    , io_ub_1{vlSymsp->TOP.io_ub_1}
    , io_ub_2{vlSymsp->TOP.io_ub_2}
    , io_ub_3{vlSymsp->TOP.io_ub_3}
    , io_ub_4{vlSymsp->TOP.io_ub_4}
    , io_ub_5{vlSymsp->TOP.io_ub_5}
    , io_ub_6{vlSymsp->TOP.io_ub_6}
    , io_ub_7{vlSymsp->TOP.io_ub_7}
    , io_ub_8{vlSymsp->TOP.io_ub_8}
    , io_ub_9{vlSymsp->TOP.io_ub_9}
    , io_ub_10{vlSymsp->TOP.io_ub_10}
    , io_ub_11{vlSymsp->TOP.io_ub_11}
    , io_ub_12{vlSymsp->TOP.io_ub_12}
    , io_ub_13{vlSymsp->TOP.io_ub_13}
    , io_ub_14{vlSymsp->TOP.io_ub_14}
    , io_ub_15{vlSymsp->TOP.io_ub_15}
    , io_wb_0{vlSymsp->TOP.io_wb_0}
    , io_wb_1{vlSymsp->TOP.io_wb_1}
    , io_wb_2{vlSymsp->TOP.io_wb_2}
    , io_wb_3{vlSymsp->TOP.io_wb_3}
    , io_wb_4{vlSymsp->TOP.io_wb_4}
    , io_wb_5{vlSymsp->TOP.io_wb_5}
    , io_wb_6{vlSymsp->TOP.io_wb_6}
    , io_wb_7{vlSymsp->TOP.io_wb_7}
    , io_wb_8{vlSymsp->TOP.io_wb_8}
    , io_wb_9{vlSymsp->TOP.io_wb_9}
    , io_wb_10{vlSymsp->TOP.io_wb_10}
    , io_wb_11{vlSymsp->TOP.io_wb_11}
    , io_wb_12{vlSymsp->TOP.io_wb_12}
    , io_wb_13{vlSymsp->TOP.io_wb_13}
    , io_wb_14{vlSymsp->TOP.io_wb_14}
    , io_wb_15{vlSymsp->TOP.io_wb_15}
    , io_ub_valid{vlSymsp->TOP.io_ub_valid}
    , io_wb_valid{vlSymsp->TOP.io_wb_valid}
    , io_vb_read_data_0{vlSymsp->TOP.io_vb_read_data_0}
    , io_vb_read_data_1{vlSymsp->TOP.io_vb_read_data_1}
    , io_vb_read_data_2{vlSymsp->TOP.io_vb_read_data_2}
    , io_vb_read_data_3{vlSymsp->TOP.io_vb_read_data_3}
    , io_vb_read_data_4{vlSymsp->TOP.io_vb_read_data_4}
    , io_vb_read_data_5{vlSymsp->TOP.io_vb_read_data_5}
    , io_vb_read_data_6{vlSymsp->TOP.io_vb_read_data_6}
    , io_vb_read_data_7{vlSymsp->TOP.io_vb_read_data_7}
    , io_vb_read_data_8{vlSymsp->TOP.io_vb_read_data_8}
    , io_vb_read_data_9{vlSymsp->TOP.io_vb_read_data_9}
    , io_vb_read_data_10{vlSymsp->TOP.io_vb_read_data_10}
    , io_vb_read_data_11{vlSymsp->TOP.io_vb_read_data_11}
    , io_vb_read_data_12{vlSymsp->TOP.io_vb_read_data_12}
    , io_vb_read_data_13{vlSymsp->TOP.io_vb_read_data_13}
    , io_vb_read_data_14{vlSymsp->TOP.io_vb_read_data_14}
    , io_vb_read_data_15{vlSymsp->TOP.io_vb_read_data_15}
    , io_vb_read_req{vlSymsp->TOP.io_vb_read_req}
    , io_input_mode{vlSymsp->TOP.io_input_mode}
    , io_output_route{vlSymsp->TOP.io_output_route}
    , io_alu_mode{vlSymsp->TOP.io_alu_mode}
    , io_out_shift{vlSymsp->TOP.io_out_shift}
    , io_act_mask{vlSymsp->TOP.io_act_mask}
    , io_fusion_second{vlSymsp->TOP.io_fusion_second}
    , io_stall{vlSymsp->TOP.io_stall}
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
    , io_result_0{vlSymsp->TOP.io_result_0}
    , io_result_1{vlSymsp->TOP.io_result_1}
    , io_result_2{vlSymsp->TOP.io_result_2}
    , io_result_3{vlSymsp->TOP.io_result_3}
    , io_result_4{vlSymsp->TOP.io_result_4}
    , io_result_5{vlSymsp->TOP.io_result_5}
    , io_result_6{vlSymsp->TOP.io_result_6}
    , io_result_7{vlSymsp->TOP.io_result_7}
    , io_result_8{vlSymsp->TOP.io_result_8}
    , io_result_9{vlSymsp->TOP.io_result_9}
    , io_result_10{vlSymsp->TOP.io_result_10}
    , io_result_11{vlSymsp->TOP.io_result_11}
    , io_result_12{vlSymsp->TOP.io_result_12}
    , io_result_13{vlSymsp->TOP.io_result_13}
    , io_result_14{vlSymsp->TOP.io_result_14}
    , io_result_15{vlSymsp->TOP.io_result_15}
    , io_vb_valid{vlSymsp->TOP.io_vb_valid}
    , io_vpu2_valid{vlSymsp->TOP.io_vpu2_valid}
    , io_compute_valid{vlSymsp->TOP.io_compute_valid}
    , io_result_valid{vlSymsp->TOP.io_result_valid}
    , io_drained{vlSymsp->TOP.io_drained}
    , io_control_alert{vlSymsp->TOP.io_control_alert}
    , io_sync_alert{vlSymsp->TOP.io_sync_alert}
    , io_qparam_req{vlSymsp->TOP.io_qparam_req}
    , io_tpu_0{vlSymsp->TOP.io_tpu_0}
    , io_tpu_1{vlSymsp->TOP.io_tpu_1}
    , io_tpu_2{vlSymsp->TOP.io_tpu_2}
    , io_tpu_3{vlSymsp->TOP.io_tpu_3}
    , io_tpu_4{vlSymsp->TOP.io_tpu_4}
    , io_tpu_5{vlSymsp->TOP.io_tpu_5}
    , io_tpu_6{vlSymsp->TOP.io_tpu_6}
    , io_tpu_7{vlSymsp->TOP.io_tpu_7}
    , io_tpu_8{vlSymsp->TOP.io_tpu_8}
    , io_tpu_9{vlSymsp->TOP.io_tpu_9}
    , io_tpu_10{vlSymsp->TOP.io_tpu_10}
    , io_tpu_11{vlSymsp->TOP.io_tpu_11}
    , io_tpu_12{vlSymsp->TOP.io_tpu_12}
    , io_tpu_13{vlSymsp->TOP.io_tpu_13}
    , io_tpu_14{vlSymsp->TOP.io_tpu_14}
    , io_tpu_15{vlSymsp->TOP.io_tpu_15}
    , io_matrix_param{vlSymsp->TOP.io_matrix_param}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_0{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_0}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_1{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_1}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_2{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_2}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_3{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_3}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_4{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_4}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_5{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_5}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_6{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_6}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_7{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_7}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_8{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_8}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_9{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_9}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_10{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_10}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_11{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_11}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_12{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_12}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_13{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_13}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_14{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_14}
    , __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_15{vlSymsp->TOP.__PVT__VPU1RouteHarness__DOT__qa__DOT__cores_15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVPU1RouteHarness::VVPU1RouteHarness(const char* _vcname__)
    : VVPU1RouteHarness(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVPU1RouteHarness::~VVPU1RouteHarness() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VVPU1RouteHarness___024root___eval_debug_assertions(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG
void VVPU1RouteHarness___024root___eval_static(VVPU1RouteHarness___024root* vlSelf);
void VVPU1RouteHarness___024root___eval_initial(VVPU1RouteHarness___024root* vlSelf);
void VVPU1RouteHarness___024root___eval_settle(VVPU1RouteHarness___024root* vlSelf);
void VVPU1RouteHarness___024root___eval(VVPU1RouteHarness___024root* vlSelf);

void VVPU1RouteHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVPU1RouteHarness::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVPU1RouteHarness___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VVPU1RouteHarness___024root___eval_static(&(vlSymsp->TOP));
        VVPU1RouteHarness___024root___eval_initial(&(vlSymsp->TOP));
        VVPU1RouteHarness___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VVPU1RouteHarness___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VVPU1RouteHarness::eventsPending() { return false; }

uint64_t VVPU1RouteHarness::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VVPU1RouteHarness::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VVPU1RouteHarness___024root___eval_final(VVPU1RouteHarness___024root* vlSelf);

VL_ATTR_COLD void VVPU1RouteHarness::final() {
    VVPU1RouteHarness___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVPU1RouteHarness::hierName() const { return vlSymsp->name(); }
const char* VVPU1RouteHarness::modelName() const { return "VVPU1RouteHarness"; }
unsigned VVPU1RouteHarness::threads() const { return 1; }
void VVPU1RouteHarness::prepareClone() const { contextp()->prepareClone(); }
void VVPU1RouteHarness::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VVPU1RouteHarness::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VVPU1RouteHarness::trace()' called on model that was Verilated without --trace option");
}
