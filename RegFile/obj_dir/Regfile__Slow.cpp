// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Regfile.h for the primary calling header

#include "Regfile.h"
#include "Regfile__Syms.h"

//==========

VL_CTOR_IMP(Regfile) {
    Regfile__Syms* __restrict vlSymsp = __VlSymsp = new Regfile__Syms(this, name());
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, Regfile_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Regfile::__Vconfigure(Regfile__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Regfile::~Regfile() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Regfile::_initial__TOP__2(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_initial__TOP__2\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Regfile__DOT__reg_array[0U] = 0x45U;
    vlTOPp->Regfile__DOT__reg_array[1U] = 3U;
    vlTOPp->Regfile__DOT__reg_array[2U] = 0U;
    vlTOPp->Regfile__DOT__reg_array[3U] = 0U;
    vlTOPp->Regfile__DOT__reg_array[4U] = 4U;
    vlTOPp->Regfile__DOT__reg_array[5U] = 5U;
    vlTOPp->Regfile__DOT__reg_array[6U] = 0U;
    vlTOPp->Regfile__DOT__reg_array[7U] = 0U;
    vlTOPp->Regfile__DOT__reg_array[8U] = 8U;
    vlTOPp->Regfile__DOT__reg_array[9U] = 9U;
    vlTOPp->Regfile__DOT__reg_array[0xaU] = 0U;
    vlTOPp->Regfile__DOT__reg_array[0xbU] = 0U;
    vlTOPp->Regfile__DOT__reg_array[0xcU] = 0xcU;
    vlTOPp->Regfile__DOT__reg_array[0xdU] = 0xdU;
    vlTOPp->Regfile__DOT__reg_array[0xeU] = 0U;
    vlTOPp->Regfile__DOT__reg_array[0xfU] = 0U;
}

void Regfile::_eval_initial(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_eval_initial\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Regfile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::final\n"); );
    // Variables
    Regfile__Syms* __restrict vlSymsp = this->__VlSymsp;
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Regfile::_eval_settle(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_eval_settle\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_ctor_var_reset\n"); );
    // Body
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        r_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        w_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        r_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        w_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    wr_en = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        Regfile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(16);
    }
    Regfile__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    Regfile__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
