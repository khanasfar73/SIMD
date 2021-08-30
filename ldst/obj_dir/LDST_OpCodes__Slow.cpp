// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See LDST.h for the primary calling header

#include "LDST_OpCodes.h"
#include "LDST__Syms.h"

//==========

VL_CTOR_IMP(LDST_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void LDST_OpCodes::__Vconfigure(LDST__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

LDST_OpCodes::~LDST_OpCodes() {
}

void LDST_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          LDST_OpCodes::_ctor_var_reset\n"); );
}
