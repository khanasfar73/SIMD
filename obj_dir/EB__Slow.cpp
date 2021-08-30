// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See EB.h for the primary calling header

#include "EB.h"
#include "EB__Syms.h"

//==========

VL_CTOR_IMP(EB) {
    EB__Syms* __restrict vlSymsp = __VlSymsp = new EB__Syms(this, name());
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__OpCodes, EB_OpCodes);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void EB::__Vconfigure(EB__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

EB::~EB() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void EB::_initial__TOP__1(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_initial__TOP__1\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[0U] = 2U;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[1U] = 3U;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[0U] = 0U;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[1U] = 1U;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[2U] = 6U;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[3U] = 7U;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[2U] = 4U;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[3U] = 5U;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[4U] = 0xaU;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[5U] = 0xbU;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[4U] = 8U;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[5U] = 9U;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[6U] = 0xeU;
    vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[7U] = 0xfU;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[6U] = 0xcU;
    vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[7U] = 0xdU;
    vlTOPp->EB__DOT__idp__DOT__unnamedblk1__DOT__i = 4U;
    vlTOPp->EB__DOT__w_addr[0U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [0U];
    vlTOPp->EB__DOT__w_addr[1U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [1U];
    vlTOPp->EB__DOT__w_addr[2U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [2U];
    vlTOPp->EB__DOT__w_addr[3U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [3U];
    vlTOPp->EB__DOT__w_addr[4U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [4U];
    vlTOPp->EB__DOT__w_addr[5U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [5U];
    vlTOPp->EB__DOT__w_addr[6U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [6U];
    vlTOPp->EB__DOT__w_addr[7U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [7U];
    vlTOPp->EB__DOT__r_addr[0U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [0U];
    vlTOPp->EB__DOT__r_addr[1U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [1U];
    vlTOPp->EB__DOT__r_addr[2U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [2U];
    vlTOPp->EB__DOT__r_addr[3U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [3U];
    vlTOPp->EB__DOT__r_addr[4U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [4U];
    vlTOPp->EB__DOT__r_addr[5U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [5U];
    vlTOPp->EB__DOT__r_addr[6U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [6U];
    vlTOPp->EB__DOT__r_addr[7U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [7U];
}

void EB::_settle__TOP__3(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_settle__TOP__3\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[0U] 
        = vlTOPp->Input_in[0U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[1U] 
        = vlTOPp->Input_in[1U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[2U] 
        = vlTOPp->Input_in[2U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[3U] 
        = vlTOPp->Input_in[3U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[4U] 
        = vlTOPp->Input_in[4U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[5U] 
        = vlTOPp->Input_in[5U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[6U] 
        = vlTOPp->Input_in[6U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[7U] 
        = vlTOPp->Input_in[7U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[0U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [0U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[1U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [1U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[2U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [2U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[3U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [3U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[4U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [4U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[5U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [5U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[6U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [6U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[7U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1
        [7U];
    vlTOPp->EB__DOT__alu_out_w[0U] = vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[1U] = vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[2U] = vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[3U] = vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[0U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [0U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[1U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [1U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[2U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [2U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[3U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [3U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[4U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [4U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[5U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [5U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[6U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [6U];
    vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[7U] 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1
        [7U];
    vlTOPp->EB__DOT__w_addr[0U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [0U];
    vlTOPp->EB__DOT__w_addr[1U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [1U];
    vlTOPp->EB__DOT__w_addr[2U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [2U];
    vlTOPp->EB__DOT__w_addr[3U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [3U];
    vlTOPp->EB__DOT__w_addr[4U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [4U];
    vlTOPp->EB__DOT__w_addr[5U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [5U];
    vlTOPp->EB__DOT__w_addr[6U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [6U];
    vlTOPp->EB__DOT__w_addr[7U] = vlTOPp->EB__DOT____Vcellout__idp__w_addr_o
        [7U];
    vlTOPp->EB__DOT__r_addr[0U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [0U];
    vlTOPp->EB__DOT__r_addr[1U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [1U];
    vlTOPp->EB__DOT__r_addr[2U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [2U];
    vlTOPp->EB__DOT__r_addr[3U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [3U];
    vlTOPp->EB__DOT__r_addr[4U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [4U];
    vlTOPp->EB__DOT__r_addr[5U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [5U];
    vlTOPp->EB__DOT__r_addr[6U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [6U];
    vlTOPp->EB__DOT__r_addr[7U] = vlTOPp->EB__DOT____Vcellout__idp__r_addr_o
        [7U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[0U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [0U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[1U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [1U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[2U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [2U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[3U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [3U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[4U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [4U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[5U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [5U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[6U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [6U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[7U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i
        [7U];
    vlTOPp->Result_out[0U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [0U];
    vlTOPp->Result_out[1U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [1U];
    vlTOPp->Result_out[2U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [2U];
    vlTOPp->Result_out[3U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [3U];
    vlTOPp->Result_out[4U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [4U];
    vlTOPp->Result_out[5U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [5U];
    vlTOPp->Result_out[6U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [6U];
    vlTOPp->Result_out[7U] = vlTOPp->EB__DOT____Vcellout__ldst1__Store_o
        [7U];
    vlTOPp->EB__DOT__Load_data[0U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [0U];
    vlTOPp->EB__DOT__Load_data[1U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [1U];
    vlTOPp->EB__DOT__Load_data[2U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [2U];
    vlTOPp->EB__DOT__Load_data[3U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [3U];
    vlTOPp->EB__DOT__Load_data[4U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [4U];
    vlTOPp->EB__DOT__Load_data[5U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [5U];
    vlTOPp->EB__DOT__Load_data[6U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [6U];
    vlTOPp->EB__DOT__Load_data[7U] = vlTOPp->EB__DOT____Vcellout__ldst1__Load_o
        [7U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[0U] = vlTOPp->EB__DOT__w_addr
        [0U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[1U] = vlTOPp->EB__DOT__w_addr
        [1U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[2U] = vlTOPp->EB__DOT__w_addr
        [2U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[3U] = vlTOPp->EB__DOT__w_addr
        [3U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[4U] = vlTOPp->EB__DOT__w_addr
        [4U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[5U] = vlTOPp->EB__DOT__w_addr
        [5U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[6U] = vlTOPp->EB__DOT__w_addr
        [6U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[7U] = vlTOPp->EB__DOT__w_addr
        [7U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[0U] = vlTOPp->EB__DOT__w_addr
        [0U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[1U] = vlTOPp->EB__DOT__w_addr
        [1U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[2U] = vlTOPp->EB__DOT__w_addr
        [2U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[3U] = vlTOPp->EB__DOT__w_addr
        [3U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[4U] = vlTOPp->EB__DOT__w_addr
        [4U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[5U] = vlTOPp->EB__DOT__w_addr
        [5U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[6U] = vlTOPp->EB__DOT__w_addr
        [6U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_addr[7U] = vlTOPp->EB__DOT__w_addr
        [7U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[0U] = vlTOPp->EB__DOT__r_addr
        [0U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[1U] = vlTOPp->EB__DOT__r_addr
        [1U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[2U] = vlTOPp->EB__DOT__r_addr
        [2U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[3U] = vlTOPp->EB__DOT__r_addr
        [3U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[4U] = vlTOPp->EB__DOT__r_addr
        [4U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[5U] = vlTOPp->EB__DOT__r_addr
        [5U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[6U] = vlTOPp->EB__DOT__r_addr
        [6U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[7U] = vlTOPp->EB__DOT__r_addr
        [7U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[0U] = vlTOPp->EB__DOT__r_addr
        [0U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[1U] = vlTOPp->EB__DOT__r_addr
        [1U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[2U] = vlTOPp->EB__DOT__r_addr
        [2U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[3U] = vlTOPp->EB__DOT__r_addr
        [3U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[4U] = vlTOPp->EB__DOT__r_addr
        [4U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[5U] = vlTOPp->EB__DOT__r_addr
        [5U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[6U] = vlTOPp->EB__DOT__r_addr
        [6U];
    vlTOPp->EB__DOT____Vcellinp__rf__r_addr[7U] = vlTOPp->EB__DOT__r_addr
        [7U];
    if (vlTOPp->feed_data) {
        vlTOPp->EB__DOT__w_data[1U] = vlTOPp->EB__DOT__Load_data
            [0U];
        vlTOPp->EB__DOT__w_data[3U] = vlTOPp->EB__DOT__Load_data
            [1U];
        vlTOPp->EB__DOT__w_data[5U] = vlTOPp->EB__DOT__Load_data
            [2U];
        vlTOPp->EB__DOT__w_data[7U] = vlTOPp->EB__DOT__Load_data
            [3U];
        vlTOPp->EB__DOT__w_data[0U] = vlTOPp->EB__DOT__Load_data
            [0U];
        vlTOPp->EB__DOT__w_data[2U] = vlTOPp->EB__DOT__Load_data
            [1U];
        vlTOPp->EB__DOT__w_data[4U] = vlTOPp->EB__DOT__Load_data
            [2U];
        vlTOPp->EB__DOT__w_data[6U] = vlTOPp->EB__DOT__Load_data
            [3U];
    } else {
        vlTOPp->EB__DOT__w_data[1U] = 0xffffU;
        vlTOPp->EB__DOT__w_data[3U] = 0xffffU;
        vlTOPp->EB__DOT__w_data[5U] = 0xffffU;
        vlTOPp->EB__DOT__w_data[7U] = 0xffffU;
        vlTOPp->EB__DOT__w_data[0U] = vlTOPp->EB__DOT__alu_out_w
            [0U];
        vlTOPp->EB__DOT__w_data[2U] = vlTOPp->EB__DOT__alu_out_w
            [1U];
        vlTOPp->EB__DOT__w_data[4U] = vlTOPp->EB__DOT__alu_out_w
            [2U];
        vlTOPp->EB__DOT__w_data[6U] = vlTOPp->EB__DOT__alu_out_w
            [3U];
    }
    vlTOPp->EB__DOT____Vcellout__rf__r_data[0U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[0U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[1U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[1U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[2U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[2U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[3U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[3U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[4U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[4U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[5U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[5U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[6U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[6U]];
    vlTOPp->EB__DOT____Vcellout__rf__r_data[7U] = vlTOPp->EB__DOT__rf__DOT__reg_array
        [vlTOPp->EB__DOT____Vcellinp__rf__r_addr[7U]];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[0U] = vlTOPp->EB__DOT__w_data
        [0U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[1U] = vlTOPp->EB__DOT__w_data
        [1U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[2U] = vlTOPp->EB__DOT__w_data
        [2U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[3U] = vlTOPp->EB__DOT__w_data
        [3U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[4U] = vlTOPp->EB__DOT__w_data
        [4U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[5U] = vlTOPp->EB__DOT__w_data
        [5U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[6U] = vlTOPp->EB__DOT__w_data
        [6U];
    vlTOPp->EB__DOT____Vcellinp__rf__w_data[7U] = vlTOPp->EB__DOT__w_data
        [7U];
    vlTOPp->EB__DOT__to_mem_w[0U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [0U];
    vlTOPp->EB__DOT__to_mem_w[1U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [1U];
    vlTOPp->EB__DOT__to_mem_w[2U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [2U];
    vlTOPp->EB__DOT__to_mem_w[3U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [3U];
    vlTOPp->EB__DOT__to_mem_w[4U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [4U];
    vlTOPp->EB__DOT__to_mem_w[5U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [5U];
    vlTOPp->EB__DOT__to_mem_w[6U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [6U];
    vlTOPp->EB__DOT__to_mem_w[7U] = vlTOPp->EB__DOT____Vcellout__rf__r_data
        [7U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[0U] 
        = vlTOPp->EB__DOT__to_mem_w[0U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[1U] 
        = vlTOPp->EB__DOT__to_mem_w[1U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[2U] 
        = vlTOPp->EB__DOT__to_mem_w[2U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[3U] 
        = vlTOPp->EB__DOT__to_mem_w[3U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[4U] 
        = vlTOPp->EB__DOT__to_mem_w[4U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[5U] 
        = vlTOPp->EB__DOT__to_mem_w[5U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[6U] 
        = vlTOPp->EB__DOT__to_mem_w[6U];
    vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[7U] 
        = vlTOPp->EB__DOT__to_mem_w[7U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[0U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [0U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[1U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [1U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[2U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [2U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[3U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [3U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[4U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [4U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[5U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [5U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[6U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [6U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[7U] 
        = vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i
        [7U];
}

void EB::_eval_initial(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_eval_initial\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void EB::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::final\n"); );
    // Variables
    EB__Syms* __restrict vlSymsp = this->__VlSymsp;
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void EB::_eval_settle(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_eval_settle\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void EB::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_ctor_var_reset\n"); );
    // Body
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Result_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        Input_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    OP = 0;
    wr_en = VL_RAND_RESET_I(1);
    feed_data = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__w_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__Load_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        EB__DOT__alu_out_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__to_mem_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__w_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__r_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellout__idp__r_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellout__idp__w_addr_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellinp__rf__w_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellinp__rf__r_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellinp__rf__w_addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellout__rf__r_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellinp__ldst1__Store_i[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellout__ldst1__Store_o[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellinp__ldst1__Load_i[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT____Vcellout__ldst1__Load_o[__Vi0] = VL_RAND_RESET_I(16);
    }
    EB__DOT__idp__DOT__unnamedblk1__DOT__i = 0;
    EB__DOT__idp__DOT__IDP__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        EB__DOT__rf__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(16);
    }
    EB__DOT__rf__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    EB__DOT__rf__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[__Vi0] = VL_RAND_RESET_I(16);
    }
    EB__DOT__ldst1__DOT__load_unit__DOT__unnamedblk1__DOT__i = 0;
    EB__DOT__ldst1__DOT__store_unit__DOT__unnamedblk1__DOT__i = 0;
    EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result = VL_RAND_RESET_I(16);
    EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result = VL_RAND_RESET_I(16);
    EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result = VL_RAND_RESET_I(16);
    EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
