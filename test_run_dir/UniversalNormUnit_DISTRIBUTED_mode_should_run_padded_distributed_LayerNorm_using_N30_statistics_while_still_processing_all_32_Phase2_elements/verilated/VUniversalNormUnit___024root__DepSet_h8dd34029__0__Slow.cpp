// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUniversalNormUnit.h for the primary calling header

#include "VUniversalNormUnit__pch.h"
#include "VUniversalNormUnit__Syms.h"
#include "VUniversalNormUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VUniversalNormUnit___024root___dump_triggers__stl(VUniversalNormUnit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VUniversalNormUnit___024root___eval_triggers__stl(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUniversalNormUnit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VUniversalNormUnit___024root___stl_sequent__TOP__0(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ UniversalNormUnit__DOT__softContextFifo_io_enq_valid;
    UniversalNormUnit__DOT__softContextFifo_io_enq_valid = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready;
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow;
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distributedLastBeat;
    UniversalNormUnit__DOT__distributedLastBeat = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats;
    UniversalNormUnit__DOT__validForStats = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_1;
    UniversalNormUnit__DOT__validForStats_1 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_2;
    UniversalNormUnit__DOT__validForStats_2 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_3;
    UniversalNormUnit__DOT__validForStats_3 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_4;
    UniversalNormUnit__DOT__validForStats_4 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_5;
    UniversalNormUnit__DOT__validForStats_5 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_6;
    UniversalNormUnit__DOT__validForStats_6 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_7;
    UniversalNormUnit__DOT__validForStats_7 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_8;
    UniversalNormUnit__DOT__validForStats_8 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_9;
    UniversalNormUnit__DOT__validForStats_9 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_10;
    UniversalNormUnit__DOT__validForStats_10 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_11;
    UniversalNormUnit__DOT__validForStats_11 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_12;
    UniversalNormUnit__DOT__validForStats_12 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_13;
    UniversalNormUnit__DOT__validForStats_13 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_14;
    UniversalNormUnit__DOT__validForStats_14 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_15;
    UniversalNormUnit__DOT__validForStats_15 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT___T_35;
    UniversalNormUnit__DOT___T_35 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__scaleLookupFire;
    UniversalNormUnit__DOT__scaleLookupFire = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_1;
    UniversalNormUnit__DOT__layerPair_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2;
    UniversalNormUnit__DOT__layerPair_ex2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq;
    UniversalNormUnit__DOT__layerPair_meanSq = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat;
    UniversalNormUnit__DOT__stat = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz;
    UniversalNormUnit__DOT__normPair_lz = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_1;
    UniversalNormUnit__DOT__layerPair_ex2_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_1;
    UniversalNormUnit__DOT__layerPair_meanSq_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_1;
    UniversalNormUnit__DOT__stat_1 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_1;
    UniversalNormUnit__DOT__normPair_lz_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_2;
    UniversalNormUnit__DOT__layerPair_ex2_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_2;
    UniversalNormUnit__DOT__layerPair_meanSq_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_2;
    UniversalNormUnit__DOT__stat_2 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_2;
    UniversalNormUnit__DOT__normPair_lz_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_3;
    UniversalNormUnit__DOT__layerPair_ex2_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_3;
    UniversalNormUnit__DOT__layerPair_meanSq_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_3;
    UniversalNormUnit__DOT__stat_3 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_3;
    UniversalNormUnit__DOT__normPair_lz_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_4;
    UniversalNormUnit__DOT__layerPair_ex2_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_4;
    UniversalNormUnit__DOT__layerPair_meanSq_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_4;
    UniversalNormUnit__DOT__stat_4 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_4;
    UniversalNormUnit__DOT__normPair_lz_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_5;
    UniversalNormUnit__DOT__layerPair_ex2_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_5;
    UniversalNormUnit__DOT__layerPair_meanSq_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_5;
    UniversalNormUnit__DOT__stat_5 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_5;
    UniversalNormUnit__DOT__normPair_lz_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_6;
    UniversalNormUnit__DOT__layerPair_ex2_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_6;
    UniversalNormUnit__DOT__layerPair_meanSq_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_6;
    UniversalNormUnit__DOT__stat_6 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_6;
    UniversalNormUnit__DOT__normPair_lz_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_7;
    UniversalNormUnit__DOT__layerPair_ex2_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_7;
    UniversalNormUnit__DOT__layerPair_meanSq_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_7;
    UniversalNormUnit__DOT__stat_7 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_7;
    UniversalNormUnit__DOT__normPair_lz_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_8;
    UniversalNormUnit__DOT__layerPair_ex2_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_8;
    UniversalNormUnit__DOT__layerPair_meanSq_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_8;
    UniversalNormUnit__DOT__stat_8 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_8;
    UniversalNormUnit__DOT__normPair_lz_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_9;
    UniversalNormUnit__DOT__layerPair_ex2_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_9;
    UniversalNormUnit__DOT__layerPair_meanSq_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_9;
    UniversalNormUnit__DOT__stat_9 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_9;
    UniversalNormUnit__DOT__normPair_lz_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_10;
    UniversalNormUnit__DOT__layerPair_ex2_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_10;
    UniversalNormUnit__DOT__layerPair_meanSq_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_10;
    UniversalNormUnit__DOT__stat_10 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_10;
    UniversalNormUnit__DOT__normPair_lz_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_11;
    UniversalNormUnit__DOT__layerPair_ex2_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_11;
    UniversalNormUnit__DOT__layerPair_meanSq_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_11;
    UniversalNormUnit__DOT__stat_11 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_11;
    UniversalNormUnit__DOT__normPair_lz_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_12;
    UniversalNormUnit__DOT__layerPair_ex2_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_12;
    UniversalNormUnit__DOT__layerPair_meanSq_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_12;
    UniversalNormUnit__DOT__stat_12 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_12;
    UniversalNormUnit__DOT__normPair_lz_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_13;
    UniversalNormUnit__DOT__layerPair_ex2_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_13;
    UniversalNormUnit__DOT__layerPair_meanSq_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_13;
    UniversalNormUnit__DOT__stat_13 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_13;
    UniversalNormUnit__DOT__normPair_lz_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_14;
    UniversalNormUnit__DOT__layerPair_ex2_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_14;
    UniversalNormUnit__DOT__layerPair_meanSq_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_14;
    UniversalNormUnit__DOT__stat_14 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_14;
    UniversalNormUnit__DOT__normPair_lz_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_15;
    UniversalNormUnit__DOT__layerPair_ex2_15 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_15;
    UniversalNormUnit__DOT__layerPair_meanSq_15 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_15;
    UniversalNormUnit__DOT__stat_15 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_15;
    UniversalNormUnit__DOT__normPair_lz_15 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_16;
    UniversalNormUnit__DOT__layerPair_ex2_16 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_16;
    UniversalNormUnit__DOT__layerPair_meanSq_16 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__distributedPhase2Max;
    UniversalNormUnit__DOT__distributedPhase2Max = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max;
    UniversalNormUnit__DOT__phase2Max = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag;
    UniversalNormUnit__DOT__phase2Addr_mag = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_1;
    UniversalNormUnit__DOT__phase2Max_1 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_1;
    UniversalNormUnit__DOT__phase2Addr_mag_1 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_2;
    UniversalNormUnit__DOT__phase2Max_2 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_2;
    UniversalNormUnit__DOT__phase2Addr_mag_2 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_3;
    UniversalNormUnit__DOT__phase2Max_3 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_3;
    UniversalNormUnit__DOT__phase2Addr_mag_3 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_4;
    UniversalNormUnit__DOT__phase2Max_4 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_4;
    UniversalNormUnit__DOT__phase2Addr_mag_4 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_5;
    UniversalNormUnit__DOT__phase2Max_5 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_5;
    UniversalNormUnit__DOT__phase2Addr_mag_5 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_6;
    UniversalNormUnit__DOT__phase2Max_6 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_6;
    UniversalNormUnit__DOT__phase2Addr_mag_6 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_7;
    UniversalNormUnit__DOT__phase2Max_7 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_7;
    UniversalNormUnit__DOT__phase2Addr_mag_7 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_8;
    UniversalNormUnit__DOT__phase2Max_8 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_8;
    UniversalNormUnit__DOT__phase2Addr_mag_8 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_9;
    UniversalNormUnit__DOT__phase2Max_9 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_9;
    UniversalNormUnit__DOT__phase2Addr_mag_9 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_10;
    UniversalNormUnit__DOT__phase2Max_10 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_10;
    UniversalNormUnit__DOT__phase2Addr_mag_10 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_11;
    UniversalNormUnit__DOT__phase2Max_11 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_11;
    UniversalNormUnit__DOT__phase2Addr_mag_11 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_12;
    UniversalNormUnit__DOT__phase2Max_12 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_12;
    UniversalNormUnit__DOT__phase2Addr_mag_12 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_13;
    UniversalNormUnit__DOT__phase2Max_13 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_13;
    UniversalNormUnit__DOT__phase2Addr_mag_13 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_14;
    UniversalNormUnit__DOT__phase2Max_14 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_14;
    UniversalNormUnit__DOT__phase2Addr_mag_14 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_15;
    UniversalNormUnit__DOT__phase2Max_15 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Addr_mag_15;
    UniversalNormUnit__DOT__phase2Addr_mag_15 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__rawOutValid;
    UniversalNormUnit__DOT__rawOutValid = 0;
    CData/*0:0*/ UniversalNormUnit__DOT____VdfgTmp_h5ed2dc75__0;
    UniversalNormUnit__DOT____VdfgTmp_h5ed2dc75__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_126;
    VlWide<3>/*95:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    // Body
    vlSelf->io_phase1_out_vec_0 = vlSelf->io_phase1_in_vec_0;
    vlSelf->io_phase1_out_vec_1 = vlSelf->io_phase1_in_vec_1;
    vlSelf->io_phase1_out_vec_2 = vlSelf->io_phase1_in_vec_2;
    vlSelf->io_phase1_out_vec_3 = vlSelf->io_phase1_in_vec_3;
    vlSelf->io_phase1_out_vec_4 = vlSelf->io_phase1_in_vec_4;
    vlSelf->io_phase1_out_vec_5 = vlSelf->io_phase1_in_vec_5;
    vlSelf->io_phase1_out_vec_6 = vlSelf->io_phase1_in_vec_6;
    vlSelf->io_phase1_out_vec_7 = vlSelf->io_phase1_in_vec_7;
    vlSelf->io_phase1_out_vec_8 = vlSelf->io_phase1_in_vec_8;
    vlSelf->io_phase1_out_vec_9 = vlSelf->io_phase1_in_vec_9;
    vlSelf->io_phase1_out_vec_10 = vlSelf->io_phase1_in_vec_10;
    vlSelf->io_phase1_out_vec_11 = vlSelf->io_phase1_in_vec_11;
    vlSelf->io_phase1_out_vec_12 = vlSelf->io_phase1_in_vec_12;
    vlSelf->io_phase1_out_vec_13 = vlSelf->io_phase1_in_vec_13;
    vlSelf->io_phase1_out_vec_14 = vlSelf->io_phase1_in_vec_14;
    vlSelf->io_phase1_out_vec_15 = vlSelf->io_phase1_in_vec_15;
    vlSelf->io_metadata_count = vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count;
    vlSelf->UniversalNormUnit__DOT___distributedPhase2BeatCounter_T_1 
        = ((IData)(1U) + vlSelf->UniversalNormUnit__DOT__distributedPhase2BeatCounter);
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_0_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_0))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_0))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_0)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT___count_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT___count_T_3 
        = (0x3ffU & ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count) 
                     - (IData)(1U)));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___count_T_3 
        = (7U & ((IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count) 
                 - (IData)(1U)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__rdPtr));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__rdPtr)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___count_T_3 
        = (7U & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count) 
                 - (IData)(1U)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_1_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_1))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_1))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_1)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_2_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_2))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_2))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_2)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_3_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_3))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_3))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_3)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_4_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_4))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_4))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_4)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_5_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_5))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_5))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_5)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_6_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_6))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_6))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_6)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_7_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_7))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_7))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_7)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_8_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_8))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_8))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_8)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_9_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_9))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_9))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_9)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_10_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_10))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_10))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_10)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_11_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_11))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_11))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_11)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_12_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_12))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_12))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_12)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_13_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_13))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_13))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_13)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_14_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_14))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_14))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_14)));
    vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_15_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_15))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_15))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleExpRegs_15)));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT___wrPtr_T_2 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__wrPtr)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT___rdPtr_T_2 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__rdPtr)));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__wrPtr));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__wrPtr)));
    vlSelf->UniversalNormUnit__DOT__correctedSumTree_io_in_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->UniversalNormUnit__DOT__correctionHoldValid));
    vlSelf->UniversalNormUnit__DOT___GEN_1328 = ((IData)(vlSelf->UniversalNormUnit__DOT__correctionHoldValid) 
                                                 | (IData)(vlSelf->UniversalNormUnit__DOT__correctionRespValid));
    vlSelf->UniversalNormUnit__DOT___T_131 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_132 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_133 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_134 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_135 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_136 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_137 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_138 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_139 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_140 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_141 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_142 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_143 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_144 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_145 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_146 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_wr_en 
        = ((IData)(vlSelf->io_lut_is_exp) & (IData)(vlSelf->io_lut_wr_en));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_0_io_wr_en 
        = ((~ (IData)(vlSelf->io_lut_is_exp)) & (IData)(vlSelf->io_lut_wr_en));
    vlSelf->io_phase1_out_valid_vec_0 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_0)));
    vlSelf->io_phase1_out_valid_vec_1 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_1)));
    vlSelf->io_phase1_out_valid_vec_2 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_2)));
    vlSelf->io_phase1_out_valid_vec_3 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_3)));
    vlSelf->io_phase1_out_valid_vec_4 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_4)));
    vlSelf->io_phase1_out_valid_vec_5 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_5)));
    vlSelf->io_phase1_out_valid_vec_6 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_6)));
    vlSelf->io_phase1_out_valid_vec_7 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_7)));
    vlSelf->io_phase1_out_valid_vec_8 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_8)));
    vlSelf->io_phase1_out_valid_vec_9 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                         & ((~ (IData)(vlSelf->io_stall)) 
                                            & (IData)(vlSelf->io_phase1_valid_vec_9)));
    vlSelf->io_phase1_out_valid_vec_10 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_10)));
    vlSelf->io_phase1_out_valid_vec_11 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_11)));
    vlSelf->io_phase1_out_valid_vec_12 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_12)));
    vlSelf->io_phase1_out_valid_vec_13 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_13)));
    vlSelf->io_phase1_out_valid_vec_14 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_14)));
    vlSelf->io_phase1_out_valid_vec_15 = ((0U != (IData)(vlSelf->io_mode_sel)) 
                                          & ((~ (IData)(vlSelf->io_stall)) 
                                             & (IData)(vlSelf->io_phase1_valid_vec_15)));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_0))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_0))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_0) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_1 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_1))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_1))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_1) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_2 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_2))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_2))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_2) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_3 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_3))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_3))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_3) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_4 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_4))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_4))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_5 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_5))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_5))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_5) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_6 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_6))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_6))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_6) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_7 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_7))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_7))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_7) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_8 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_8))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_8))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_8) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_9 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_9))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_9))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_9) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_10 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_10))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_10))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_10) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_11 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_11))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_11))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_11) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_12 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_12))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_12))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_12) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_13 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_13))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_13))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_13) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_14 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_14))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_14))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_14) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_15 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_15))
                     ? ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_15))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__distSoftMaxPipe4_15) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__s4))));
    if ((3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_15;
    } else if ((2U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_15;
    } else if ((1U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_15;
    } else {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_15;
    }
    vlSelf->UniversalNormUnit__DOT__distributedCompletedScale_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg))
                     ? (- (IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg))
                     : (IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg)));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_18 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_1 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_19 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_2 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_20 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_3 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_21 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_4 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_22 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_5 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_23 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_6 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_24 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_7 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_25 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_8 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_26 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_9 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_27 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_10 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_28 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_11 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_29 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_12 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_30 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_13 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_31 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_14 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_32 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_15 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_17 
        = ((vlSelf->UniversalNormUnit__DOT__softFinalSum_0 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_33 
        = ((vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__x_32 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_0) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_0));
    vlSelf->UniversalNormUnit__DOT__x_33 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_1) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_1));
    vlSelf->UniversalNormUnit__DOT__x_34 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_2) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_2));
    vlSelf->UniversalNormUnit__DOT__x_35 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_3) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_3));
    vlSelf->UniversalNormUnit__DOT__x_36 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_4) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_4));
    vlSelf->UniversalNormUnit__DOT__x_37 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_5) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_5));
    vlSelf->UniversalNormUnit__DOT__x_38 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_6) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_6));
    vlSelf->UniversalNormUnit__DOT__x_39 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_7) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_7));
    vlSelf->UniversalNormUnit__DOT__x_40 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_8) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_8));
    vlSelf->UniversalNormUnit__DOT__x_41 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_9) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_9));
    vlSelf->UniversalNormUnit__DOT__x_42 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_10) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_10));
    vlSelf->UniversalNormUnit__DOT__x_43 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_11) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_11));
    vlSelf->UniversalNormUnit__DOT__x_44 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_12) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_12));
    vlSelf->UniversalNormUnit__DOT__x_45 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_13) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_13));
    vlSelf->UniversalNormUnit__DOT__x_46 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_14) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_14));
    vlSelf->UniversalNormUnit__DOT__x_47 = (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_15) 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (IData)(vlSelf->UniversalNormUnit__DOT__p2DataD1_15));
    vlSelf->UniversalNormUnit__DOT___rawOutMeta_T = 
        (vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__mem
         [vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__mem_rdData_addr_pipe_0] 
         & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__io_deq_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_ready 
        = ((~ (IData)(vlSelf->io_stall)) & ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)) 
                                            & ((3U 
                                                == (IData)(vlSelf->io_mode_sel)) 
                                               & (IData)(vlSelf->io_layout_mode))));
    UniversalNormUnit__DOT__layerPair_ex2_16 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree__DOT__s4Sq)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_16 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree__DOT__s4Sum)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__scaleReady = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__is_programmed) 
                                                  & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__is_programmed) 
                                                     & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__is_programmed) 
                                                        & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__is_programmed) 
                                                           & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__is_programmed) 
                                                              & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__is_programmed) 
                                                                 & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__is_programmed) 
                                                                    & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__is_programmed) 
                                                                       & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__is_programmed) 
                                                                          & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__is_programmed) 
                                                                             & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__is_programmed) 
                                                                                & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__is_programmed))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__onlineScaleArriving 
        = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__io_rd_valid_REG) 
           & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__io_rd_valid_REG) 
              & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__io_rd_valid_REG) 
                 & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__io_rd_valid_REG) 
                    & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__io_rd_valid_REG) 
                       & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__io_rd_valid_REG) 
                          & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__io_rd_valid_REG) 
                             & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__io_rd_valid_REG) 
                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__io_rd_valid_REG) 
                                   & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__io_rd_valid_REG) 
                                      & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__io_rd_valid_REG) 
                                         & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__io_rd_valid_REG) 
                                            & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__io_rd_valid_REG) 
                                               & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__io_rd_valid_REG) 
                                                  & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__io_rd_valid_REG) 
                                                     & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG))))))))))))))));
    vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2 
        = (0xffffU == ((((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.__PVT__is_programmed) 
                         << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.__PVT__is_programmed) 
                                      << 0xeU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.__PVT__is_programmed) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.__PVT__is_programmed) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.__PVT__is_programmed) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.__PVT__is_programmed) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.__PVT__is_programmed) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.__PVT__is_programmed) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.__PVT__is_programmed) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.__PVT__is_programmed) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.__PVT__is_programmed) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.__PVT__is_programmed) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.__PVT__is_programmed) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.__PVT__is_programmed) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                       & ((((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_15.__PVT__is_programmed) 
                            << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_14.__PVT__is_programmed) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_13.__PVT__is_programmed) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_12.__PVT__is_programmed) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_11.__PVT__is_programmed) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_10.__PVT__is_programmed) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_9.__PVT__is_programmed) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_8.__PVT__is_programmed) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_7.__PVT__is_programmed) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_6.__PVT__is_programmed) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_5.__PVT__is_programmed) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_4.__PVT__is_programmed) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_3.__PVT__is_programmed) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_2.__PVT__is_programmed) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_1.__PVT__is_programmed) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                          & (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__is_programmed) 
                              << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__is_programmed) 
                                           << 0xeU) 
                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__is_programmed) 
                                              << 0xdU) 
                                             | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__is_programmed) 
                                                 << 0xcU) 
                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__is_programmed) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__is_programmed) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__is_programmed) 
                                                          << 9U) 
                                                         | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__is_programmed) 
                                                             << 8U) 
                                                            | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__is_programmed) 
                                                                << 7U) 
                                                               | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__is_programmed) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__is_programmed) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__is_programmed) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__is_programmed) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__is_programmed) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__is_programmed)))))))))))))))))));
    vlSelf->__VdfgTmp_h1872b661__0 = ((IData)(vlSelf->io_layout_mode) 
                                      & (3U == (IData)(vlSelf->io_mode_sel)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_bits_max 
        = ((0U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count))
            ? (IData)(vlSelf->UniversalNormUnit__DOT__globalPendingSoftMaxReg)
            : ((3U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__rdPtr))
                ? (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__mem_3_max)
                : ((2U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__rdPtr))
                    ? (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__mem_2_max)
                    : ((1U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__rdPtr))
                        ? (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__mem_1_max)
                        : (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__mem_0_max)))));
    vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal 
        = ((~ (IData)(vlSelf->io_layout_mode)) & ((~ (IData)(vlSelf->io_stall)) 
                                                  & (((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15) 
                                                      & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14) 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13) 
                                                            & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12) 
                                                               & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11) 
                                                                  & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10) 
                                                                     & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9) 
                                                                        & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8) 
                                                                           & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7) 
                                                                              & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6) 
                                                                                & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5) 
                                                                                & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4) 
                                                                                & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3) 
                                                                                & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2) 
                                                                                & ((IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1) 
                                                                                & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0)))))))))))))))) 
                                                     & (3U 
                                                        == (IData)(vlSelf->io_mode_sel)))));
    vlSelf->UniversalNormUnit__DOT___T_152 = ((IData)(vlSelf->UniversalNormUnit__DOT__phase2SoftResp) 
                                              & (3U 
                                                 == (IData)(vlSelf->io_mode_sel)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid 
        = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG) 
           & (IData)(vlSelf->io_layout_mode));
    vlSelf->UniversalNormUnit__DOT__expRespValid = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_0) 
         & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_1 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_1) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_2 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_2) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_3 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_3) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_4 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_4) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_5 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_5) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_6 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_6) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_7 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_7) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_8 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_8) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_9 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_9) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_10) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_11) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_12) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_13) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_14) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__expRespValid_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_15) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T = ((1U == (IData)(vlSelf->io_mode_sel)) 
                                          | (2U == (IData)(vlSelf->io_mode_sel)));
    vlSelf->UniversalNormUnit__DOT___p2AnyValid_T = 
        (((IData)(vlSelf->io_phase2_valid_vec_15) << 0xfU) 
         | (((IData)(vlSelf->io_phase2_valid_vec_14) 
             << 0xeU) | (((IData)(vlSelf->io_phase2_valid_vec_13) 
                          << 0xdU) | (((IData)(vlSelf->io_phase2_valid_vec_12) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->io_phase2_valid_vec_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->io_phase2_valid_vec_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->io_phase2_valid_vec_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->io_phase2_valid_vec_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->io_phase2_valid_vec_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->io_phase2_valid_vec_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->io_phase2_valid_vec_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->io_phase2_valid_vec_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->io_phase2_valid_vec_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->io_phase2_valid_vec_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->io_phase2_valid_vec_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->io_phase2_valid_vec_0))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat 
        = ((0U == (0xfU & vlSelf->io_logical_vector_length))
            ? 0x10U : (0xfU & vlSelf->io_logical_vector_length));
    vlSelf->UniversalNormUnit__DOT__logicalLengthSafe 
        = ((0U == vlSelf->io_logical_vector_length)
            ? 1U : vlSelf->io_logical_vector_length);
    vlSelf->UniversalNormUnit__DOT___p1AnyValid_T = 
        (((IData)(vlSelf->io_phase1_valid_vec_15) << 0xfU) 
         | (((IData)(vlSelf->io_phase1_valid_vec_14) 
             << 0xeU) | (((IData)(vlSelf->io_phase1_valid_vec_13) 
                          << 0xdU) | (((IData)(vlSelf->io_phase1_valid_vec_12) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->io_phase1_valid_vec_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->io_phase1_valid_vec_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->io_phase1_valid_vec_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->io_phase1_valid_vec_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->io_phase1_valid_vec_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->io_phase1_valid_vec_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->io_phase1_valid_vec_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->io_phase1_valid_vec_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->io_phase1_valid_vec_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->io_phase1_valid_vec_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->io_phase1_valid_vec_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->io_phase1_valid_vec_0))))))))))))))));
    UniversalNormUnit__DOT____VdfgTmp_h5ed2dc75__0 
        = ((~ (IData)(vlSelf->io_stall)) & (0U != (IData)(vlSelf->io_mode_sel)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_1_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_1))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_1)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_2_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_2))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_2)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_3_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_3))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_3)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_4_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_4))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_4)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_5_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_5))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_5)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_6_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_6))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_6)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_7_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_7))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_7)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_8_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_8))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_8)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_9_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_9))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_9)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_10_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_10))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_10)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_11_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_11))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_11)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_12_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_12))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_12)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_13_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_13))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_13)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_14_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_14))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_14)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_15_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_15))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_15)));
    vlSelf->UniversalNormUnit__DOT___scaleExpCapture_0_T_5 
        = (0xffU & (((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                      ? (0x1fU & ((IData)(0x1fU) - (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_17)))
                      : 0U) - (IData)(0xeU)));
    vlSelf->UniversalNormUnit__DOT___scaleExpCapture_0_T_9 
        = (0xffU & (((0U != vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                      ? (0x1fU & ((IData)(0x1fU) - (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_33)))
                      : 0U) - (IData)(0xeU)));
    VL_EXTENDS_WI(69,32, __Vtemp_3, ((2U == (IData)(vlSelf->io_mode_sel))
                                      ? (vlSelf->UniversalNormUnit__DOT__x_32 
                                         - ((IData)(vlSelf->io_layout_mode)
                                             ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                             : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_0))
                                      : vlSelf->UniversalNormUnit__DOT__x_32));
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (0x1fU & __Vtemp_3[2U]);
    vlSelf->UniversalNormUnit__DOT__scale = ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_0);
    VL_EXTENDS_WQ(69,37, __Vtemp_6, vlSelf->UniversalNormUnit__DOT__scale);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (0x1fU & __Vtemp_6[2U]);
    VL_MULS_WWW(69, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    vlSelf->UniversalNormUnit__DOT__product_16[0U] 
        = __Vtemp_8[0U];
    vlSelf->UniversalNormUnit__DOT__product_16[1U] 
        = __Vtemp_8[1U];
    vlSelf->UniversalNormUnit__DOT__product_16[2U] 
        = (0x1fU & __Vtemp_8[2U]);
    vlSelf->UniversalNormUnit__DOT__product_32 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale));
    VL_EXTENDS_WI(69,32, __Vtemp_11, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_33 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_1))
                                       : vlSelf->UniversalNormUnit__DOT__x_33));
    __Vtemp_12[0U] = __Vtemp_11[0U];
    __Vtemp_12[1U] = __Vtemp_11[1U];
    __Vtemp_12[2U] = (0x1fU & __Vtemp_11[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_1 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_1);
    VL_EXTENDS_WQ(69,37, __Vtemp_14, vlSelf->UniversalNormUnit__DOT__scale_1);
    __Vtemp_15[0U] = __Vtemp_14[0U];
    __Vtemp_15[1U] = __Vtemp_14[1U];
    __Vtemp_15[2U] = (0x1fU & __Vtemp_14[2U]);
    VL_MULS_WWW(69, __Vtemp_16, __Vtemp_12, __Vtemp_15);
    vlSelf->UniversalNormUnit__DOT__product_17[0U] 
        = __Vtemp_16[0U];
    vlSelf->UniversalNormUnit__DOT__product_17[1U] 
        = __Vtemp_16[1U];
    vlSelf->UniversalNormUnit__DOT__product_17[2U] 
        = (0x1fU & __Vtemp_16[2U]);
    vlSelf->UniversalNormUnit__DOT__product_33 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_1));
    VL_EXTENDS_WI(69,32, __Vtemp_19, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_34 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_2))
                                       : vlSelf->UniversalNormUnit__DOT__x_34));
    __Vtemp_20[0U] = __Vtemp_19[0U];
    __Vtemp_20[1U] = __Vtemp_19[1U];
    __Vtemp_20[2U] = (0x1fU & __Vtemp_19[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_2 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_2);
    VL_EXTENDS_WQ(69,37, __Vtemp_22, vlSelf->UniversalNormUnit__DOT__scale_2);
    __Vtemp_23[0U] = __Vtemp_22[0U];
    __Vtemp_23[1U] = __Vtemp_22[1U];
    __Vtemp_23[2U] = (0x1fU & __Vtemp_22[2U]);
    VL_MULS_WWW(69, __Vtemp_24, __Vtemp_20, __Vtemp_23);
    vlSelf->UniversalNormUnit__DOT__product_18[0U] 
        = __Vtemp_24[0U];
    vlSelf->UniversalNormUnit__DOT__product_18[1U] 
        = __Vtemp_24[1U];
    vlSelf->UniversalNormUnit__DOT__product_18[2U] 
        = (0x1fU & __Vtemp_24[2U]);
    vlSelf->UniversalNormUnit__DOT__product_34 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_2));
    VL_EXTENDS_WI(69,32, __Vtemp_27, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_35 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_3))
                                       : vlSelf->UniversalNormUnit__DOT__x_35));
    __Vtemp_28[0U] = __Vtemp_27[0U];
    __Vtemp_28[1U] = __Vtemp_27[1U];
    __Vtemp_28[2U] = (0x1fU & __Vtemp_27[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_3 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_3);
    VL_EXTENDS_WQ(69,37, __Vtemp_30, vlSelf->UniversalNormUnit__DOT__scale_3);
    __Vtemp_31[0U] = __Vtemp_30[0U];
    __Vtemp_31[1U] = __Vtemp_30[1U];
    __Vtemp_31[2U] = (0x1fU & __Vtemp_30[2U]);
    VL_MULS_WWW(69, __Vtemp_32, __Vtemp_28, __Vtemp_31);
    vlSelf->UniversalNormUnit__DOT__product_19[0U] 
        = __Vtemp_32[0U];
    vlSelf->UniversalNormUnit__DOT__product_19[1U] 
        = __Vtemp_32[1U];
    vlSelf->UniversalNormUnit__DOT__product_19[2U] 
        = (0x1fU & __Vtemp_32[2U]);
    vlSelf->UniversalNormUnit__DOT__product_35 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_3));
    VL_EXTENDS_WI(69,32, __Vtemp_35, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_36 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_4))
                                       : vlSelf->UniversalNormUnit__DOT__x_36));
    __Vtemp_36[0U] = __Vtemp_35[0U];
    __Vtemp_36[1U] = __Vtemp_35[1U];
    __Vtemp_36[2U] = (0x1fU & __Vtemp_35[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_4 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_4);
    VL_EXTENDS_WQ(69,37, __Vtemp_38, vlSelf->UniversalNormUnit__DOT__scale_4);
    __Vtemp_39[0U] = __Vtemp_38[0U];
    __Vtemp_39[1U] = __Vtemp_38[1U];
    __Vtemp_39[2U] = (0x1fU & __Vtemp_38[2U]);
    VL_MULS_WWW(69, __Vtemp_40, __Vtemp_36, __Vtemp_39);
    vlSelf->UniversalNormUnit__DOT__product_20[0U] 
        = __Vtemp_40[0U];
    vlSelf->UniversalNormUnit__DOT__product_20[1U] 
        = __Vtemp_40[1U];
    vlSelf->UniversalNormUnit__DOT__product_20[2U] 
        = (0x1fU & __Vtemp_40[2U]);
    vlSelf->UniversalNormUnit__DOT__product_36 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_4));
    VL_EXTENDS_WI(69,32, __Vtemp_43, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_37 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_5))
                                       : vlSelf->UniversalNormUnit__DOT__x_37));
    __Vtemp_44[0U] = __Vtemp_43[0U];
    __Vtemp_44[1U] = __Vtemp_43[1U];
    __Vtemp_44[2U] = (0x1fU & __Vtemp_43[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_5 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_5);
    VL_EXTENDS_WQ(69,37, __Vtemp_46, vlSelf->UniversalNormUnit__DOT__scale_5);
    __Vtemp_47[0U] = __Vtemp_46[0U];
    __Vtemp_47[1U] = __Vtemp_46[1U];
    __Vtemp_47[2U] = (0x1fU & __Vtemp_46[2U]);
    VL_MULS_WWW(69, __Vtemp_48, __Vtemp_44, __Vtemp_47);
    vlSelf->UniversalNormUnit__DOT__product_21[0U] 
        = __Vtemp_48[0U];
    vlSelf->UniversalNormUnit__DOT__product_21[1U] 
        = __Vtemp_48[1U];
    vlSelf->UniversalNormUnit__DOT__product_21[2U] 
        = (0x1fU & __Vtemp_48[2U]);
    vlSelf->UniversalNormUnit__DOT__product_37 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_5));
    VL_EXTENDS_WI(69,32, __Vtemp_51, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_38 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_6))
                                       : vlSelf->UniversalNormUnit__DOT__x_38));
    __Vtemp_52[0U] = __Vtemp_51[0U];
    __Vtemp_52[1U] = __Vtemp_51[1U];
    __Vtemp_52[2U] = (0x1fU & __Vtemp_51[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_6 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_6);
    VL_EXTENDS_WQ(69,37, __Vtemp_54, vlSelf->UniversalNormUnit__DOT__scale_6);
    __Vtemp_55[0U] = __Vtemp_54[0U];
    __Vtemp_55[1U] = __Vtemp_54[1U];
    __Vtemp_55[2U] = (0x1fU & __Vtemp_54[2U]);
    VL_MULS_WWW(69, __Vtemp_56, __Vtemp_52, __Vtemp_55);
    vlSelf->UniversalNormUnit__DOT__product_22[0U] 
        = __Vtemp_56[0U];
    vlSelf->UniversalNormUnit__DOT__product_22[1U] 
        = __Vtemp_56[1U];
    vlSelf->UniversalNormUnit__DOT__product_22[2U] 
        = (0x1fU & __Vtemp_56[2U]);
    vlSelf->UniversalNormUnit__DOT__product_38 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_6));
    VL_EXTENDS_WI(69,32, __Vtemp_59, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_39 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_7))
                                       : vlSelf->UniversalNormUnit__DOT__x_39));
    __Vtemp_60[0U] = __Vtemp_59[0U];
    __Vtemp_60[1U] = __Vtemp_59[1U];
    __Vtemp_60[2U] = (0x1fU & __Vtemp_59[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_7 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_7);
    VL_EXTENDS_WQ(69,37, __Vtemp_62, vlSelf->UniversalNormUnit__DOT__scale_7);
    __Vtemp_63[0U] = __Vtemp_62[0U];
    __Vtemp_63[1U] = __Vtemp_62[1U];
    __Vtemp_63[2U] = (0x1fU & __Vtemp_62[2U]);
    VL_MULS_WWW(69, __Vtemp_64, __Vtemp_60, __Vtemp_63);
    vlSelf->UniversalNormUnit__DOT__product_23[0U] 
        = __Vtemp_64[0U];
    vlSelf->UniversalNormUnit__DOT__product_23[1U] 
        = __Vtemp_64[1U];
    vlSelf->UniversalNormUnit__DOT__product_23[2U] 
        = (0x1fU & __Vtemp_64[2U]);
    vlSelf->UniversalNormUnit__DOT__product_39 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_7));
    VL_EXTENDS_WI(69,32, __Vtemp_67, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_40 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_8))
                                       : vlSelf->UniversalNormUnit__DOT__x_40));
    __Vtemp_68[0U] = __Vtemp_67[0U];
    __Vtemp_68[1U] = __Vtemp_67[1U];
    __Vtemp_68[2U] = (0x1fU & __Vtemp_67[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_8 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_8);
    VL_EXTENDS_WQ(69,37, __Vtemp_70, vlSelf->UniversalNormUnit__DOT__scale_8);
    __Vtemp_71[0U] = __Vtemp_70[0U];
    __Vtemp_71[1U] = __Vtemp_70[1U];
    __Vtemp_71[2U] = (0x1fU & __Vtemp_70[2U]);
    VL_MULS_WWW(69, __Vtemp_72, __Vtemp_68, __Vtemp_71);
    vlSelf->UniversalNormUnit__DOT__product_24[0U] 
        = __Vtemp_72[0U];
    vlSelf->UniversalNormUnit__DOT__product_24[1U] 
        = __Vtemp_72[1U];
    vlSelf->UniversalNormUnit__DOT__product_24[2U] 
        = (0x1fU & __Vtemp_72[2U]);
    vlSelf->UniversalNormUnit__DOT__product_40 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_8));
    VL_EXTENDS_WI(69,32, __Vtemp_75, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_41 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_9))
                                       : vlSelf->UniversalNormUnit__DOT__x_41));
    __Vtemp_76[0U] = __Vtemp_75[0U];
    __Vtemp_76[1U] = __Vtemp_75[1U];
    __Vtemp_76[2U] = (0x1fU & __Vtemp_75[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_9 = ((IData)(vlSelf->io_layout_mode)
                                                ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_9);
    VL_EXTENDS_WQ(69,37, __Vtemp_78, vlSelf->UniversalNormUnit__DOT__scale_9);
    __Vtemp_79[0U] = __Vtemp_78[0U];
    __Vtemp_79[1U] = __Vtemp_78[1U];
    __Vtemp_79[2U] = (0x1fU & __Vtemp_78[2U]);
    VL_MULS_WWW(69, __Vtemp_80, __Vtemp_76, __Vtemp_79);
    vlSelf->UniversalNormUnit__DOT__product_25[0U] 
        = __Vtemp_80[0U];
    vlSelf->UniversalNormUnit__DOT__product_25[1U] 
        = __Vtemp_80[1U];
    vlSelf->UniversalNormUnit__DOT__product_25[2U] 
        = (0x1fU & __Vtemp_80[2U]);
    vlSelf->UniversalNormUnit__DOT__product_41 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_9));
    VL_EXTENDS_WI(69,32, __Vtemp_83, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_42 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_10))
                                       : vlSelf->UniversalNormUnit__DOT__x_42));
    __Vtemp_84[0U] = __Vtemp_83[0U];
    __Vtemp_84[1U] = __Vtemp_83[1U];
    __Vtemp_84[2U] = (0x1fU & __Vtemp_83[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_10 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_10);
    VL_EXTENDS_WQ(69,37, __Vtemp_86, vlSelf->UniversalNormUnit__DOT__scale_10);
    __Vtemp_87[0U] = __Vtemp_86[0U];
    __Vtemp_87[1U] = __Vtemp_86[1U];
    __Vtemp_87[2U] = (0x1fU & __Vtemp_86[2U]);
    VL_MULS_WWW(69, __Vtemp_88, __Vtemp_84, __Vtemp_87);
    vlSelf->UniversalNormUnit__DOT__product_26[0U] 
        = __Vtemp_88[0U];
    vlSelf->UniversalNormUnit__DOT__product_26[1U] 
        = __Vtemp_88[1U];
    vlSelf->UniversalNormUnit__DOT__product_26[2U] 
        = (0x1fU & __Vtemp_88[2U]);
    vlSelf->UniversalNormUnit__DOT__product_42 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_10));
    VL_EXTENDS_WI(69,32, __Vtemp_91, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_43 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_11))
                                       : vlSelf->UniversalNormUnit__DOT__x_43));
    __Vtemp_92[0U] = __Vtemp_91[0U];
    __Vtemp_92[1U] = __Vtemp_91[1U];
    __Vtemp_92[2U] = (0x1fU & __Vtemp_91[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_11 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_11);
    VL_EXTENDS_WQ(69,37, __Vtemp_94, vlSelf->UniversalNormUnit__DOT__scale_11);
    __Vtemp_95[0U] = __Vtemp_94[0U];
    __Vtemp_95[1U] = __Vtemp_94[1U];
    __Vtemp_95[2U] = (0x1fU & __Vtemp_94[2U]);
    VL_MULS_WWW(69, __Vtemp_96, __Vtemp_92, __Vtemp_95);
    vlSelf->UniversalNormUnit__DOT__product_27[0U] 
        = __Vtemp_96[0U];
    vlSelf->UniversalNormUnit__DOT__product_27[1U] 
        = __Vtemp_96[1U];
    vlSelf->UniversalNormUnit__DOT__product_27[2U] 
        = (0x1fU & __Vtemp_96[2U]);
    vlSelf->UniversalNormUnit__DOT__product_43 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_11));
    VL_EXTENDS_WI(69,32, __Vtemp_99, ((2U == (IData)(vlSelf->io_mode_sel))
                                       ? (vlSelf->UniversalNormUnit__DOT__x_44 
                                          - ((IData)(vlSelf->io_layout_mode)
                                              ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                              : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_12))
                                       : vlSelf->UniversalNormUnit__DOT__x_44));
    __Vtemp_100[0U] = __Vtemp_99[0U];
    __Vtemp_100[1U] = __Vtemp_99[1U];
    __Vtemp_100[2U] = (0x1fU & __Vtemp_99[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_12 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_12);
    VL_EXTENDS_WQ(69,37, __Vtemp_102, vlSelf->UniversalNormUnit__DOT__scale_12);
    __Vtemp_103[0U] = __Vtemp_102[0U];
    __Vtemp_103[1U] = __Vtemp_102[1U];
    __Vtemp_103[2U] = (0x1fU & __Vtemp_102[2U]);
    VL_MULS_WWW(69, __Vtemp_104, __Vtemp_100, __Vtemp_103);
    vlSelf->UniversalNormUnit__DOT__product_28[0U] 
        = __Vtemp_104[0U];
    vlSelf->UniversalNormUnit__DOT__product_28[1U] 
        = __Vtemp_104[1U];
    vlSelf->UniversalNormUnit__DOT__product_28[2U] 
        = (0x1fU & __Vtemp_104[2U]);
    vlSelf->UniversalNormUnit__DOT__product_44 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_12));
    VL_EXTENDS_WI(69,32, __Vtemp_107, ((2U == (IData)(vlSelf->io_mode_sel))
                                        ? (vlSelf->UniversalNormUnit__DOT__x_45 
                                           - ((IData)(vlSelf->io_layout_mode)
                                               ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                               : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_13))
                                        : vlSelf->UniversalNormUnit__DOT__x_45));
    __Vtemp_108[0U] = __Vtemp_107[0U];
    __Vtemp_108[1U] = __Vtemp_107[1U];
    __Vtemp_108[2U] = (0x1fU & __Vtemp_107[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_13 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_13);
    VL_EXTENDS_WQ(69,37, __Vtemp_110, vlSelf->UniversalNormUnit__DOT__scale_13);
    __Vtemp_111[0U] = __Vtemp_110[0U];
    __Vtemp_111[1U] = __Vtemp_110[1U];
    __Vtemp_111[2U] = (0x1fU & __Vtemp_110[2U]);
    VL_MULS_WWW(69, __Vtemp_112, __Vtemp_108, __Vtemp_111);
    vlSelf->UniversalNormUnit__DOT__product_29[0U] 
        = __Vtemp_112[0U];
    vlSelf->UniversalNormUnit__DOT__product_29[1U] 
        = __Vtemp_112[1U];
    vlSelf->UniversalNormUnit__DOT__product_29[2U] 
        = (0x1fU & __Vtemp_112[2U]);
    vlSelf->UniversalNormUnit__DOT__product_45 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_13));
    VL_EXTENDS_WI(69,32, __Vtemp_115, ((2U == (IData)(vlSelf->io_mode_sel))
                                        ? (vlSelf->UniversalNormUnit__DOT__x_46 
                                           - ((IData)(vlSelf->io_layout_mode)
                                               ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                               : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_14))
                                        : vlSelf->UniversalNormUnit__DOT__x_46));
    __Vtemp_116[0U] = __Vtemp_115[0U];
    __Vtemp_116[1U] = __Vtemp_115[1U];
    __Vtemp_116[2U] = (0x1fU & __Vtemp_115[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_14 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_14);
    VL_EXTENDS_WQ(69,37, __Vtemp_118, vlSelf->UniversalNormUnit__DOT__scale_14);
    __Vtemp_119[0U] = __Vtemp_118[0U];
    __Vtemp_119[1U] = __Vtemp_118[1U];
    __Vtemp_119[2U] = (0x1fU & __Vtemp_118[2U]);
    VL_MULS_WWW(69, __Vtemp_120, __Vtemp_116, __Vtemp_119);
    vlSelf->UniversalNormUnit__DOT__product_30[0U] 
        = __Vtemp_120[0U];
    vlSelf->UniversalNormUnit__DOT__product_30[1U] 
        = __Vtemp_120[1U];
    vlSelf->UniversalNormUnit__DOT__product_30[2U] 
        = (0x1fU & __Vtemp_120[2U]);
    vlSelf->UniversalNormUnit__DOT__product_46 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_14));
    VL_EXTENDS_WI(69,32, __Vtemp_123, ((2U == (IData)(vlSelf->io_mode_sel))
                                        ? (vlSelf->UniversalNormUnit__DOT__x_47 
                                           - ((IData)(vlSelf->io_layout_mode)
                                               ? vlSelf->UniversalNormUnit__DOT__globalMeanReg
                                               : vlSelf->UniversalNormUnit__DOT__onlineMeanRegs_15))
                                        : vlSelf->UniversalNormUnit__DOT__x_47));
    __Vtemp_124[0U] = __Vtemp_123[0U];
    __Vtemp_124[1U] = __Vtemp_123[1U];
    __Vtemp_124[2U] = (0x1fU & __Vtemp_123[2U]);
    vlSelf->UniversalNormUnit__DOT__scale_15 = ((IData)(vlSelf->io_layout_mode)
                                                 ? vlSelf->UniversalNormUnit__DOT__globalScaleReg
                                                 : vlSelf->UniversalNormUnit__DOT__onlineScaleRegs_15);
    VL_EXTENDS_WQ(69,37, __Vtemp_126, vlSelf->UniversalNormUnit__DOT__scale_15);
    __Vtemp_127[0U] = __Vtemp_126[0U];
    __Vtemp_127[1U] = __Vtemp_126[1U];
    __Vtemp_127[2U] = (0x1fU & __Vtemp_126[2U]);
    VL_MULS_WWW(69, __Vtemp_128, __Vtemp_124, __Vtemp_127);
    vlSelf->UniversalNormUnit__DOT__product_31[0U] 
        = __Vtemp_128[0U];
    vlSelf->UniversalNormUnit__DOT__product_31[1U] 
        = __Vtemp_128[1U];
    vlSelf->UniversalNormUnit__DOT__product_31[2U] 
        = (0x1fU & __Vtemp_128[2U]);
    vlSelf->UniversalNormUnit__DOT__product_47 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_15));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_ready));
    UniversalNormUnit__DOT__layerPair_meanSq_16 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_16), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_16)));
    vlSelf->io_lut_ready = ((IData)(vlSelf->UniversalNormUnit__DOT__scaleReady) 
                            & ((3U != (IData)(vlSelf->io_mode_sel)) 
                               | (IData)(vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_en 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h1872b661__0)));
    vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h1872b661__0)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid) {
        vlSelf->UniversalNormUnit__DOT___GEN_118 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_0) {
            vlSelf->UniversalNormUnit__DOT___GEN_117 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_0;
            vlSelf->UniversalNormUnit__DOT___GEN_115 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0)));
            vlSelf->UniversalNormUnit__DOT___GEN_114 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_0)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_117 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0;
            vlSelf->UniversalNormUnit__DOT___GEN_115 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0));
            vlSelf->UniversalNormUnit__DOT___GEN_114 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_0;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_118 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0));
        vlSelf->UniversalNormUnit__DOT___GEN_117 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_0;
        vlSelf->UniversalNormUnit__DOT___GEN_115 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0));
        vlSelf->UniversalNormUnit__DOT___GEN_114 = vlSelf->UniversalNormUnit__DOT__softFinalMax_0;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_1) {
        vlSelf->UniversalNormUnit__DOT___GEN_176 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_1) {
            vlSelf->UniversalNormUnit__DOT___GEN_175 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_1;
            vlSelf->UniversalNormUnit__DOT___GEN_173 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1)));
            vlSelf->UniversalNormUnit__DOT___GEN_172 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_1)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_175 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1;
            vlSelf->UniversalNormUnit__DOT___GEN_173 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1));
            vlSelf->UniversalNormUnit__DOT___GEN_172 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_1;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_176 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1));
        vlSelf->UniversalNormUnit__DOT___GEN_175 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_1;
        vlSelf->UniversalNormUnit__DOT___GEN_173 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1));
        vlSelf->UniversalNormUnit__DOT___GEN_172 = vlSelf->UniversalNormUnit__DOT__softFinalMax_1;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_2) {
        vlSelf->UniversalNormUnit__DOT___GEN_232 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_2) {
            vlSelf->UniversalNormUnit__DOT___GEN_231 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_2;
            vlSelf->UniversalNormUnit__DOT___GEN_229 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2)));
            vlSelf->UniversalNormUnit__DOT___GEN_228 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_2)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_231 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2;
            vlSelf->UniversalNormUnit__DOT___GEN_229 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2));
            vlSelf->UniversalNormUnit__DOT___GEN_228 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_2;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_232 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2));
        vlSelf->UniversalNormUnit__DOT___GEN_231 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_2;
        vlSelf->UniversalNormUnit__DOT___GEN_229 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2));
        vlSelf->UniversalNormUnit__DOT___GEN_228 = vlSelf->UniversalNormUnit__DOT__softFinalMax_2;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_3) {
        vlSelf->UniversalNormUnit__DOT___GEN_288 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_3) {
            vlSelf->UniversalNormUnit__DOT___GEN_287 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_3;
            vlSelf->UniversalNormUnit__DOT___GEN_285 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3)));
            vlSelf->UniversalNormUnit__DOT___GEN_284 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_3)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_287 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3;
            vlSelf->UniversalNormUnit__DOT___GEN_285 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3));
            vlSelf->UniversalNormUnit__DOT___GEN_284 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_3;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_288 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3));
        vlSelf->UniversalNormUnit__DOT___GEN_287 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_3;
        vlSelf->UniversalNormUnit__DOT___GEN_285 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3));
        vlSelf->UniversalNormUnit__DOT___GEN_284 = vlSelf->UniversalNormUnit__DOT__softFinalMax_3;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_4) {
        vlSelf->UniversalNormUnit__DOT___GEN_344 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_4) {
            vlSelf->UniversalNormUnit__DOT___GEN_343 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_4;
            vlSelf->UniversalNormUnit__DOT___GEN_341 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4)));
            vlSelf->UniversalNormUnit__DOT___GEN_340 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_4)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_343 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4;
            vlSelf->UniversalNormUnit__DOT___GEN_341 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4));
            vlSelf->UniversalNormUnit__DOT___GEN_340 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_4;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_344 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4));
        vlSelf->UniversalNormUnit__DOT___GEN_343 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_4;
        vlSelf->UniversalNormUnit__DOT___GEN_341 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4));
        vlSelf->UniversalNormUnit__DOT___GEN_340 = vlSelf->UniversalNormUnit__DOT__softFinalMax_4;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_5) {
        vlSelf->UniversalNormUnit__DOT___GEN_400 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_5) {
            vlSelf->UniversalNormUnit__DOT___GEN_399 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_5;
            vlSelf->UniversalNormUnit__DOT___GEN_397 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5)));
            vlSelf->UniversalNormUnit__DOT___GEN_396 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_5)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_399 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5;
            vlSelf->UniversalNormUnit__DOT___GEN_397 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5));
            vlSelf->UniversalNormUnit__DOT___GEN_396 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_5;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_400 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5));
        vlSelf->UniversalNormUnit__DOT___GEN_399 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_5;
        vlSelf->UniversalNormUnit__DOT___GEN_397 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5));
        vlSelf->UniversalNormUnit__DOT___GEN_396 = vlSelf->UniversalNormUnit__DOT__softFinalMax_5;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_6) {
        vlSelf->UniversalNormUnit__DOT___GEN_456 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_6) {
            vlSelf->UniversalNormUnit__DOT___GEN_455 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_6;
            vlSelf->UniversalNormUnit__DOT___GEN_453 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6)));
            vlSelf->UniversalNormUnit__DOT___GEN_452 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_6)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_455 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6;
            vlSelf->UniversalNormUnit__DOT___GEN_453 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6));
            vlSelf->UniversalNormUnit__DOT___GEN_452 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_6;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_456 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6));
        vlSelf->UniversalNormUnit__DOT___GEN_455 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_6;
        vlSelf->UniversalNormUnit__DOT___GEN_453 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6));
        vlSelf->UniversalNormUnit__DOT___GEN_452 = vlSelf->UniversalNormUnit__DOT__softFinalMax_6;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_7) {
        vlSelf->UniversalNormUnit__DOT___GEN_512 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_7) {
            vlSelf->UniversalNormUnit__DOT___GEN_511 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_7;
            vlSelf->UniversalNormUnit__DOT___GEN_509 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7)));
            vlSelf->UniversalNormUnit__DOT___GEN_508 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_7)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_511 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7;
            vlSelf->UniversalNormUnit__DOT___GEN_509 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7));
            vlSelf->UniversalNormUnit__DOT___GEN_508 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_7;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_512 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7));
        vlSelf->UniversalNormUnit__DOT___GEN_511 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_7;
        vlSelf->UniversalNormUnit__DOT___GEN_509 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7));
        vlSelf->UniversalNormUnit__DOT___GEN_508 = vlSelf->UniversalNormUnit__DOT__softFinalMax_7;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_8) {
        vlSelf->UniversalNormUnit__DOT___GEN_568 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_8) {
            vlSelf->UniversalNormUnit__DOT___GEN_567 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_8;
            vlSelf->UniversalNormUnit__DOT___GEN_565 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8)));
            vlSelf->UniversalNormUnit__DOT___GEN_564 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_8)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_567 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8;
            vlSelf->UniversalNormUnit__DOT___GEN_565 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8));
            vlSelf->UniversalNormUnit__DOT___GEN_564 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_8;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_568 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8));
        vlSelf->UniversalNormUnit__DOT___GEN_567 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_8;
        vlSelf->UniversalNormUnit__DOT___GEN_565 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8));
        vlSelf->UniversalNormUnit__DOT___GEN_564 = vlSelf->UniversalNormUnit__DOT__softFinalMax_8;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_9) {
        vlSelf->UniversalNormUnit__DOT___GEN_624 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_9) {
            vlSelf->UniversalNormUnit__DOT___GEN_623 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_9;
            vlSelf->UniversalNormUnit__DOT___GEN_621 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9)));
            vlSelf->UniversalNormUnit__DOT___GEN_620 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_9)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_623 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9;
            vlSelf->UniversalNormUnit__DOT___GEN_621 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9));
            vlSelf->UniversalNormUnit__DOT___GEN_620 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_9;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_624 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9));
        vlSelf->UniversalNormUnit__DOT___GEN_623 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_9;
        vlSelf->UniversalNormUnit__DOT___GEN_621 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9));
        vlSelf->UniversalNormUnit__DOT___GEN_620 = vlSelf->UniversalNormUnit__DOT__softFinalMax_9;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_10) {
        vlSelf->UniversalNormUnit__DOT___GEN_680 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_10) {
            vlSelf->UniversalNormUnit__DOT___GEN_679 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_10;
            vlSelf->UniversalNormUnit__DOT___GEN_677 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10)));
            vlSelf->UniversalNormUnit__DOT___GEN_676 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_10)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_679 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10;
            vlSelf->UniversalNormUnit__DOT___GEN_677 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10));
            vlSelf->UniversalNormUnit__DOT___GEN_676 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_10;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_680 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10));
        vlSelf->UniversalNormUnit__DOT___GEN_679 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_10;
        vlSelf->UniversalNormUnit__DOT___GEN_677 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10));
        vlSelf->UniversalNormUnit__DOT___GEN_676 = vlSelf->UniversalNormUnit__DOT__softFinalMax_10;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_11) {
        vlSelf->UniversalNormUnit__DOT___GEN_736 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_11) {
            vlSelf->UniversalNormUnit__DOT___GEN_735 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_11;
            vlSelf->UniversalNormUnit__DOT___GEN_733 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11)));
            vlSelf->UniversalNormUnit__DOT___GEN_732 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_11)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_735 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11;
            vlSelf->UniversalNormUnit__DOT___GEN_733 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11));
            vlSelf->UniversalNormUnit__DOT___GEN_732 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_11;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_736 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11));
        vlSelf->UniversalNormUnit__DOT___GEN_735 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_11;
        vlSelf->UniversalNormUnit__DOT___GEN_733 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11));
        vlSelf->UniversalNormUnit__DOT___GEN_732 = vlSelf->UniversalNormUnit__DOT__softFinalMax_11;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_12) {
        vlSelf->UniversalNormUnit__DOT___GEN_792 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_12) {
            vlSelf->UniversalNormUnit__DOT___GEN_791 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_12;
            vlSelf->UniversalNormUnit__DOT___GEN_789 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12)));
            vlSelf->UniversalNormUnit__DOT___GEN_788 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_12)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_791 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12;
            vlSelf->UniversalNormUnit__DOT___GEN_789 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12));
            vlSelf->UniversalNormUnit__DOT___GEN_788 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_12;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_792 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12));
        vlSelf->UniversalNormUnit__DOT___GEN_791 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_12;
        vlSelf->UniversalNormUnit__DOT___GEN_789 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12));
        vlSelf->UniversalNormUnit__DOT___GEN_788 = vlSelf->UniversalNormUnit__DOT__softFinalMax_12;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_13) {
        vlSelf->UniversalNormUnit__DOT___GEN_848 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_13) {
            vlSelf->UniversalNormUnit__DOT___GEN_847 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_13;
            vlSelf->UniversalNormUnit__DOT___GEN_845 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13)));
            vlSelf->UniversalNormUnit__DOT___GEN_844 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_13)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_847 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13;
            vlSelf->UniversalNormUnit__DOT___GEN_845 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13));
            vlSelf->UniversalNormUnit__DOT___GEN_844 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_13;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_848 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13));
        vlSelf->UniversalNormUnit__DOT___GEN_847 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_13;
        vlSelf->UniversalNormUnit__DOT___GEN_845 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13));
        vlSelf->UniversalNormUnit__DOT___GEN_844 = vlSelf->UniversalNormUnit__DOT__softFinalMax_13;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_14) {
        vlSelf->UniversalNormUnit__DOT___GEN_904 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_14) {
            vlSelf->UniversalNormUnit__DOT___GEN_903 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_14;
            vlSelf->UniversalNormUnit__DOT___GEN_901 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14)));
            vlSelf->UniversalNormUnit__DOT___GEN_900 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_14)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_903 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14;
            vlSelf->UniversalNormUnit__DOT___GEN_901 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14));
            vlSelf->UniversalNormUnit__DOT___GEN_900 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_14;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_904 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14));
        vlSelf->UniversalNormUnit__DOT___GEN_903 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_14;
        vlSelf->UniversalNormUnit__DOT___GEN_901 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14));
        vlSelf->UniversalNormUnit__DOT___GEN_900 = vlSelf->UniversalNormUnit__DOT__softFinalMax_14;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_15) {
        vlSelf->UniversalNormUnit__DOT___GEN_960 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_15) {
            vlSelf->UniversalNormUnit__DOT___GEN_959 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_15;
            vlSelf->UniversalNormUnit__DOT___GEN_957 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15)));
            vlSelf->UniversalNormUnit__DOT___GEN_956 
                = ((IData)(vlSelf->io_layout_mode) ? (IData)(vlSelf->UniversalNormUnit__DOT__softFinalMax_15)
                    : (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15));
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_959 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15;
            vlSelf->UniversalNormUnit__DOT___GEN_957 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15));
            vlSelf->UniversalNormUnit__DOT___GEN_956 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_15;
        }
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15 
            = (1U & (~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15)));
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_960 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15));
        vlSelf->UniversalNormUnit__DOT___GEN_959 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_15;
        vlSelf->UniversalNormUnit__DOT___GEN_957 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15));
        vlSelf->UniversalNormUnit__DOT___GEN_956 = vlSelf->UniversalNormUnit__DOT__softFinalMax_15;
        vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15 = 0U;
    }
    vlSelf->UniversalNormUnit__DOT__distFinalRespReady 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalAwaitingResp) 
           & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_15)) 
               | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_15) 
                  & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15))) 
              & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_14)) 
                  | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_14) 
                     & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14))) 
                 & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_13)) 
                     | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_13) 
                        & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13))) 
                    & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_12)) 
                        | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_12) 
                           & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12))) 
                       & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_11)) 
                           | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_11) 
                              & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11))) 
                          & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_10)) 
                              | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_10) 
                                 & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10))) 
                             & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_9)) 
                                 | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_9) 
                                    & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9))) 
                                & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_8)) 
                                    | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_8) 
                                       & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8))) 
                                   & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_7)) 
                                       | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_7) 
                                          & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7))) 
                                      & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_6)) 
                                          | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_6) 
                                             & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6))) 
                                         & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_5)) 
                                             | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_5) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5))) 
                                            & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_4)) 
                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_4) 
                                                   & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4))) 
                                               & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_3)) 
                                                   | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_3) 
                                                      & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3))) 
                                                  & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_2)) 
                                                      | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_2) 
                                                         & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2))) 
                                                     & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_1)) 
                                                         | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_1) 
                                                            & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1))) 
                                                        & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_0)) 
                                                           | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid) 
                                                              & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)))))))))))))))))));
    vlSelf->__VdfgTmp_h3500f09b__0 = ((IData)(vlSelf->io_layout_mode) 
                                      & (IData)(vlSelf->UniversalNormUnit__DOT___T));
    vlSelf->UniversalNormUnit__DOT___T_151 = ((IData)(vlSelf->UniversalNormUnit__DOT__p2ValidD1) 
                                              & (IData)(vlSelf->UniversalNormUnit__DOT___T));
    vlSelf->UniversalNormUnit__DOT___T_154 = ((~ (IData)(vlSelf->io_stall)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->io_mode_sel)) 
                                                 & (0xffffU 
                                                    == (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T))));
    vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready 
        = ((0xffffU == (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T)) 
           & (IData)(UniversalNormUnit__DOT____VdfgTmp_h5ed2dc75__0));
    vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid 
        = ((0xffffU == (IData)(vlSelf->UniversalNormUnit__DOT___p1AnyValid_T)) 
           & (IData)(UniversalNormUnit__DOT____VdfgTmp_h5ed2dc75__0));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_0 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_0));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_0 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_1 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_1));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_1 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_2 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_2));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_2 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_3 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_3));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_3 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_4 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_4));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_4 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_5 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_5));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_5 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_6 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_6));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_6 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_7 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_7));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_7 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_8 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_8));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_8 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_9 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_9));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_9 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_10));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_11));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_12));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_13));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_14));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_15));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15));
    vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__statTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h3500f09b__0)));
    vlSelf->UniversalNormUnit__DOT___GEN_1583 = ((IData)(vlSelf->UniversalNormUnit__DOT___T_151) 
                                                 & (IData)(vlSelf->UniversalNormUnit__DOT___rawOutMeta_T));
    if (vlSelf->UniversalNormUnit__DOT__outHoldValid) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_0));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_1));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_2));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_3));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_4));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_5));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_6));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_7));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_8));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_9));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_10));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_11));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_12));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_13));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_14));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_15));
    } else if (vlSelf->UniversalNormUnit__DOT___T_154) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_0));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_1));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_2));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_3));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_4));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_5));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_6));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_7));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_8));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_9));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_10));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_11));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_12));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_13));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_14));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_15));
    } else if (vlSelf->UniversalNormUnit__DOT___T_152) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_32 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_32 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_1 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_33 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_33 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_2 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_34 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_34 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_3 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_35 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_35 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_4 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_36 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_36 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_5 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_37 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_37 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_6 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_38 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_38 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_7 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_39 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_39 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_8 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_40 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_40 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_9 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_41 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_41 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_10 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_42 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_42 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_11 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_43 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_43 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_12 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_44 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_44 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_13 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_45 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_45 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_14 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_46 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_46 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_15 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_47 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_47 
                                                             >> 0x14U))));
    } else if (vlSelf->UniversalNormUnit__DOT___T_151) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_16[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_16[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_17[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_17[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_18[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_18[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_19[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_19[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_20[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_20[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_21[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_21[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_22[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_22[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_23[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_23[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_24[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_24[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_25[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_25[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_26[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_26[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_27[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_27[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_28[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_28[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_29[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_29[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_30[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_30[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_31[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_31[0U] 
                                                      >> 0xeU)))));
    } else {
        vlSelf->io_phase2_out_vec_0 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_1 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_2 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_3 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_4 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_5 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_6 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_7 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_8 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_9 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_10 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_11 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_12 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_13 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_14 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_15 = (0xffU & 0U);
    }
    UniversalNormUnit__DOT__rawOutValid = ((IData)(vlSelf->UniversalNormUnit__DOT___T_154) 
                                           | ((IData)(vlSelf->UniversalNormUnit__DOT___T_152) 
                                              | (IData)(vlSelf->UniversalNormUnit__DOT___T_151)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_0_io_rd_en 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready) 
           & (3U == (IData)(vlSelf->io_mode_sel)));
    vlSelf->UniversalNormUnit__DOT___distributedPhase2VectorStart_T 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready) 
           & (IData)(vlSelf->io_layout_mode));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__mem_MPORT_en 
        = ((0x200U != (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid));
    vlSelf->UniversalNormUnit__DOT__onlineLastBeat 
        = ((~ (IData)(vlSelf->io_layout_mode)) & ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                  & (IData)(vlSelf->io_phase1_row_change_update_in)));
    vlSelf->UniversalNormUnit__DOT___takeSample_T = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
         & (3U == (IData)(vlSelf->io_mode_sel)));
    UniversalNormUnit__DOT__distributedLastBeat = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                   & ((IData)(vlSelf->io_layout_mode) 
                                                      & (vlSelf->UniversalNormUnit__DOT__distributedBeatCounter 
                                                         == 
                                                         (0xfffffffU 
                                                          & ((((IData)(0xfU) 
                                                               + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                                                              >> 4U) 
                                                             - (IData)(1U))))));
    vlSelf->UniversalNormUnit__DOT__stat_16 = ((2U 
                                                == (IData)(vlSelf->io_mode_sel))
                                                ? (
                                                   ((UniversalNormUnit__DOT__layerPair_ex2_16 
                                                     >= UniversalNormUnit__DOT__layerPair_meanSq_16)
                                                     ? 
                                                    (UniversalNormUnit__DOT__layerPair_ex2_16 
                                                     - UniversalNormUnit__DOT__layerPair_meanSq_16)
                                                     : 0U) 
                                                   + vlSelf->io_epsilon)
                                                : (UniversalNormUnit__DOT__layerPair_ex2_16 
                                                   + vlSelf->io_epsilon));
    vlSelf->UniversalNormUnit__DOT__normPair_lz_16 
        = ((vlSelf->UniversalNormUnit__DOT__stat_16 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->UniversalNormUnit__DOT__stat_16)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->UniversalNormUnit__DOT__stat_16)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->UniversalNormUnit__DOT__stat_16)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__isNewMax = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_0), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_0_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_0), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                     ? ((IData)(vlSelf->io_phase1_in_vec_0) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0) 
                        - (IData)(vlSelf->io_phase1_in_vec_0))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_1 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_1), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_1_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_1), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                     ? ((IData)(vlSelf->io_phase1_in_vec_1) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1) 
                        - (IData)(vlSelf->io_phase1_in_vec_1))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_2 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_2), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_2_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_2), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                     ? ((IData)(vlSelf->io_phase1_in_vec_2) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2) 
                        - (IData)(vlSelf->io_phase1_in_vec_2))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_3 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_3), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_3_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_3), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                     ? ((IData)(vlSelf->io_phase1_in_vec_3) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3) 
                        - (IData)(vlSelf->io_phase1_in_vec_3))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_4 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_4), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_4_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_4), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                     ? ((IData)(vlSelf->io_phase1_in_vec_4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4) 
                        - (IData)(vlSelf->io_phase1_in_vec_4))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_5 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_5), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_5_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_5), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                     ? ((IData)(vlSelf->io_phase1_in_vec_5) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5) 
                        - (IData)(vlSelf->io_phase1_in_vec_5))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_6 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_6), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_6_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_6), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                     ? ((IData)(vlSelf->io_phase1_in_vec_6) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6) 
                        - (IData)(vlSelf->io_phase1_in_vec_6))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_7 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_7), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_7_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_7), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                     ? ((IData)(vlSelf->io_phase1_in_vec_7) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7) 
                        - (IData)(vlSelf->io_phase1_in_vec_7))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_8 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_8), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_8_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_8), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                     ? ((IData)(vlSelf->io_phase1_in_vec_8) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8) 
                        - (IData)(vlSelf->io_phase1_in_vec_8))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_9 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_9), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_9_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_9), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                     ? ((IData)(vlSelf->io_phase1_in_vec_9) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9) 
                        - (IData)(vlSelf->io_phase1_in_vec_9))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_10 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_10), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_10_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_10), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                     ? ((IData)(vlSelf->io_phase1_in_vec_10) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10) 
                        - (IData)(vlSelf->io_phase1_in_vec_10))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_11 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_11), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_11_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_11), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                     ? ((IData)(vlSelf->io_phase1_in_vec_11) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11) 
                        - (IData)(vlSelf->io_phase1_in_vec_11))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_12 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_12), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_12_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_12), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                     ? ((IData)(vlSelf->io_phase1_in_vec_12) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12) 
                        - (IData)(vlSelf->io_phase1_in_vec_12))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_13 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_13), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_13_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_13), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                     ? ((IData)(vlSelf->io_phase1_in_vec_13) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13) 
                        - (IData)(vlSelf->io_phase1_in_vec_13))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_14 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_14), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_14_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_14), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                     ? ((IData)(vlSelf->io_phase1_in_vec_14) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14) 
                        - (IData)(vlSelf->io_phase1_in_vec_14))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_15 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_15), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_15_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_15), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                     ? ((IData)(vlSelf->io_phase1_in_vec_15) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15) 
                        - (IData)(vlSelf->io_phase1_in_vec_15))));
    vlSelf->UniversalNormUnit__DOT___T_157 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)) 
                                              & ((IData)(vlSelf->io_stall) 
                                                 & (IData)(UniversalNormUnit__DOT__rawOutValid)));
    vlSelf->io_phase2_out_valid_vec_0 = ((~ (IData)(vlSelf->io_stall)) 
                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid) 
                                            | (IData)(UniversalNormUnit__DOT__rawOutValid)));
    vlSelf->UniversalNormUnit__DOT__distributedPhase2VectorLast 
        = ((IData)(vlSelf->UniversalNormUnit__DOT___distributedPhase2VectorStart_T) 
           & (vlSelf->UniversalNormUnit__DOT__distributedPhase2BeatCounter 
              == (0xfffffffU & ((((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                                 >> 4U) - (IData)(1U)))));
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready 
        = ((IData)(vlSelf->UniversalNormUnit__DOT___distributedPhase2VectorStart_T) 
           & (0U == vlSelf->UniversalNormUnit__DOT__distributedPhase2BeatCounter));
    vlSelf->UniversalNormUnit__DOT___GEN_2 = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->UniversalNormUnit__DOT__onlineElementCounter));
    vlSelf->UniversalNormUnit__DOT___GEN_0 = ((IData)(UniversalNormUnit__DOT__distributedLastBeat)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->UniversalNormUnit__DOT__distributedBeatCounter));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_1 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (1U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_2 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (2U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_3 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (3U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_4 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (4U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_5 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (5U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_6 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (6U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_7 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (7U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_8 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (8U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_9 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (9U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_10 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xaU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_11 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xbU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_12 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xcU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_13 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xdU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_14 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xeU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_15 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xfU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_0 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__phase1Last = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat) 
                                                  | (IData)(UniversalNormUnit__DOT__distributedLastBeat));
    vlSelf->UniversalNormUnit__DOT___GEN_1638 = ((IData)(vlSelf->UniversalNormUnit__DOT___T_157) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelf->io_stall)) 
                                                      & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid))) 
                                                    & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)));
    vlSelf->io_phase2_out_valid_vec_1 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_2 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_3 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_4 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_5 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_6 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_7 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_8 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_9 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_10 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_11 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_12 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_13 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_14 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_15 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_row_change_update_out = ((IData)(vlSelf->io_phase2_out_valid_vec_0) 
                                               & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)
                                                   ? (IData)(vlSelf->UniversalNormUnit__DOT__outHoldMeta)
                                                   : 
                                                  ((~ (IData)(vlSelf->UniversalNormUnit__DOT___T_154)) 
                                                   & ((IData)(vlSelf->UniversalNormUnit__DOT___T_152)
                                                       ? (IData)(vlSelf->UniversalNormUnit__DOT___rawOutMeta_T)
                                                       : (IData)(vlSelf->UniversalNormUnit__DOT___GEN_1583)))));
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid)) 
           & (IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire 
        = ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid));
    vlSelf->UniversalNormUnit__DOT__takeSample_1 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1));
    UniversalNormUnit__DOT__validForStats_1 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1));
    vlSelf->UniversalNormUnit__DOT__takeSample_2 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2));
    UniversalNormUnit__DOT__validForStats_2 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2));
    vlSelf->UniversalNormUnit__DOT__takeSample_3 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3));
    UniversalNormUnit__DOT__validForStats_3 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3));
    vlSelf->UniversalNormUnit__DOT__takeSample_4 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4));
    UniversalNormUnit__DOT__validForStats_4 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4));
    vlSelf->UniversalNormUnit__DOT__takeSample_5 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5));
    UniversalNormUnit__DOT__validForStats_5 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5));
    vlSelf->UniversalNormUnit__DOT__takeSample_6 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6));
    UniversalNormUnit__DOT__validForStats_6 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6));
    vlSelf->UniversalNormUnit__DOT__takeSample_7 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7));
    UniversalNormUnit__DOT__validForStats_7 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7));
    vlSelf->UniversalNormUnit__DOT__takeSample_8 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8));
    UniversalNormUnit__DOT__validForStats_8 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8));
    vlSelf->UniversalNormUnit__DOT__takeSample_9 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9));
    UniversalNormUnit__DOT__validForStats_9 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9));
    vlSelf->UniversalNormUnit__DOT__takeSample_10 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10));
    UniversalNormUnit__DOT__validForStats_10 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10));
    vlSelf->UniversalNormUnit__DOT__takeSample_11 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11));
    UniversalNormUnit__DOT__validForStats_11 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11));
    vlSelf->UniversalNormUnit__DOT__takeSample_12 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12));
    UniversalNormUnit__DOT__validForStats_12 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12));
    vlSelf->UniversalNormUnit__DOT__takeSample_13 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13));
    UniversalNormUnit__DOT__validForStats_13 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13));
    vlSelf->UniversalNormUnit__DOT__takeSample_14 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14));
    UniversalNormUnit__DOT__validForStats_14 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14));
    vlSelf->UniversalNormUnit__DOT__takeSample_15 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15));
    UniversalNormUnit__DOT__validForStats_15 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15));
    vlSelf->UniversalNormUnit__DOT__takeSample = ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0));
    UniversalNormUnit__DOT__validForStats = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                             & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0));
    vlSelf->io_phase1_vector_done = ((~ (IData)(vlSelf->io_stall)) 
                                     & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last));
    vlSelf->UniversalNormUnit__DOT___launchDistributedNormal_T 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last));
    UniversalNormUnit__DOT___T_35 = ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
                                     & ((IData)(vlSelf->io_layout_mode) 
                                        & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last)));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__storedDeq 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__storeEnq 
        = ((~ ((0U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
               & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
                  & (IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready)))) 
           & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
              & ((4U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
                 | (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire))));
    UniversalNormUnit__DOT__distributedPhase2Max = 
        (((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire) 
          & (3U == (IData)(vlSelf->io_mode_sel))) ? (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_bits_max)
          : (IData)(vlSelf->UniversalNormUnit__DOT__globalSoftMaxReg));
    if (vlSelf->io_layout_mode) {
        UniversalNormUnit__DOT__phase2Max = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_1 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_2 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_3 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_4 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_5 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_6 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_7 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_8 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_9 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_10 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_11 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_12 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_13 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_14 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_15 = UniversalNormUnit__DOT__distributedPhase2Max;
    } else {
        UniversalNormUnit__DOT__phase2Max = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_0;
        UniversalNormUnit__DOT__phase2Max_1 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_1;
        UniversalNormUnit__DOT__phase2Max_2 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_2;
        UniversalNormUnit__DOT__phase2Max_3 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_3;
        UniversalNormUnit__DOT__phase2Max_4 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_4;
        UniversalNormUnit__DOT__phase2Max_5 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_5;
        UniversalNormUnit__DOT__phase2Max_6 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_6;
        UniversalNormUnit__DOT__phase2Max_7 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_7;
        UniversalNormUnit__DOT__phase2Max_8 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_8;
        UniversalNormUnit__DOT__phase2Max_9 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_9;
        UniversalNormUnit__DOT__phase2Max_10 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_10;
        UniversalNormUnit__DOT__phase2Max_11 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_11;
        UniversalNormUnit__DOT__phase2Max_12 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_12;
        UniversalNormUnit__DOT__phase2Max_13 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_13;
        UniversalNormUnit__DOT__phase2Max_14 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_14;
        UniversalNormUnit__DOT__phase2Max_15 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_15;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_1) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_1) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_1_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_1_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_1) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_1 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_1))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_1)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_1))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_1) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_1))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_1;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_1;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_2) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_2) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_2_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_2_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_2) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_2 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_2))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_2)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_2))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_2) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_2))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_2;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_2;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_3) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_3) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_3_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_3_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_3) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_3 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_3))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_3)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_3))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_3) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_3))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_3;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_3;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_4) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_4) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_4_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_4_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_4) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_4 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_4))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_4)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_4))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_4) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_4))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_4;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_4;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_5) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_5) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_5_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_5_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_5) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_5 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_5))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_5)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_5))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_5) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_5))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_5;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_5;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_6) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_6) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_6_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_6_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_6) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_6 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_6))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_6)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_6))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_6) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_6))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_6;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_6;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_7) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_7) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_7_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_7_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_7) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_7 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_7))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_7)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_7))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_7) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_7))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_7;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_7;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_8) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_8) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_8_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_8_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_8) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_8 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_8))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_8)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_8))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_8) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_8))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_8;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_8;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_9) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_9) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_9_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_9_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_9) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_9 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_9))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_9)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_9))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_9) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_9))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_9;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_9;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_10) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_10) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_10_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_10_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_10) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_10 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_10))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_10)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_10))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_10) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_10))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_10;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_10;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_11) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_11) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_11_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_11_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_11) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_11 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_11))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_11)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_11))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_11) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_11))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_11;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_11;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_12) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_12) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_12_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_12_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_12) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_12 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_12))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_12)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_12))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_12) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_12))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_12;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_12;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_13) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_13) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_13_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_13_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_13) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_13 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_13))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_13)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_13))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_13) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_13))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_13;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_13;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_14) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_14) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_14_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_14_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_14) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_14 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_14))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_14)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_14))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_14) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_14))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_14;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_14;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_15) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_15) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_15_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_15_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_15) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_15 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_15))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_15)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_15))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_15) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_15))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_15;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_15;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_0) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr 
                = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_0_mag))
                    ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__streamExpAddr_0_mag)));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_0 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_0))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_0)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_0))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_0) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_0))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_0;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_0;
    }
    vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup 
        = ((~ (IData)(vlSelf->io_layout_mode)) & ((IData)(vlSelf->UniversalNormUnit__DOT___launchDistributedNormal_T) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT___T)));
    vlSelf->UniversalNormUnit__DOT___T_37 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_43 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_49 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_55 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_61 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_67 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_73 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_79 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_85 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_91 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_97 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_103 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_109 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_115 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_121 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_127 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT__distMultiBeatFinal 
        = ((1U != (((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                   >> 4U)) & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT__distDirectFinal 
        = ((IData)(UniversalNormUnit__DOT___T_35) & 
           (1U == (((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                   >> 4U)));
    UniversalNormUnit__DOT__layerPair_ex2_1 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_1 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_2 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_2 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_3 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_3 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_4 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_4 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_5 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_5 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_6 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_6 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_7 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_7 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_8 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_8 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_9 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_9 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_10 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_10 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_11 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_11 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_12 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_12 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_13 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_13 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_14 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_14 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_15 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_15 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2 = (IData)(
                                                    (0xfffffffffULL 
                                                     & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0)) 
                                                         * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                        >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_1 = (IData)((0x1fffffffffULL 
                                                   & (VL_MULS_QQQ(57, 
                                                                  (0x1ffffffffffffffULL 
                                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0)), 
                                                                  (0x1ffffffffffffffULL 
                                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                      >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_en 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_0_io_rd_en 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup) 
           | ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
              | ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup) 
                 | (IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup))));
    UniversalNormUnit__DOT__scaleLookupFire = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) 
                                               | ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup) 
                                                  | ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
                                                     | (IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup))));
    vlSelf->UniversalNormUnit__DOT___GEN_1035 = ((IData)(vlSelf->UniversalNormUnit__DOT__distMultiBeatFinal) 
                                                 | (IData)(vlSelf->UniversalNormUnit__DOT__distFinalAwaitingResp));
    if (vlSelf->UniversalNormUnit__DOT__distFinalRespReady) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_0)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_0));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_1)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_1));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_2)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_2));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_3)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_3));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_4)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_4));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_5)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_5));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_6)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_6));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_7)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_7));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_8)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_8));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_9)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_9));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_10)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_10));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_11)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_11));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_12)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_12));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_13)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_13));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_14)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_14));
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_15)
                ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15)
                : (IData)(vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_15));
    } else if (vlSelf->UniversalNormUnit__DOT__distDirectFinal) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0)
                ? (IData)(vlSelf->io_phase1_in_vec_0)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1)
                ? (IData)(vlSelf->io_phase1_in_vec_1)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2)
                ? (IData)(vlSelf->io_phase1_in_vec_2)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3)
                ? (IData)(vlSelf->io_phase1_in_vec_3)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4)
                ? (IData)(vlSelf->io_phase1_in_vec_4)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5)
                ? (IData)(vlSelf->io_phase1_in_vec_5)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6)
                ? (IData)(vlSelf->io_phase1_in_vec_6)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7)
                ? (IData)(vlSelf->io_phase1_in_vec_7)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8)
                ? (IData)(vlSelf->io_phase1_in_vec_8)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9)
                ? (IData)(vlSelf->io_phase1_in_vec_9)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10)
                ? (IData)(vlSelf->io_phase1_in_vec_10)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11)
                ? (IData)(vlSelf->io_phase1_in_vec_11)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12)
                ? (IData)(vlSelf->io_phase1_in_vec_12)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13)
                ? (IData)(vlSelf->io_phase1_in_vec_13)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14)
                ? (IData)(vlSelf->io_phase1_in_vec_14)
                : 0x80U);
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15)
                ? (IData)(vlSelf->io_phase1_in_vec_15)
                : 0x80U);
    } else {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 = 0x80U;
    }
    UniversalNormUnit__DOT__softContextFifo_io_enq_valid 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalRespReady) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__distDirectFinal));
    UniversalNormUnit__DOT__phase2Addr_mag = (0xffU 
                                              & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max), (IData)(vlSelf->io_phase2_in_vec_0))
                                                  ? 
                                                 ((IData)(UniversalNormUnit__DOT__phase2Max) 
                                                  - (IData)(vlSelf->io_phase2_in_vec_0))
                                                  : 
                                                 ((IData)(vlSelf->io_phase2_in_vec_0) 
                                                  - (IData)(UniversalNormUnit__DOT__phase2Max))));
    UniversalNormUnit__DOT__phase2Addr_mag_1 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_1), (IData)(vlSelf->io_phase2_in_vec_1))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_1) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_1))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_1) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_1))));
    UniversalNormUnit__DOT__phase2Addr_mag_2 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_2), (IData)(vlSelf->io_phase2_in_vec_2))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_2) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_2))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_2) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_2))));
    UniversalNormUnit__DOT__phase2Addr_mag_3 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_3), (IData)(vlSelf->io_phase2_in_vec_3))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_3) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_3))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_3) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_3))));
    UniversalNormUnit__DOT__phase2Addr_mag_4 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_4), (IData)(vlSelf->io_phase2_in_vec_4))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_4) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_4))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_4) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_4))));
    UniversalNormUnit__DOT__phase2Addr_mag_5 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_5), (IData)(vlSelf->io_phase2_in_vec_5))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_5) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_5))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_5) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_5))));
    UniversalNormUnit__DOT__phase2Addr_mag_6 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_6), (IData)(vlSelf->io_phase2_in_vec_6))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_6) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_6))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_6) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_6))));
    UniversalNormUnit__DOT__phase2Addr_mag_7 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_7), (IData)(vlSelf->io_phase2_in_vec_7))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_7) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_7))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_7) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_7))));
    UniversalNormUnit__DOT__phase2Addr_mag_8 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_8), (IData)(vlSelf->io_phase2_in_vec_8))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_8) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_8))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_8) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_8))));
    UniversalNormUnit__DOT__phase2Addr_mag_9 = (0xffU 
                                                & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_9), (IData)(vlSelf->io_phase2_in_vec_9))
                                                    ? 
                                                   ((IData)(UniversalNormUnit__DOT__phase2Max_9) 
                                                    - (IData)(vlSelf->io_phase2_in_vec_9))
                                                    : 
                                                   ((IData)(vlSelf->io_phase2_in_vec_9) 
                                                    - (IData)(UniversalNormUnit__DOT__phase2Max_9))));
    UniversalNormUnit__DOT__phase2Addr_mag_10 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_10), (IData)(vlSelf->io_phase2_in_vec_10))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_10) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_10))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_10) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_10))));
    UniversalNormUnit__DOT__phase2Addr_mag_11 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_11), (IData)(vlSelf->io_phase2_in_vec_11))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_11) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_11))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_11) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_11))));
    UniversalNormUnit__DOT__phase2Addr_mag_12 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_12), (IData)(vlSelf->io_phase2_in_vec_12))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_12) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_12))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_12) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_12))));
    UniversalNormUnit__DOT__phase2Addr_mag_13 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_13), (IData)(vlSelf->io_phase2_in_vec_13))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_13) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_13))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_13) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_13))));
    UniversalNormUnit__DOT__phase2Addr_mag_14 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_14), (IData)(vlSelf->io_phase2_in_vec_14))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_14) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_14))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_14) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_14))));
    UniversalNormUnit__DOT__phase2Addr_mag_15 = (0xffU 
                                                 & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_15), (IData)(vlSelf->io_phase2_in_vec_15))
                                                     ? 
                                                    ((IData)(UniversalNormUnit__DOT__phase2Max_15) 
                                                     - (IData)(vlSelf->io_phase2_in_vec_15))
                                                     : 
                                                    ((IData)(vlSelf->io_phase2_in_vec_15) 
                                                     - (IData)(UniversalNormUnit__DOT__phase2Max_15))));
    UniversalNormUnit__DOT__layerPair_meanSq_1 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_1), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_1)));
    UniversalNormUnit__DOT__layerPair_meanSq_2 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_2), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_2)));
    UniversalNormUnit__DOT__layerPair_meanSq_3 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_3), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_3)));
    UniversalNormUnit__DOT__layerPair_meanSq_4 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_4), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_4)));
    UniversalNormUnit__DOT__layerPair_meanSq_5 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_5), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_5)));
    UniversalNormUnit__DOT__layerPair_meanSq_6 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_6), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_6)));
    UniversalNormUnit__DOT__layerPair_meanSq_7 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_7), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_7)));
    UniversalNormUnit__DOT__layerPair_meanSq_8 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_8), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_8)));
    UniversalNormUnit__DOT__layerPair_meanSq_9 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_9), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_9)));
    UniversalNormUnit__DOT__layerPair_meanSq_10 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_10), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_10)));
    UniversalNormUnit__DOT__layerPair_meanSq_11 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_11), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_11)));
    UniversalNormUnit__DOT__layerPair_meanSq_12 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_12), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_12)));
    UniversalNormUnit__DOT__layerPair_meanSq_13 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_13), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_13)));
    UniversalNormUnit__DOT__layerPair_meanSq_14 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_14), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_14)));
    UniversalNormUnit__DOT__layerPair_meanSq_15 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_15), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_15)));
    UniversalNormUnit__DOT__layerPair_meanSq = (IData)(
                                                       VL_MULS_QQQ(64, 
                                                                   VL_EXTENDS_QI(64,32, UniversalNormUnit__DOT__layerPair_1), 
                                                                   VL_EXTENDS_QI(64,32, UniversalNormUnit__DOT__layerPair_1)));
    if ((2U == (IData)(vlSelf->io_mode_sel))) {
        vlSelf->UniversalNormUnit__DOT___meanCapture_0_T 
            = UniversalNormUnit__DOT__layerPair_1;
        UniversalNormUnit__DOT__stat_1 = (((UniversalNormUnit__DOT__layerPair_ex2_1 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_1)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_1 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_1)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_2 = (((UniversalNormUnit__DOT__layerPair_ex2_2 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_2)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_2 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_2)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_3 = (((UniversalNormUnit__DOT__layerPair_ex2_3 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_3)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_3 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_3)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_4 = (((UniversalNormUnit__DOT__layerPair_ex2_4 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_4)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_4 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_4)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_5 = (((UniversalNormUnit__DOT__layerPair_ex2_5 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_5)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_5 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_5)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_6 = (((UniversalNormUnit__DOT__layerPair_ex2_6 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_6)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_6 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_6)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_7 = (((UniversalNormUnit__DOT__layerPair_ex2_7 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_7)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_7 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_7)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_8 = (((UniversalNormUnit__DOT__layerPair_ex2_8 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_8)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_8 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_8)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_9 = (((UniversalNormUnit__DOT__layerPair_ex2_9 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_9)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_9 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_9)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_10 = (((UniversalNormUnit__DOT__layerPair_ex2_10 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_10)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_10 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_10)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_11 = (((UniversalNormUnit__DOT__layerPair_ex2_11 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_11)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_11 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_11)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_12 = (((UniversalNormUnit__DOT__layerPair_ex2_12 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_12)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_12 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_12)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_13 = (((UniversalNormUnit__DOT__layerPair_ex2_13 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_13)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_13 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_13)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_14 = (((UniversalNormUnit__DOT__layerPair_ex2_14 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_14)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_14 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_14)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_15 = (((UniversalNormUnit__DOT__layerPair_ex2_15 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_15)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_15 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_15)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat = (((UniversalNormUnit__DOT__layerPair_ex2 
                                          >= UniversalNormUnit__DOT__layerPair_meanSq)
                                          ? (UniversalNormUnit__DOT__layerPair_ex2 
                                             - UniversalNormUnit__DOT__layerPair_meanSq)
                                          : 0U) + vlSelf->io_epsilon);
    } else {
        vlSelf->UniversalNormUnit__DOT___meanCapture_0_T = 0U;
        UniversalNormUnit__DOT__stat_1 = (UniversalNormUnit__DOT__layerPair_ex2_1 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_2 = (UniversalNormUnit__DOT__layerPair_ex2_2 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_3 = (UniversalNormUnit__DOT__layerPair_ex2_3 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_4 = (UniversalNormUnit__DOT__layerPair_ex2_4 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_5 = (UniversalNormUnit__DOT__layerPair_ex2_5 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_6 = (UniversalNormUnit__DOT__layerPair_ex2_6 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_7 = (UniversalNormUnit__DOT__layerPair_ex2_7 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_8 = (UniversalNormUnit__DOT__layerPair_ex2_8 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_9 = (UniversalNormUnit__DOT__layerPair_ex2_9 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_10 = (UniversalNormUnit__DOT__layerPair_ex2_10 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_11 = (UniversalNormUnit__DOT__layerPair_ex2_11 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_12 = (UniversalNormUnit__DOT__layerPair_ex2_12 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_13 = (UniversalNormUnit__DOT__layerPair_ex2_13 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_14 = (UniversalNormUnit__DOT__layerPair_ex2_14 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_15 = (UniversalNormUnit__DOT__layerPair_ex2_15 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat = (UniversalNormUnit__DOT__layerPair_ex2 
                                        + vlSelf->io_epsilon);
    }
    vlSelf->io_phase2_req = ((~ (IData)(vlSelf->io_stall)) 
                             & (IData)(UniversalNormUnit__DOT__scaleLookupFire));
    vlSelf->UniversalNormUnit__DOT___GEN_1543 = (((~ (IData)(vlSelf->io_layout_mode)) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleArriving)) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelf->io_layout_mode)) 
                                                      & (IData)(UniversalNormUnit__DOT__scaleLookupFire))) 
                                                    & (IData)(vlSelf->UniversalNormUnit__DOT__scaleContextValid)));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__enqFire 
        = ((4U != (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)) 
           & (IData)(UniversalNormUnit__DOT__softContextFifo_io_enq_valid));
    vlSelf->io_sync_alert = (((~ (IData)((0xffffU == (IData)(vlSelf->UniversalNormUnit__DOT___p1AnyValid_T)))) 
                              & (0U != (IData)(vlSelf->UniversalNormUnit__DOT___p1AnyValid_T))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T)))) 
                                 & (0U != (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T))) 
                                | (((0U != (IData)(vlSelf->io_mode_sel)) 
                                    & (0U == vlSelf->io_logical_vector_length)) 
                                   | (((0U != (IData)(vlSelf->io_mode_sel)) 
                                       & (0x40U < vlSelf->io_logical_vector_length)) 
                                      | (((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat) 
                                          & (((IData)(1U) 
                                              + vlSelf->UniversalNormUnit__DOT__onlineElementCounter) 
                                             != vlSelf->UniversalNormUnit__DOT__logicalLengthSafe)) 
                                         | (((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                             & (0x200U 
                                                == (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count))) 
                                            | (((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready) 
                                                & (0U 
                                                   == (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count))) 
                                               | (((IData)(UniversalNormUnit__DOT__softContextFifo_io_enq_valid) 
                                                   & (4U 
                                                      == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count))) 
                                                  | (((IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_ready) 
                                                      & (0U 
                                                         == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count))) 
                                                     | (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire)) 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
                                                            & (4U 
                                                               == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)))) 
                                                        | ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow) 
                                                           | (((~ (IData)(vlSelf->UniversalNormUnit__DOT__scaleReady)) 
                                                               & (IData)(UniversalNormUnit__DOT__scaleLookupFire)) 
                                                              | (((~ (IData)(vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2)) 
                                                                  & ((3U 
                                                                      == (IData)(vlSelf->io_mode_sel)) 
                                                                     & (((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en) 
                                                                         | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en) 
                                                                            | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en) 
                                                                               | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en) 
                                                                                | (IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en)))))))))))))))) 
                                                                        | ((IData)(vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_en) 
                                                                           | (IData)(vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_0_io_rd_en))))) 
                                                                 | (((~ 
                                                                      ((IData)(vlSelf->UniversalNormUnit__DOT__scaleContextValid) 
                                                                       | (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleArriving))) 
                                                                     & ((0U 
                                                                         != (IData)(vlSelf->io_mode_sel)) 
                                                                        & ((~ (IData)(vlSelf->io_layout_mode)) 
                                                                           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready)))) 
                                                                    | ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow) 
                                                                       | ((~ (IData)(vlSelf->io_stall)) 
                                                                          & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid) 
                                                                             & (IData)(UniversalNormUnit__DOT__rawOutValid))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_0_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_1_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_1))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_1)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_2_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_2))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_2)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_3_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_3))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_3)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_4_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_4))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_4)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_5_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_5))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_5)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_6_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_6))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_6)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_7_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_7))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_7)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_8_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_8))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_8)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_9_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_9))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_9)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_10_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_10))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_10)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_11_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_11))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_11)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_12_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_12))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_12)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_13_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_13))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_13)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_14_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_14))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_14)));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_15_io_rd_addr 
        = ((0x3fU < (IData)(UniversalNormUnit__DOT__phase2Addr_mag_15))
            ? 0x3fU : (0x3fU & (IData)(UniversalNormUnit__DOT__phase2Addr_mag_15)));
    UniversalNormUnit__DOT__normPair_lz_1 = ((UniversalNormUnit__DOT__stat_1 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_1)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_1)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_1)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_1)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_1)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_1)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_1)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_1)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_1)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_1)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_1)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_1)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_1)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_1)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_1)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_1)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_1)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_1)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_1)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_1)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_1)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_1)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_1)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_1)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_1)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_1)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_1)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_1)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_1)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_1)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_2 = ((UniversalNormUnit__DOT__stat_2 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_2)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_2)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_2)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_2)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_2)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_2)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_2)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_2)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_2)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_2)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_2)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_2)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_2)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_2)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_2)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_2)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_2)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_2)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_2)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_2)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_2)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_2)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_2)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_2)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_2)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_2)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_2)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_2)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_2)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_2)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_3 = ((UniversalNormUnit__DOT__stat_3 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_3)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_3)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_3)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_3)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_3)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_3)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_3)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_3)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_3)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_3)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_3)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_3)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_3)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_3)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_3)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_3)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_3)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_3)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_3)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_3)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_3)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_3)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_3)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_3)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_3)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_3)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_3)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_3)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_3)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_3)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_4 = ((UniversalNormUnit__DOT__stat_4 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_4)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_4)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_4)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_4)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_4)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_4)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_4)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_4)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_4)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_4)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_4)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_4)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_4)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_4)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_4)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_4)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_4)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_4)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_4)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_4)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_4)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_4)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_4)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_4)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_4)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_4)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_4)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_4)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_4)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_4)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_5 = ((UniversalNormUnit__DOT__stat_5 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_5)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_5)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_5)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_5)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_5)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_5)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_5)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_5)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_5)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_5)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_5)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_5)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_5)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_5)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_5)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_5)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_5)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_5)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_5)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_5)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_5)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_5)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_5)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_5)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_5)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_5)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_5)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_5)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_5)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_5)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_6 = ((UniversalNormUnit__DOT__stat_6 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_6)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_6)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_6)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_6)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_6)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_6)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_6)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_6)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_6)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_6)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_6)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_6)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_6)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_6)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_6)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_6)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_6)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_6)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_6)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_6)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_6)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_6)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_6)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_6)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_6)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_6)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_6)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_6)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_6)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_6)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_7 = ((UniversalNormUnit__DOT__stat_7 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_7)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_7)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_7)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_7)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_7)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_7)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_7)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_7)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_7)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_7)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_7)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_7)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_7)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_7)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_7)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_7)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_7)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_7)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_7)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_7)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_7)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_7)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_7)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_7)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_7)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_7)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_7)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_7)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_7)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_7)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_8 = ((UniversalNormUnit__DOT__stat_8 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_8)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_8)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_8)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_8)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_8)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_8)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_8)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_8)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_8)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_8)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_8)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_8)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_8)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_8)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_8)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_8)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_8)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_8)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_8)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_8)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_8)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_8)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_8)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_8)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_8)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_8)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_8)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_8)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_8)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_8)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_9 = ((UniversalNormUnit__DOT__stat_9 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_9)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_9)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_9)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_9)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_9)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_9)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_9)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_9)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_9)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_9)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_9)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_9)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_9)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_9)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_9)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_9)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_9)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_9)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_9)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_9)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_9)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_9)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_9)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_9)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_9)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_9)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_9)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_9)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_9)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_9)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_10 = ((UniversalNormUnit__DOT__stat_10 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_10)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_10)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_10)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_10)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_10)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_10)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_10)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_10)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_10)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_10)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_10)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_10)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_10)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_10)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_10)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_10)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_10)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_10)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_10)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_10)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_10)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_10)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_10)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_10)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_10)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_10)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_10)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_10)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_10)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_10)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_11 = ((UniversalNormUnit__DOT__stat_11 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_11)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_11)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_11)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_11)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_11)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_11)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_11)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_11)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_11)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_11)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_11)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_11)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_11)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_11)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_11)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_11)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_11)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_11)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_11)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_11)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_11)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_11)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_11)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_11)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_11)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_11)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_11)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_11)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_11)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_11)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_12 = ((UniversalNormUnit__DOT__stat_12 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_12)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_12)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_12)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_12)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_12)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_12)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_12)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_12)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_12)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_12)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_12)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_12)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_12)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_12)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_12)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_12)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_12)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_12)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_12)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_12)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_12)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_12)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_12)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_12)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_12)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_12)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_12)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_12)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_12)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_12)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_13 = ((UniversalNormUnit__DOT__stat_13 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_13)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_13)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_13)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_13)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_13)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_13)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_13)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_13)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_13)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_13)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_13)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_13)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_13)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_13)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_13)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_13)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_13)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_13)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_13)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_13)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_13)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_13)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_13)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_13)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_13)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_13)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_13)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_13)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_13)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_13)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_14 = ((UniversalNormUnit__DOT__stat_14 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_14)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_14)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_14)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_14)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_14)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_14)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_14)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_14)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_14)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_14)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_14)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_14)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_14)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_14)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_14)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_14)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_14)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_14)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_14)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_14)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_14)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_14)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_14)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_14)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_14)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_14)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_14)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_14)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_14)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_14)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_15 = ((UniversalNormUnit__DOT__stat_15 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_15)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_15)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_15)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_15)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_15)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_15)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_15)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_15)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_15)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_15)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_15)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_15)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_15)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_15)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_15)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_15)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_15)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_15)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_15)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_15)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_15)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_15)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_15)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_15)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_15)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_15)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_15)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_15)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_15)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_15)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz = ((UniversalNormUnit__DOT__stat 
                                            >> 0x1fU)
                                            ? 0U : 
                                           ((0x40000000U 
                                             & UniversalNormUnit__DOT__stat)
                                             ? 1U : 
                                            ((0x20000000U 
                                              & UniversalNormUnit__DOT__stat)
                                              ? 2U : 
                                             ((0x10000000U 
                                               & UniversalNormUnit__DOT__stat)
                                               ? 3U
                                               : ((0x8000000U 
                                                   & UniversalNormUnit__DOT__stat)
                                                   ? 4U
                                                   : 
                                                  ((0x4000000U 
                                                    & UniversalNormUnit__DOT__stat)
                                                    ? 5U
                                                    : 
                                                   ((0x2000000U 
                                                     & UniversalNormUnit__DOT__stat)
                                                     ? 6U
                                                     : 
                                                    ((0x1000000U 
                                                      & UniversalNormUnit__DOT__stat)
                                                      ? 7U
                                                      : 
                                                     ((0x800000U 
                                                       & UniversalNormUnit__DOT__stat)
                                                       ? 8U
                                                       : 
                                                      ((0x400000U 
                                                        & UniversalNormUnit__DOT__stat)
                                                        ? 9U
                                                        : 
                                                       ((0x200000U 
                                                         & UniversalNormUnit__DOT__stat)
                                                         ? 0xaU
                                                         : 
                                                        ((0x100000U 
                                                          & UniversalNormUnit__DOT__stat)
                                                          ? 0xbU
                                                          : 
                                                         ((0x80000U 
                                                           & UniversalNormUnit__DOT__stat)
                                                           ? 0xcU
                                                           : 
                                                          ((0x40000U 
                                                            & UniversalNormUnit__DOT__stat)
                                                            ? 0xdU
                                                            : 
                                                           ((0x20000U 
                                                             & UniversalNormUnit__DOT__stat)
                                                             ? 0xeU
                                                             : 
                                                            ((0x10000U 
                                                              & UniversalNormUnit__DOT__stat)
                                                              ? 0xfU
                                                              : 
                                                             ((0x8000U 
                                                               & UniversalNormUnit__DOT__stat)
                                                               ? 0x10U
                                                               : 
                                                              ((0x4000U 
                                                                & UniversalNormUnit__DOT__stat)
                                                                ? 0x11U
                                                                : 
                                                               ((0x2000U 
                                                                 & UniversalNormUnit__DOT__stat)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x1000U 
                                                                  & UniversalNormUnit__DOT__stat)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x800U 
                                                                   & UniversalNormUnit__DOT__stat)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x400U 
                                                                    & UniversalNormUnit__DOT__stat)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x200U 
                                                                     & UniversalNormUnit__DOT__stat)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x100U 
                                                                      & UniversalNormUnit__DOT__stat)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x80U 
                                                                       & UniversalNormUnit__DOT__stat)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x40U 
                                                                        & UniversalNormUnit__DOT__stat)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x20U 
                                                                         & UniversalNormUnit__DOT__stat)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x10U 
                                                                          & UniversalNormUnit__DOT__stat)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((8U 
                                                                           & UniversalNormUnit__DOT__stat)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((4U 
                                                                            & UniversalNormUnit__DOT__stat)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((2U 
                                                                             & UniversalNormUnit__DOT__stat)
                                                                             ? 0x1eU
                                                                             : 0x1fU)))))))))))))))))))))))))))))));
    if (vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) {
        vlSelf->UniversalNormUnit__DOT___GEN_1341 = 
            ((0U != UniversalNormUnit__DOT__stat_1)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_1)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1344 = 
            ((0U != UniversalNormUnit__DOT__stat_2)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_2)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1347 = 
            ((0U != UniversalNormUnit__DOT__stat_3)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_3)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1350 = 
            ((0U != UniversalNormUnit__DOT__stat_4)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_4)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1353 = 
            ((0U != UniversalNormUnit__DOT__stat_5)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_5)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1356 = 
            ((0U != UniversalNormUnit__DOT__stat_6)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_6)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1359 = 
            ((0U != UniversalNormUnit__DOT__stat_7)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_7)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1362 = 
            ((0U != UniversalNormUnit__DOT__stat_8)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_8)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1365 = 
            ((0U != UniversalNormUnit__DOT__stat_9)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_9)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1368 = 
            ((0U != UniversalNormUnit__DOT__stat_10)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_10)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1371 = 
            ((0U != UniversalNormUnit__DOT__stat_11)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_11)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1374 = 
            ((0U != UniversalNormUnit__DOT__stat_12)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_12)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1377 = 
            ((0U != UniversalNormUnit__DOT__stat_13)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_13)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1380 = 
            ((0U != UniversalNormUnit__DOT__stat_14)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_14)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1383 = 
            ((0U != UniversalNormUnit__DOT__stat_15)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_15)))
              : 0U);
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_1341 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1344 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1347 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1350 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1353 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1356 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1359 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1362 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1365 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1368 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1371 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1374 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1377 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1380 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1383 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_1)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_18)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_2)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_19)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_3)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_20)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_4)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_21)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_5)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_22)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_6)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_23)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_7)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_24)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_8)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_25)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_9)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_26)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_10)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_27)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_11)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_28)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_12)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_29)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_13)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_30)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_14)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_31)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0x3fU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_15)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_32)) 
                                       >> 0x1aU))) : 0U));
    } else if (vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_1)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_1)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_1)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_2)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_2)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_2)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_3)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_3)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_3)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_4)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_4)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_4)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_5)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_5)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_5)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_6)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_6)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_6)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_7)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_7)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_7)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_8)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_8)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_8)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_9)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_9)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_9)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_10)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_10)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_10)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_11)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_11)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_11)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_12)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_12)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_12)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_13)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_13)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_13)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_14)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_14)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_14)) 
                                       >> 0x1aU))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0x3fU & ((0U != UniversalNormUnit__DOT__stat_15)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_15)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_15)) 
                                       >> 0x1aU))) : 0U));
    } else {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0x3fU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0x3fU & 0U);
    }
    vlSelf->UniversalNormUnit__DOT___GEN_1387 = ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup)
                                                  ? 
                                                 ((0U 
                                                   != vlSelf->UniversalNormUnit__DOT__stat_16)
                                                   ? 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      - (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_16)))
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup)
                                                   ? 
                                                  ((0U 
                                                    != UniversalNormUnit__DOT__stat)
                                                    ? 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(UniversalNormUnit__DOT__normPair_lz)))
                                                    : 0U)
                                                   : 0U));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_0_io_rd_addr 
        = (0x3fU & ((IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup)
                     ? ((0U != vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                         ? (IData)((0x1fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_33)) 
                                       >> 0x1aU))) : 0U)
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal)
                         ? ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                             ? (IData)((0x1fffffffffULL 
                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_0)) 
                                            << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_17)) 
                                           >> 0x1aU)))
                             : 0U) : ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup)
                                       ? ((0U != vlSelf->UniversalNormUnit__DOT__stat_16)
                                           ? (IData)(
                                                     (0x1fffffffffULL 
                                                      & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__stat_16)) 
                                                          << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_16)) 
                                                         >> 0x1aU)))
                                           : 0U) : 
                                      ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup)
                                        ? ((0U != UniversalNormUnit__DOT__stat)
                                            ? (IData)(
                                                      (0x1fffffffffULL 
                                                       & (((QData)((IData)(UniversalNormUnit__DOT__stat)) 
                                                           << (IData)(UniversalNormUnit__DOT__normPair_lz)) 
                                                          >> 0x1aU)))
                                            : 0U) : 0U)))));
}
