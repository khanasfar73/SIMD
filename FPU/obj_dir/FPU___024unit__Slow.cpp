// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FPU.h for the primary calling header

#include "FPU___024unit.h"
#include "FPU__Syms.h"

//==========

VL_CTOR_IMP(FPU___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void FPU___024unit::__Vconfigure(FPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

FPU___024unit::~FPU___024unit() {
}

void FPU___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        FPU___024unit::_ctor_var_reset\n"); );
}
