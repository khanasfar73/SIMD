// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See EB.h for the primary calling header

#include "EB_OpCodes.h"
#include "EB__Syms.h"

//==========

VL_CTOR_IMP(EB_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void EB_OpCodes::__Vconfigure(EB__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

EB_OpCodes::~EB_OpCodes() {
}

void EB_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          EB_OpCodes::_ctor_var_reset\n"); );
}
