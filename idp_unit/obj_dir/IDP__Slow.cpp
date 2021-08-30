// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See IDP.h for the primary calling header

#include "IDP.h"
#include "IDP__Syms.h"

//==========

VL_CTOR_IMP(IDP) {
    IDP__Syms* __restrict vlSymsp = __VlSymsp = new IDP__Syms(this, name());
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void IDP::__Vconfigure(IDP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

IDP::~IDP() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void IDP::_eval_initial(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_eval_initial\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void IDP::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::final\n"); );
    // Variables
    IDP__Syms* __restrict vlSymsp = this->__VlSymsp;
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void IDP::_eval_settle(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_eval_settle\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void IDP::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_ctor_var_reset\n"); );
    // Body
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        alu_select_o[__Vi0] = 0;
    }
    f3_o = VL_RAND_RESET_I(3);
    f2_o = VL_RAND_RESET_I(2);
    f5_o = VL_RAND_RESET_I(5);
    mem_offset_o = VL_RAND_RESET_I(12);
    stride_o = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        rd_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        rs1_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        rs2_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    Inst_in = 0;
    WarpID_in = VL_RAND_RESET_I(6);
    thread_mask_in = VL_RAND_RESET_I(4);
    clk = VL_RAND_RESET_I(1);
    IDP__DOT__IDP__DOT__unnamedblk1__DOT__i = 0;
    IDP__DOT__IDP__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
