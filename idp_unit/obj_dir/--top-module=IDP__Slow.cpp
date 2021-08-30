// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See --top-module=IDP.h for the primary calling header

#include "--top-module=IDP.h"
#include "--top-module=IDP__Syms.h"

//==========

VL_CTOR_IMP(--top-module=IDP) {
    --top-module=IDP__Syms* __restrict vlSymsp = __VlSymsp = new --top-module=IDP__Syms(this, name());
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, --top-module=IDP_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void --top-module=IDP::__Vconfigure(--top-module=IDP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

--top-module=IDP::~--top-module=IDP() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void --top-module=IDP::_initial__TOP__1(--top-module=IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    --top-module=IDP::_initial__TOP__1\n"); );
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->w_addr_o[0U] = 2U;
    vlTOPp->w_addr_o[1U] = 3U;
    vlTOPp->r_addr_o[0U] = 0U;
    vlTOPp->r_addr_o[1U] = 1U;
    vlTOPp->w_addr_o[2U] = 6U;
    vlTOPp->w_addr_o[3U] = 7U;
    vlTOPp->r_addr_o[2U] = 4U;
    vlTOPp->r_addr_o[3U] = 5U;
    vlTOPp->w_addr_o[4U] = 0xaU;
    vlTOPp->w_addr_o[5U] = 0xbU;
    vlTOPp->r_addr_o[4U] = 8U;
    vlTOPp->r_addr_o[5U] = 9U;
    vlTOPp->w_addr_o[6U] = 0xeU;
    vlTOPp->w_addr_o[7U] = 0xfU;
    vlTOPp->r_addr_o[6U] = 0xcU;
    vlTOPp->r_addr_o[7U] = 0xdU;
    vlTOPp->IDP__DOT__unnamedblk1__DOT__i = 4U;
}

void --top-module=IDP::_eval_initial(--top-module=IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    --top-module=IDP::_eval_initial\n"); );
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void --top-module=IDP::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    --top-module=IDP::final\n"); );
    // Variables
    --top-module=IDP__Syms* __restrict vlSymsp = this->__VlSymsp;
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void --top-module=IDP::_eval_settle(--top-module=IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    --top-module=IDP::_eval_settle\n"); );
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void --top-module=IDP::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    --top-module=IDP::_ctor_var_reset\n"); );
    // Body
    INT_OP_o = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        w_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        r_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    OP = 0;
    clk = VL_RAND_RESET_I(1);
    IDP__DOT__unnamedblk1__DOT__i = 0;
    IDP__DOT__IDP__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
