// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See --top-module=IDP.h for the primary calling header

#include "--top-module=IDP_OpCodes.h"
#include "--top-module=IDP__Syms.h"

//==========

VL_CTOR_IMP(--top-module=IDP_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void --top-module=IDP_OpCodes::__Vconfigure(--top-module=IDP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

--top-module=IDP_OpCodes::~--top-module=IDP_OpCodes() {
}

void --top-module=IDP_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          --top-module=IDP_OpCodes::_ctor_var_reset\n"); );
}
