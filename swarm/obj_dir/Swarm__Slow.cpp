// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Swarm.h for the primary calling header

#include "Swarm.h"
#include "Swarm__Syms.h"

//==========

VL_CTOR_IMP(Swarm) {
    Swarm__Syms* __restrict vlSymsp = __VlSymsp = new Swarm__Syms(this, name());
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, Swarm_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Swarm::__Vconfigure(Swarm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Swarm::~Swarm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Swarm::_initial__TOP__1(Swarm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Swarm::_initial__TOP__1\n"); );
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O = 1U;
}

void Swarm::_eval_initial(Swarm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Swarm::_eval_initial\n"); );
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Swarm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Swarm::final\n"); );
    // Variables
    Swarm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Swarm::_eval_settle(Swarm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Swarm::_eval_settle\n"); );
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Swarm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Swarm::_ctor_var_reset\n"); );
    // Body
    O = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
