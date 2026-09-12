// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQuantActUnit.h for the primary calling header

#ifndef VERILATED_VQUANTACTUNIT___024ROOT_H_
#define VERILATED_VQUANTACTUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class VQuantActUnit_QuantActCore;


class VQuantActUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VQuantActUnit___024root final : public VerilatedModule {
  public:
    // CELLS
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_0;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_1;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_2;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_3;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_4;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_5;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_6;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_7;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_8;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_9;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_10;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_11;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_12;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_13;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_14;
    VQuantActUnit_QuantActCore* __PVT__QuantActUnit__DOT__cores_15;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_input_mode,0,0);
        VL_IN8(io_in_valid_0,0,0);
        VL_IN8(io_in_valid_1,0,0);
        VL_IN8(io_in_valid_2,0,0);
        VL_IN8(io_in_valid_3,0,0);
        VL_IN8(io_in_valid_4,0,0);
        VL_IN8(io_in_valid_5,0,0);
        VL_IN8(io_in_valid_6,0,0);
        VL_IN8(io_in_valid_7,0,0);
        VL_IN8(io_in_valid_8,0,0);
        VL_IN8(io_in_valid_9,0,0);
        VL_IN8(io_in_valid_10,0,0);
        VL_IN8(io_in_valid_11,0,0);
        VL_IN8(io_in_valid_12,0,0);
        VL_IN8(io_in_valid_13,0,0);
        VL_IN8(io_in_valid_14,0,0);
        VL_IN8(io_in_valid_15,0,0);
        VL_IN8(io_param_mode,0,0);
        VL_IN8(io_act_mask,1,0);
        VL_IN8(io_fusion_second,0,0);
        VL_IN8(io_stall,0,0);
        VL_IN8(io_soft_reset,0,0);
        VL_OUT8(io_qparam_req_line,0,0);
        VL_IN8(io_qparam_line_valid,0,0);
        VL_IN8(io_lut_wr_en,0,0);
        VL_IN8(io_lut_wr_addr,5,0);
        VL_IN8(io_lut_wr_data_0,7,0);
        VL_IN8(io_lut_wr_data_1,7,0);
        VL_IN8(io_lut_wr_data_2,7,0);
        VL_IN8(io_lut_wr_data_3,7,0);
        VL_IN8(io_lut_wr_data_4,7,0);
        VL_IN8(io_lut_wr_data_5,7,0);
        VL_IN8(io_lut_wr_data_6,7,0);
        VL_IN8(io_lut_wr_data_7,7,0);
        VL_IN8(io_lut_wr_data_8,7,0);
        VL_IN8(io_lut_wr_data_9,7,0);
        VL_IN8(io_lut_wr_data_10,7,0);
        VL_IN8(io_lut_wr_data_11,7,0);
        VL_IN8(io_lut_wr_data_12,7,0);
        VL_IN8(io_lut_wr_data_13,7,0);
        VL_IN8(io_lut_wr_data_14,7,0);
        VL_IN8(io_lut_wr_data_15,7,0);
        VL_OUT8(io_out_vec_0,7,0);
        VL_OUT8(io_out_vec_1,7,0);
        VL_OUT8(io_out_vec_2,7,0);
        VL_OUT8(io_out_vec_3,7,0);
        VL_OUT8(io_out_vec_4,7,0);
        VL_OUT8(io_out_vec_5,7,0);
        VL_OUT8(io_out_vec_6,7,0);
        VL_OUT8(io_out_vec_7,7,0);
        VL_OUT8(io_out_vec_8,7,0);
        VL_OUT8(io_out_vec_9,7,0);
        VL_OUT8(io_out_vec_10,7,0);
        VL_OUT8(io_out_vec_11,7,0);
        VL_OUT8(io_out_vec_12,7,0);
        VL_OUT8(io_out_vec_13,7,0);
        VL_OUT8(io_out_vec_14,7,0);
        VL_OUT8(io_out_vec_15,7,0);
        VL_OUT8(io_out_valid_0,0,0);
        VL_OUT8(io_out_valid_1,0,0);
        VL_OUT8(io_out_valid_2,0,0);
        VL_OUT8(io_out_valid_3,0,0);
    };
    struct {
        VL_OUT8(io_out_valid_4,0,0);
        VL_OUT8(io_out_valid_5,0,0);
        VL_OUT8(io_out_valid_6,0,0);
        VL_OUT8(io_out_valid_7,0,0);
        VL_OUT8(io_out_valid_8,0,0);
        VL_OUT8(io_out_valid_9,0,0);
        VL_OUT8(io_out_valid_10,0,0);
        VL_OUT8(io_out_valid_11,0,0);
        VL_OUT8(io_out_valid_12,0,0);
        VL_OUT8(io_out_valid_13,0,0);
        VL_OUT8(io_out_valid_14,0,0);
        VL_OUT8(io_out_valid_15,0,0);
        VL_OUT8(io_out_lookahead_0,0,0);
        VL_OUT8(io_out_lookahead_1,0,0);
        VL_OUT8(io_out_lookahead_2,0,0);
        VL_OUT8(io_out_lookahead_3,0,0);
        VL_OUT8(io_out_lookahead_4,0,0);
        VL_OUT8(io_out_lookahead_5,0,0);
        VL_OUT8(io_out_lookahead_6,0,0);
        VL_OUT8(io_out_lookahead_7,0,0);
        VL_OUT8(io_out_lookahead_8,0,0);
        VL_OUT8(io_out_lookahead_9,0,0);
        VL_OUT8(io_out_lookahead_10,0,0);
        VL_OUT8(io_out_lookahead_11,0,0);
        VL_OUT8(io_out_lookahead_12,0,0);
        VL_OUT8(io_out_lookahead_13,0,0);
        VL_OUT8(io_out_lookahead_14,0,0);
        VL_OUT8(io_out_lookahead_15,0,0);
        VL_OUT8(io_busy,0,0);
        VL_OUT8(io_prefetch_ready,0,0);
        VL_OUT8(io_lut_ready,0,0);
        VL_OUT8(io_sync_alert,0,0);
        CData/*0:0*/ QuantActUnit__DOT__perChannel;
        CData/*0:0*/ QuantActUnit__DOT__inputFire;
        CData/*3:0*/ QuantActUnit__DOT__rowCounter;
        CData/*0:0*/ QuantActUnit__DOT__tileStart;
        CData/*0:0*/ QuantActUnit__DOT__tileEnd;
        CData/*0:0*/ QuantActUnit__DOT___T_1;
        CData/*3:0*/ QuantActUnit__DOT___rowCounter_T_1;
        CData/*0:0*/ QuantActUnit__DOT__activeValid;
        CData/*0:0*/ QuantActUnit__DOT__shadowValid;
        CData/*0:0*/ QuantActUnit__DOT__reqOutstanding;
        CData/*0:0*/ QuantActUnit__DOT__consumeShadow;
        CData/*0:0*/ QuantActUnit__DOT___GEN_3;
        CData/*0:0*/ QuantActUnit__DOT___GEN_20;
        CData/*0:0*/ QuantActUnit__DOT___GEN_55;
        CData/*0:0*/ QuantActUnit__DOT__primed;
        CData/*0:0*/ QuantActUnit__DOT___GEN_92;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(io_in_direct_0,9,0);
        VL_IN16(io_in_direct_1,9,0);
        VL_IN16(io_in_direct_2,9,0);
        VL_IN16(io_in_direct_3,9,0);
        VL_IN16(io_in_direct_4,9,0);
        VL_IN16(io_in_direct_5,9,0);
        VL_IN16(io_in_direct_6,9,0);
        VL_IN16(io_in_direct_7,9,0);
        VL_IN16(io_in_direct_8,9,0);
        VL_IN16(io_in_direct_9,9,0);
        VL_IN16(io_in_direct_10,9,0);
        VL_IN16(io_in_direct_11,9,0);
    };
    struct {
        VL_IN16(io_in_direct_12,9,0);
        VL_IN16(io_in_direct_13,9,0);
        VL_IN16(io_in_direct_14,9,0);
        VL_IN16(io_in_direct_15,9,0);
        SData/*15:0*/ QuantActUnit__DOT___anyValid_T;
        VL_IN(io_in_tpu_0,31,0);
        VL_IN(io_in_tpu_1,31,0);
        VL_IN(io_in_tpu_2,31,0);
        VL_IN(io_in_tpu_3,31,0);
        VL_IN(io_in_tpu_4,31,0);
        VL_IN(io_in_tpu_5,31,0);
        VL_IN(io_in_tpu_6,31,0);
        VL_IN(io_in_tpu_7,31,0);
        VL_IN(io_in_tpu_8,31,0);
        VL_IN(io_in_tpu_9,31,0);
        VL_IN(io_in_tpu_10,31,0);
        VL_IN(io_in_tpu_11,31,0);
        VL_IN(io_in_tpu_12,31,0);
        VL_IN(io_in_tpu_13,31,0);
        VL_IN(io_in_tpu_14,31,0);
        VL_IN(io_in_tpu_15,31,0);
        VL_IN(io_matrix_param,31,0);
        VL_IN(io_qparam_line_in_0,31,0);
        VL_IN(io_qparam_line_in_1,31,0);
        VL_IN(io_qparam_line_in_2,31,0);
        VL_IN(io_qparam_line_in_3,31,0);
        VL_IN(io_qparam_line_in_4,31,0);
        VL_IN(io_qparam_line_in_5,31,0);
        VL_IN(io_qparam_line_in_6,31,0);
        VL_IN(io_qparam_line_in_7,31,0);
        VL_IN(io_qparam_line_in_8,31,0);
        VL_IN(io_qparam_line_in_9,31,0);
        VL_IN(io_qparam_line_in_10,31,0);
        VL_IN(io_qparam_line_in_11,31,0);
        VL_IN(io_qparam_line_in_12,31,0);
        VL_IN(io_qparam_line_in_13,31,0);
        VL_IN(io_qparam_line_in_14,31,0);
        VL_IN(io_qparam_line_in_15,31,0);
        IData/*31:0*/ QuantActUnit__DOT__cores_0_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_1_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_2_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_3_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_4_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_5_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_6_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_7_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_8_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_9_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_10_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_11_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_12_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_13_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_14_io_param;
        IData/*31:0*/ QuantActUnit__DOT__cores_15_io_param;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_0;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_1;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_2;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_3;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_4;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_5;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_6;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_7;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_8;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_9;
    };
    struct {
        IData/*31:0*/ QuantActUnit__DOT__activeParam_10;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_11;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_12;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_13;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_14;
        IData/*31:0*/ QuantActUnit__DOT__activeParam_15;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_0;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_1;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_2;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_3;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_4;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_5;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_6;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_7;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_8;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_9;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_10;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_11;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_12;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_13;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_14;
        IData/*31:0*/ QuantActUnit__DOT__shadowParam_15;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VQuantActUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VQuantActUnit___024root(VQuantActUnit__Syms* symsp, const char* v__name);
    ~VQuantActUnit___024root();
    VL_UNCOPYABLE(VQuantActUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
