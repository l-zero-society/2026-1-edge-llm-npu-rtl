// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQuantActUnit.h for the primary calling header

#ifndef VERILATED_VQUANTACTUNIT_QUANTACTCORE_H_
#define VERILATED_VQUANTACTUNIT_QUANTACTCORE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VQuantActUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VQuantActUnit_QuantActCore final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_input_mode,0,0);
        VL_IN8(io_in_valid,0,0);
        VL_IN8(io_act_mask,1,0);
        VL_IN8(io_fusion_second,0,0);
        VL_IN8(io_stall,0,0);
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
        VL_OUT8(io_out_qact,7,0);
        VL_OUT8(io_out_valid,0,0);
        VL_OUT8(io_out_lookahead,0,0);
        VL_OUT8(io_busy,0,0);
        VL_OUT8(io_lut_ready,0,0);
        VL_OUT8(io_sync_alert,0,0);
        CData/*0:0*/ __PVT__actLut_io_rd_en;
        CData/*7:0*/ __PVT__actLut_io_rd_data;
        CData/*4:0*/ __PVT__s1Shift;
        CData/*0:0*/ __PVT__s1ActEn;
        CData/*0:0*/ __PVT__s1Direct;
        CData/*0:0*/ __PVT__s1Valid;
        CData/*4:0*/ __PVT__s2Shift;
        CData/*0:0*/ __PVT__s2ActEn;
        CData/*0:0*/ __PVT__s2Valid;
        CData/*7:0*/ __PVT__s3Linear;
        CData/*0:0*/ __PVT__s3ActEn;
        CData/*0:0*/ __PVT__s3Valid;
        CData/*0:0*/ __PVT__linearReq;
        CData/*7:0*/ __PVT__linearDataD1;
        CData/*0:0*/ __PVT__linearValidD1;
        CData/*0:0*/ __PVT__rawValid;
        CData/*0:0*/ __PVT__holdValid;
        CData/*7:0*/ __PVT__holdData;
        CData/*0:0*/ __PVT___GEN_27;
        CData/*0:0*/ __PVT__expectedRdValid;
        CData/*0:0*/ __PVT__expectedWrValid;
        CData/*5:0*/ __PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0;
        CData/*0:0*/ __PVT__actLut__DOT__io_wr_valid_REG;
        CData/*0:0*/ __PVT__actLut__DOT__is_programmed;
        CData/*0:0*/ __PVT__actLut__DOT__last_write_ack;
        CData/*0:0*/ __PVT__actLut__DOT___GEN_20;
        CData/*3:0*/ __PVT__actLut__DOT__rd_col_delayed;
        CData/*0:0*/ __PVT__actLut__DOT__io_rd_valid_REG;
        VL_IN16(io_in_direct,9,0);
        SData/*15:0*/ __PVT__s1Mult;
        SData/*9:0*/ __PVT__s3Idx;
        SData/*10:0*/ __PVT___GEN_22;
        VL_IN(io_in_tpu,31,0);
    };
    struct {
        VL_IN(io_param,31,0);
        QData/*32:0*/ __PVT__s1Sub;
        QData/*48:0*/ __PVT__s2MultRes;
        QData/*48:0*/ __PVT__shifted;
        QData/*49:0*/ __VdfgTmp_h017163a2__0;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_0;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_1;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_2;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_3;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_4;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_5;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_6;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_7;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_8;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_9;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_10;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_11;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_12;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_13;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_14;
        VlUnpacked<CData/*7:0*/, 64> __PVT__actLut__DOT__lut_mem_15;
    };

    // INTERNAL VARIABLES
    VQuantActUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VQuantActUnit_QuantActCore(VQuantActUnit__Syms* symsp, const char* v__name);
    ~VQuantActUnit_QuantActCore();
    VL_UNCOPYABLE(VQuantActUnit_QuantActCore);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
