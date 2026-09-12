// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRopeUnit__pch.h"
#include "VRopeUnit.h"
#include "VRopeUnit___024root.h"
#include "VRopeUnit_RopePairCore.h"

// FUNCTIONS
VRopeUnit__Syms::~VRopeUnit__Syms()
{
}

VRopeUnit__Syms::VRopeUnit__Syms(VerilatedContext* contextp, const char* namep, VRopeUnit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__RopeUnit__DOT__pairs_0{this, Verilated::catName(namep, "RopeUnit.pairs_0")}
    , TOP__RopeUnit__DOT__pairs_1{this, Verilated::catName(namep, "RopeUnit.pairs_1")}
    , TOP__RopeUnit__DOT__pairs_2{this, Verilated::catName(namep, "RopeUnit.pairs_2")}
    , TOP__RopeUnit__DOT__pairs_3{this, Verilated::catName(namep, "RopeUnit.pairs_3")}
    , TOP__RopeUnit__DOT__pairs_4{this, Verilated::catName(namep, "RopeUnit.pairs_4")}
    , TOP__RopeUnit__DOT__pairs_5{this, Verilated::catName(namep, "RopeUnit.pairs_5")}
    , TOP__RopeUnit__DOT__pairs_6{this, Verilated::catName(namep, "RopeUnit.pairs_6")}
    , TOP__RopeUnit__DOT__pairs_7{this, Verilated::catName(namep, "RopeUnit.pairs_7")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__RopeUnit__DOT__pairs_0 = &TOP__RopeUnit__DOT__pairs_0;
    TOP.__PVT__RopeUnit__DOT__pairs_1 = &TOP__RopeUnit__DOT__pairs_1;
    TOP.__PVT__RopeUnit__DOT__pairs_2 = &TOP__RopeUnit__DOT__pairs_2;
    TOP.__PVT__RopeUnit__DOT__pairs_3 = &TOP__RopeUnit__DOT__pairs_3;
    TOP.__PVT__RopeUnit__DOT__pairs_4 = &TOP__RopeUnit__DOT__pairs_4;
    TOP.__PVT__RopeUnit__DOT__pairs_5 = &TOP__RopeUnit__DOT__pairs_5;
    TOP.__PVT__RopeUnit__DOT__pairs_6 = &TOP__RopeUnit__DOT__pairs_6;
    TOP.__PVT__RopeUnit__DOT__pairs_7 = &TOP__RopeUnit__DOT__pairs_7;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__RopeUnit__DOT__pairs_0.__Vconfigure(true);
    TOP__RopeUnit__DOT__pairs_1.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_2.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_3.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_4.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_5.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_6.__Vconfigure(false);
    TOP__RopeUnit__DOT__pairs_7.__Vconfigure(false);
}
