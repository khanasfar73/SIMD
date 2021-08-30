// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See LDST.h for the primary calling header

#include "LDST.h"
#include "LDST__Syms.h"

//==========

VL_CTOR_IMP(LDST) {
    LDST__Syms* __restrict vlSymsp = __VlSymsp = new LDST__Syms(this, name());
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, LDST_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void LDST::__Vconfigure(LDST__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

LDST::~LDST() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void LDST::_settle__TOP__2(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_settle__TOP__2\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[0U] 
        = vlTOPp->Load_i[0U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[1U] 
        = vlTOPp->Load_i[1U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[2U] 
        = vlTOPp->Load_i[2U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[3U] 
        = vlTOPp->Load_i[3U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[4U] 
        = vlTOPp->Load_i[4U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[5U] 
        = vlTOPp->Load_i[5U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[6U] 
        = vlTOPp->Load_i[6U];
    vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[7U] 
        = vlTOPp->Load_i[7U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[0U] 
        = vlTOPp->Store_i[0U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[1U] 
        = vlTOPp->Store_i[1U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[2U] 
        = vlTOPp->Store_i[2U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[3U] 
        = vlTOPp->Store_i[3U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[4U] 
        = vlTOPp->Store_i[4U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[5U] 
        = vlTOPp->Store_i[5U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[6U] 
        = vlTOPp->Store_i[6U];
    vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[7U] 
        = vlTOPp->Store_i[7U];
    vlTOPp->Load_o[0U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [0U];
    vlTOPp->Load_o[1U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [1U];
    vlTOPp->Load_o[2U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [2U];
    vlTOPp->Load_o[3U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [3U];
    vlTOPp->Load_o[4U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [4U];
    vlTOPp->Load_o[5U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [5U];
    vlTOPp->Load_o[6U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [6U];
    vlTOPp->Load_o[7U] = vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1
        [7U];
    vlTOPp->Store_o[0U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [0U];
    vlTOPp->Store_o[1U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [1U];
    vlTOPp->Store_o[2U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [2U];
    vlTOPp->Store_o[3U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [3U];
    vlTOPp->Store_o[4U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [4U];
    vlTOPp->Store_o[5U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [5U];
    vlTOPp->Store_o[6U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [6U];
    vlTOPp->Store_o[7U] = vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1
        [7U];
}

void LDST::_eval_initial(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_eval_initial\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void LDST::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::final\n"); );
    // Variables
    LDST__Syms* __restrict vlSymsp = this->__VlSymsp;
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void LDST::_eval_settle(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_eval_settle\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void LDST::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_ctor_var_reset\n"); );
    // Body
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Load_o[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Store_o[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Load_i[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Store_i[__Vi0] = VL_RAND_RESET_I(16);
    }
    clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        LDST__DOT____Vcellinp__load_unit____pinNumber2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        LDST__DOT____Vcellout__load_unit____pinNumber1[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        LDST__DOT____Vcellinp__store_unit____pinNumber2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        LDST__DOT____Vcellout__store_unit____pinNumber1[__Vi0] = VL_RAND_RESET_I(16);
    }
    LDST__DOT__load_unit__DOT__unnamedblk1__DOT__i = 0;
    LDST__DOT__store_unit__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
