// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Regfile.h for the primary calling header

#include "Regfile_OpCodes.h"
#include "Regfile__Syms.h"

//==========

VL_CTOR_IMP(Regfile_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Regfile_OpCodes::__Vconfigure(Regfile__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Regfile_OpCodes::~Regfile_OpCodes() {
}

void Regfile_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Regfile_OpCodes::_ctor_var_reset\n"); );
}
