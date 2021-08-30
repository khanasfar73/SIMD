// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FPU.h for the primary calling header

#include "FPU_OpCodes.h"
#include "FPU__Syms.h"

//==========

VL_CTOR_IMP(FPU_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void FPU_OpCodes::__Vconfigure(FPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

FPU_OpCodes::~FPU_OpCodes() {
}

void FPU_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          FPU_OpCodes::_ctor_var_reset\n"); );
}
