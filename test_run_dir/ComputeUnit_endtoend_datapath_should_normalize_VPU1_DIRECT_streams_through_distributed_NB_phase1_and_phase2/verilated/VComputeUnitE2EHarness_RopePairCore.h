// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputeUnitE2EHarness.h for the primary calling header

#ifndef VERILATED_VCOMPUTEUNITE2EHARNESS_ROPEPAIRCORE_H_
#define VERILATED_VCOMPUTEUNITE2EHARNESS_ROPEPAIRCORE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VComputeUnitE2EHarness__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputeUnitE2EHarness_RopePairCore final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_x_even,7,0);
    VL_IN8(io_x_odd,7,0);
    VL_IN8(io_in_valid,0,0);
    VL_IN8(io_stall,0,0);
    VL_IN8(io_lut_cos_wr_en,0,0);
    VL_IN8(io_lut_sin_wr_en,0,0);
    VL_IN8(io_lut_wr_addr,6,0);
    VL_OUT8(io_y_even,7,0);
    VL_OUT8(io_y_odd,7,0);
    VL_OUT8(io_out_valid,0,0);
    VL_OUT8(io_lut_ready,0,0);
    VL_OUT8(io_sync_alert,0,0);
    CData/*0:0*/ __PVT__cosLut_io_rd_en;
    CData/*7:0*/ __PVT__xEvenD1;
    CData/*7:0*/ __PVT__xOddD1;
    CData/*0:0*/ __PVT__coeffValid;
    CData/*7:0*/ __PVT__rawEven;
    CData/*7:0*/ __PVT__rawOdd;
    CData/*0:0*/ __PVT__holdValid;
    CData/*7:0*/ __PVT__holdEven;
    CData/*7:0*/ __PVT__holdOdd;
    CData/*0:0*/ __PVT___GEN_3;
    CData/*0:0*/ __PVT__expectedRd;
    CData/*0:0*/ __PVT__expectedCosWr;
    CData/*0:0*/ __PVT__expectedSinWr;
    CData/*6:0*/ __PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0;
    CData/*0:0*/ __PVT__cosLut__DOT__io_wr_valid_REG;
    CData/*0:0*/ __PVT__cosLut__DOT__is_programmed;
    CData/*0:0*/ __PVT__cosLut__DOT__last_write_ack;
    CData/*0:0*/ __PVT__cosLut__DOT___GEN_12;
    CData/*2:0*/ __PVT__cosLut__DOT__rd_col_delayed;
    CData/*0:0*/ __PVT__cosLut__DOT__io_rd_valid_REG;
    CData/*0:0*/ __PVT__sinLut__DOT__io_wr_valid_REG;
    CData/*0:0*/ __PVT__sinLut__DOT__is_programmed;
    CData/*0:0*/ __PVT__sinLut__DOT__last_write_ack;
    CData/*0:0*/ __PVT__sinLut__DOT___GEN_12;
    VL_IN16(io_angle_idx,9,0);
    VL_IN16(io_lut_wr_data_0,15,0);
    VL_IN16(io_lut_wr_data_1,15,0);
    VL_IN16(io_lut_wr_data_2,15,0);
    VL_IN16(io_lut_wr_data_3,15,0);
    VL_IN16(io_lut_wr_data_4,15,0);
    VL_IN16(io_lut_wr_data_5,15,0);
    VL_IN16(io_lut_wr_data_6,15,0);
    VL_IN16(io_lut_wr_data_7,15,0);
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_0;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_1;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_2;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_3;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_4;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_5;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_6;
    VlUnpacked<SData/*15:0*/, 128> __PVT__cosLut__DOT__lut_mem_7;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_0;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_1;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_2;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_3;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_4;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_5;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_6;
    VlUnpacked<SData/*15:0*/, 128> __PVT__sinLut__DOT__lut_mem_7;

    // INTERNAL VARIABLES
    VComputeUnitE2EHarness__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputeUnitE2EHarness_RopePairCore(VComputeUnitE2EHarness__Syms* symsp, const char* v__name);
    ~VComputeUnitE2EHarness_RopePairCore();
    VL_UNCOPYABLE(VComputeUnitE2EHarness_RopePairCore);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
