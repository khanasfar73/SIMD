// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See INTU.h for the primary calling header

#include "INTU_OpCodes.h"
#include "INTU__Syms.h"

//==========

VL_CTOR_IMP(INTU_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void INTU_OpCodes::__Vconfigure(INTU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

INTU_OpCodes::~INTU_OpCodes() {
}

void INTU_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          INTU_OpCodes::_ctor_var_reset\n"); );
}
