// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See IDP.h for the primary calling header

#include "IDP_OpCodes.h"
#include "IDP__Syms.h"

//==========

VL_CTOR_IMP(IDP_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void IDP_OpCodes::__Vconfigure(IDP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

IDP_OpCodes::~IDP_OpCodes() {
}

void IDP_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          IDP_OpCodes::_ctor_var_reset\n"); );
}
