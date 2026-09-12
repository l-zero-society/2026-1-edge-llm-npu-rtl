// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit_RopePairCore.h"
#include "VRopeUnit__Syms.h"

void VRopeUnit_RopePairCore___ctor_var_reset(VRopeUnit_RopePairCore* vlSelf);

VRopeUnit_RopePairCore::VRopeUnit_RopePairCore(VRopeUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRopeUnit_RopePairCore___ctor_var_reset(this);
}

void VRopeUnit_RopePairCore___configure_coverage(VRopeUnit_RopePairCore* vlSelf, bool first);

void VRopeUnit_RopePairCore::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VRopeUnit_RopePairCore___configure_coverage(this, first);
}

VRopeUnit_RopePairCore::~VRopeUnit_RopePairCore() {
}

// Coverage
void VRopeUnit_RopePairCore::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
