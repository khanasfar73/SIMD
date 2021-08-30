// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Swarm.h for the primary calling header

#include "Swarm_OpCodes.h"
#include "Swarm__Syms.h"

//==========

VL_CTOR_IMP(Swarm_OpCodes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Swarm_OpCodes::__Vconfigure(Swarm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Swarm_OpCodes::~Swarm_OpCodes() {
}

void Swarm_OpCodes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Swarm_OpCodes::_ctor_var_reset\n"); );
}
