// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnitE2EHarness.h for the primary calling header

#include "VComputeUnitE2EHarness__pch.h"
#include "VComputeUnitE2EHarness_RopePairCore.h"
#include "VComputeUnitE2EHarness__Syms.h"

void VComputeUnitE2EHarness_RopePairCore___ctor_var_reset(VComputeUnitE2EHarness_RopePairCore* vlSelf);

VComputeUnitE2EHarness_RopePairCore::VComputeUnitE2EHarness_RopePairCore(VComputeUnitE2EHarness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputeUnitE2EHarness_RopePairCore___ctor_var_reset(this);
}

void VComputeUnitE2EHarness_RopePairCore___configure_coverage(VComputeUnitE2EHarness_RopePairCore* vlSelf, bool first);

void VComputeUnitE2EHarness_RopePairCore::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VComputeUnitE2EHarness_RopePairCore___configure_coverage(this, first);
}

VComputeUnitE2EHarness_RopePairCore::~VComputeUnitE2EHarness_RopePairCore() {
}

// Coverage
void VComputeUnitE2EHarness_RopePairCore::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
