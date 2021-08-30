// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FPU.h for the primary calling header

#include "FPU.h"
#include "FPU__Syms.h"

//==========

VL_CTOR_IMP(FPU) {
    FPU__Syms* __restrict vlSymsp = __VlSymsp = new FPU__Syms(this, name());
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, FPU_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void FPU::__Vconfigure(FPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

FPU::~FPU() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void FPU::_settle__TOP__2(FPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FPU::_settle__TOP__2\n"); );
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FPU_Out = vlTOPp->FPU__DOT__FPU_Result;
}

void FPU::_eval_initial(FPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FPU::_eval_initial\n"); );
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void FPU::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FPU::final\n"); );
    // Variables
    FPU__Syms* __restrict vlSymsp = this->__VlSymsp;
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void FPU::_eval_settle(FPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FPU::_eval_settle\n"); );
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void FPU::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FPU::_ctor_var_reset\n"); );
    // Body
    FPU_Out = VL_RAND_RESET_I(16);
    A = VL_RAND_RESET_I(16);
    B = VL_RAND_RESET_I(16);
    C = VL_RAND_RESET_I(16);
    OP = 0;
    clk = VL_RAND_RESET_I(1);
    FPU__DOT__FPU_Result = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
