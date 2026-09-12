// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUniversalNormUnit.h for the primary calling header

#include "VUniversalNormUnit__pch.h"
#include "VUniversalNormUnit_Universal_Wide_LUT.h"
#include "VUniversalNormUnit__Syms.h"

void VUniversalNormUnit_Universal_Wide_LUT___ctor_var_reset(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);

VUniversalNormUnit_Universal_Wide_LUT::VUniversalNormUnit_Universal_Wide_LUT(VUniversalNormUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUniversalNormUnit_Universal_Wide_LUT___ctor_var_reset(this);
}

void VUniversalNormUnit_Universal_Wide_LUT___configure_coverage(VUniversalNormUnit_Universal_Wide_LUT* vlSelf, bool first);

void VUniversalNormUnit_Universal_Wide_LUT::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VUniversalNormUnit_Universal_Wide_LUT___configure_coverage(this, first);
}

VUniversalNormUnit_Universal_Wide_LUT::~VUniversalNormUnit_Universal_Wide_LUT() {
}

// Coverage
void VUniversalNormUnit_Universal_Wide_LUT::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
