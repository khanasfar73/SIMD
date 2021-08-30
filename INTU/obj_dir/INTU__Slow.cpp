// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See INTU.h for the primary calling header

#include "INTU.h"
#include "INTU__Syms.h"

//==========

VL_CTOR_IMP(INTU) {
    INTU__Syms* __restrict vlSymsp = __VlSymsp = new INTU__Syms(this, name());
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, INTU_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void INTU::__Vconfigure(INTU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

INTU::~INTU() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void INTU::_settle__TOP__2(INTU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    INTU::_settle__TOP__2\n"); );
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ALU_Out = vlTOPp->INTU__DOT__ALU_Result;
}

void INTU::_eval_initial(INTU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    INTU::_eval_initial\n"); );
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void INTU::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    INTU::final\n"); );
    // Variables
    INTU__Syms* __restrict vlSymsp = this->__VlSymsp;
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void INTU::_eval_settle(INTU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    INTU::_eval_settle\n"); );
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void INTU::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    INTU::_ctor_var_reset\n"); );
    // Body
    ALU_Out = VL_RAND_RESET_I(16);
    A = VL_RAND_RESET_I(16);
    B = VL_RAND_RESET_I(16);
    OP = 0;
    clk = VL_RAND_RESET_I(1);
    INTU__DOT__ALU_Result = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
