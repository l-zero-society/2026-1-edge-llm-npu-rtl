// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRopeUnit.h for the primary calling header

#ifndef VERILATED_VROPEUNIT___024ROOT_H_
#define VERILATED_VROPEUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class VRopeUnit_RopePairCore;


class VRopeUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRopeUnit___024root final : public VerilatedModule {
  public:
    // CELLS
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_0;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_1;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_2;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_3;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_4;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_5;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_6;
    VRopeUnit_RopePairCore* __PVT__RopeUnit__DOT__pairs_7;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_in_vec_0,7,0);
        VL_IN8(io_in_vec_1,7,0);
        VL_IN8(io_in_vec_2,7,0);
        VL_IN8(io_in_vec_3,7,0);
        VL_IN8(io_in_vec_4,7,0);
        VL_IN8(io_in_vec_5,7,0);
        VL_IN8(io_in_vec_6,7,0);
        VL_IN8(io_in_vec_7,7,0);
        VL_IN8(io_in_vec_8,7,0);
        VL_IN8(io_in_vec_9,7,0);
        VL_IN8(io_in_vec_10,7,0);
        VL_IN8(io_in_vec_11,7,0);
        VL_IN8(io_in_vec_12,7,0);
        VL_IN8(io_in_vec_13,7,0);
        VL_IN8(io_in_vec_14,7,0);
        VL_IN8(io_in_vec_15,7,0);
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
        VL_IN8(io_rope_en,0,0);
        VL_IN8(io_stall,0,0);
        VL_IN8(io_soft_reset,0,0);
        VL_IN8(io_row_change_update,0,0);
        VL_IN8(io_position_init,0,0);
        VL_OUT8(io_freq_req_block,0,0);
        VL_IN8(io_freq_block_valid,0,0);
        VL_IN8(io_lut_cos_wr_en,0,0);
        VL_IN8(io_lut_sin_wr_en,0,0);
        VL_IN8(io_lut_wr_addr,6,0);
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
        VL_OUT8(io_prefetch_ready,0,0);
        VL_OUT8(io_lut_ready,0,0);
        VL_OUT8(io_sync_alert,0,0);
        CData/*0:0*/ RopeUnit__DOT__pairs_0_io_in_valid;
        CData/*0:0*/ RopeUnit__DOT__inputFire;
        CData/*3:0*/ RopeUnit__DOT__rowCounter;
        CData/*0:0*/ RopeUnit__DOT__tileEnd;
        CData/*3:0*/ RopeUnit__DOT___rowCounter_T_1;
        CData/*0:0*/ RopeUnit__DOT__activeMValid;
        CData/*0:0*/ RopeUnit__DOT__shadowMValid;
        CData/*0:0*/ RopeUnit__DOT___GEN_4;
        CData/*0:0*/ RopeUnit__DOT___T_3;
        CData/*0:0*/ RopeUnit__DOT___GEN_6;
        CData/*0:0*/ RopeUnit__DOT___GEN_8;
        CData/*0:0*/ RopeUnit__DOT__activeFreqValid;
        CData/*0:0*/ RopeUnit__DOT__shadowFreqValid;
        CData/*0:0*/ RopeUnit__DOT__freqReqOutstanding;
        CData/*0:0*/ RopeUnit__DOT__freqHalf;
        CData/*0:0*/ RopeUnit__DOT__completesBlock;
        CData/*0:0*/ RopeUnit__DOT__nextBlockAvailable;
        CData/*0:0*/ RopeUnit__DOT___GEN_17;
        CData/*0:0*/ RopeUnit__DOT___GEN_35;
        CData/*0:0*/ RopeUnit__DOT___GEN_71;
        CData/*0:0*/ RopeUnit__DOT___GEN_105;
        CData/*0:0*/ RopeUnit__DOT__primed;
        CData/*0:0*/ RopeUnit__DOT___GEN_322;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(io_freq_block_in_0,15,0);
        VL_IN16(io_freq_block_in_1,15,0);
        VL_IN16(io_freq_block_in_2,15,0);
        VL_IN16(io_freq_block_in_3,15,0);
        VL_IN16(io_freq_block_in_4,15,0);
        VL_IN16(io_freq_block_in_5,15,0);
        VL_IN16(io_freq_block_in_6,15,0);
        VL_IN16(io_freq_block_in_7,15,0);
        VL_IN16(io_freq_block_in_8,15,0);
        VL_IN16(io_freq_block_in_9,15,0);
        VL_IN16(io_freq_block_in_10,15,0);
        VL_IN16(io_freq_block_in_11,15,0);
        VL_IN16(io_freq_block_in_12,15,0);
        VL_IN16(io_freq_block_in_13,15,0);
        VL_IN16(io_freq_block_in_14,15,0);
        VL_IN16(io_freq_block_in_15,15,0);
        VL_IN16(io_lut_wr_data_0,15,0);
        VL_IN16(io_lut_wr_data_1,15,0);
        VL_IN16(io_lut_wr_data_2,15,0);
        VL_IN16(io_lut_wr_data_3,15,0);
        VL_IN16(io_lut_wr_data_4,15,0);
        VL_IN16(io_lut_wr_data_5,15,0);
    };
    struct {
        VL_IN16(io_lut_wr_data_6,15,0);
        VL_IN16(io_lut_wr_data_7,15,0);
        SData/*9:0*/ RopeUnit__DOT__pairs_0_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_1_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_2_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_3_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_4_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_5_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_6_io_angle_idx;
        SData/*9:0*/ RopeUnit__DOT__pairs_7_io_angle_idx;
        SData/*15:0*/ RopeUnit__DOT___anyValid_T;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_0;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_1;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_2;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_3;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_4;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_5;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_6;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_7;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_8;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_9;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_10;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_11;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_12;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_13;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_14;
        SData/*15:0*/ RopeUnit__DOT__activeFreqBlock_15;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_0;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_1;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_2;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_3;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_4;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_5;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_6;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_7;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_8;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_9;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_10;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_11;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_12;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_13;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_14;
        SData/*15:0*/ RopeUnit__DOT__shadowFreqBlock_15;
        SData/*15:0*/ RopeUnit__DOT___GEN_55;
        SData/*15:0*/ RopeUnit__DOT___GEN_56;
        SData/*15:0*/ RopeUnit__DOT___GEN_57;
        SData/*15:0*/ RopeUnit__DOT___GEN_58;
        SData/*15:0*/ RopeUnit__DOT___GEN_59;
        SData/*15:0*/ RopeUnit__DOT___GEN_60;
        SData/*15:0*/ RopeUnit__DOT___GEN_61;
        SData/*15:0*/ RopeUnit__DOT___GEN_62;
        SData/*15:0*/ RopeUnit__DOT___GEN_63;
        SData/*15:0*/ RopeUnit__DOT___GEN_64;
        SData/*15:0*/ RopeUnit__DOT___GEN_65;
        SData/*15:0*/ RopeUnit__DOT___GEN_66;
        SData/*15:0*/ RopeUnit__DOT___GEN_67;
        SData/*15:0*/ RopeUnit__DOT___GEN_68;
        SData/*15:0*/ RopeUnit__DOT___GEN_69;
        SData/*15:0*/ RopeUnit__DOT___GEN_70;
        SData/*15:0*/ RopeUnit__DOT___GEN_72;
        SData/*15:0*/ RopeUnit__DOT___GEN_73;
        SData/*15:0*/ RopeUnit__DOT___GEN_74;
        SData/*15:0*/ RopeUnit__DOT___GEN_75;
        SData/*15:0*/ RopeUnit__DOT___GEN_76;
    };
    struct {
        SData/*15:0*/ RopeUnit__DOT___GEN_77;
        SData/*15:0*/ RopeUnit__DOT___GEN_78;
        SData/*15:0*/ RopeUnit__DOT___GEN_79;
        SData/*15:0*/ RopeUnit__DOT___GEN_80;
        SData/*15:0*/ RopeUnit__DOT___GEN_81;
        SData/*15:0*/ RopeUnit__DOT___GEN_82;
        SData/*15:0*/ RopeUnit__DOT___GEN_83;
        SData/*15:0*/ RopeUnit__DOT___GEN_84;
        SData/*15:0*/ RopeUnit__DOT___GEN_85;
        SData/*15:0*/ RopeUnit__DOT___GEN_86;
        SData/*15:0*/ RopeUnit__DOT___GEN_87;
        VL_IN(io_base_m_in,31,0);
        IData/*31:0*/ RopeUnit__DOT__activeMBase;
        IData/*31:0*/ RopeUnit__DOT__shadowMBase;
        IData/*31:0*/ RopeUnit__DOT___GEN_3;
        IData/*31:0*/ RopeUnit__DOT___shadowMBase_T_1;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRopeUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRopeUnit___024root(VRopeUnit__Syms* symsp, const char* v__name);
    ~VRopeUnit___024root();
    VL_UNCOPYABLE(VRopeUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
