// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Cache.h for the primary calling header

#include "Cache.h"
#include "Cache__Syms.h"

//==========

VL_CTOR_IMP(Cache) {
    Cache__Syms* __restrict vlSymsp = __VlSymsp = new Cache__Syms(this, name());
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, Cache_OpCodes);
    VL_CELL(__PVT__cache_def, Cache_cache_def);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Cache::__Vconfigure(Cache__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Cache::~Cache() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Cache::_initial__TOP__1(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_initial__TOP__1\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    vlTOPp->Cache__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Cache__DOT__unnamedblk1__DOT__i)) {
        VL_EXTENDS_WI(128,32, __Vtemp1, vlTOPp->Cache__DOT__unnamedblk1__DOT__i);
        VL_ASSIGNSEL_WIIW(128,(0x1ffffU & (vlTOPp->Cache__DOT__unnamedblk1__DOT__i 
                                           << 7U)), vlTOPp->Cache__DOT__data_mem, __Vtemp1);
        vlTOPp->Cache__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                   + vlTOPp->Cache__DOT__unnamedblk1__DOT__i);
    }
}

void Cache::_eval_initial(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_eval_initial\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Cache::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::final\n"); );
    // Variables
    Cache__Syms* __restrict vlSymsp = this->__VlSymsp;
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Cache::_eval_settle(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_eval_settle\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Cache::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(128, data_read);
    data_req = 0;
    VL_ZERO_RESET_W(128, data_write);
    clk = 0;
    VL_ZERO_RESET_W(131072, Cache__DOT__data_mem);
    Cache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
