// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See EB.h for the primary calling header

#include "EB.h"
#include "EB__Syms.h"

//==========

void EB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate EB::eval\n"); );
    EB__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("EB.sv", 10, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void EB::_eval_initial_loop(EB__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("EB.sv", 10, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void EB::_combo__TOP__2(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_combo__TOP__2\n"); );
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
}

VL_INLINE_OPT void EB::_sequent__TOP__4(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_sequent__TOP__4\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v0;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v1;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v2;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v3;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v4;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v5;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v6;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v7;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v0;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v1;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v2;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v3;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v4;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v5;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v6;
    SData/*15:0*/ __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v7;
    // Body
    vlTOPp->EB__DOT__idp__DOT__IDP__DOT__unnamedblk2__DOT__i = 4U;
    vlTOPp->EB__DOT__ldst1__DOT__load_unit__DOT__unnamedblk1__DOT__i = 8U;
    vlTOPp->EB__DOT__ldst1__DOT__store_unit__DOT__unnamedblk1__DOT__i = 8U;
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v0 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [0U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v1 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [1U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v2 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [2U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v3 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [3U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v4 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [4U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v5 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [5U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v6 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [6U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v7 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2
        [7U];
    if ((1U == (IData)(vlTOPp->OP))) {
        vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result 
            = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                          [6U] + vlTOPp->EB__DOT__to_mem_w
                          [7U]));
    } else {
        if ((2U == (IData)(vlTOPp->OP))) {
            vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result 
                = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                              [6U] * vlTOPp->EB__DOT__to_mem_w
                              [7U]));
        } else {
            if ((0U != (IData)(vlTOPp->OP))) {
                vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result = 0xfU;
            }
        }
    }
    if ((1U == (IData)(vlTOPp->OP))) {
        vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result 
            = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                          [4U] + vlTOPp->EB__DOT__to_mem_w
                          [5U]));
    } else {
        if ((2U == (IData)(vlTOPp->OP))) {
            vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result 
                = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                              [4U] * vlTOPp->EB__DOT__to_mem_w
                              [5U]));
        } else {
            if ((0U != (IData)(vlTOPp->OP))) {
                vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result = 0xfU;
            }
        }
    }
    if ((1U == (IData)(vlTOPp->OP))) {
        vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result 
            = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                          [2U] + vlTOPp->EB__DOT__to_mem_w
                          [3U]));
    } else {
        if ((2U == (IData)(vlTOPp->OP))) {
            vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result 
                = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                              [2U] * vlTOPp->EB__DOT__to_mem_w
                              [3U]));
        } else {
            if ((0U != (IData)(vlTOPp->OP))) {
                vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result = 0xfU;
            }
        }
    }
    if ((1U == (IData)(vlTOPp->OP))) {
        vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result 
            = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                          [0U] + vlTOPp->EB__DOT__to_mem_w
                          [1U]));
    } else {
        if ((2U == (IData)(vlTOPp->OP))) {
            vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result 
                = (0xffffU & (vlTOPp->EB__DOT__to_mem_w
                              [0U] * vlTOPp->EB__DOT__to_mem_w
                              [1U]));
        } else {
            if ((0U != (IData)(vlTOPp->OP))) {
                vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result = 0xfU;
            }
        }
    }
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v0 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [0U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v1 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [1U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v2 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [2U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v3 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [3U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v4 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [4U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v5 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [5U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v6 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [6U];
    __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v7 
        = vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2
        [7U];
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[0U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v0;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[1U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v1;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[2U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v2;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[3U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v3;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[4U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v4;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[5U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v5;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[6U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v6;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[7U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1__v7;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[0U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v0;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[1U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v1;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[2U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v2;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[3U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v3;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[4U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v4;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[5U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v5;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[6U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v6;
    vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[7U] 
        = __Vdlyvval__EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1__v7;
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
    vlTOPp->EB__DOT__alu_out_w[3U] = vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[2U] = vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[1U] = vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result;
    vlTOPp->EB__DOT__alu_out_w[0U] = vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result;
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
}

VL_INLINE_OPT void EB::_sequent__TOP__5(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_sequent__TOP__5\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__EB__DOT__rf__DOT__reg_array__v0;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v1;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v2;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v3;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v4;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v5;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v6;
    CData/*3:0*/ __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v7;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v0;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v1;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v2;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v3;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v4;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v5;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v6;
    SData/*15:0*/ __Vdlyvval__EB__DOT__rf__DOT__reg_array__v7;
    // Body
    vlTOPp->EB__DOT__rf__DOT__unnamedblk2__DOT__i = 0x10U;
    if (vlTOPp->wr_en) {
        vlTOPp->EB__DOT__rf__DOT__unnamedblk1__DOT__j = 8U;
    }
    VL_WRITEF("$RegFile ========> R0: %2#\n$RegFile ========> R1: %2#\n$RegFile ========> R2: %2#\n$RegFile ========> R3: %2#\n$RegFile ========> R4: %2#\n$RegFile ========> R5: %2#\n$RegFile ========> R6: %2#\n$RegFile ========> R7: %2#\n$RegFile ========> R8: %2#\n$RegFile ========> R9: %2#\n$RegFile ========> R10: %2#\n$RegFile ========> R11: %2#\n$RegFile ========> R12: %2#\n$RegFile ========> R13: %2#\n$RegFile ========> R14: %2#\n$RegFile ========> R15: %2#\n",
              16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [1U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [2U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [3U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [4U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [5U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [6U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [7U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [8U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [9U],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xaU],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xbU],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xcU],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xdU],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xeU],16,vlTOPp->EB__DOT__rf__DOT__reg_array
              [0xfU]);
    __Vdlyvset__EB__DOT__rf__DOT__reg_array__v0 = 0U;
    if (vlTOPp->wr_en) {
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v0 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [0U];
        __Vdlyvset__EB__DOT__rf__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v0 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [0U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v1 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [1U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v1 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [1U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v2 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [2U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v2 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [2U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v3 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [3U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v3 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [3U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v4 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [4U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v4 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [4U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v5 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [5U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v5 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [5U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v6 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [6U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v6 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [6U];
        __Vdlyvval__EB__DOT__rf__DOT__reg_array__v7 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_data
            [7U];
        __Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v7 
            = vlTOPp->EB__DOT____Vcellinp__rf__w_addr
            [7U];
    }
    if (__Vdlyvset__EB__DOT__rf__DOT__reg_array__v0) {
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v0] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v0;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v1] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v1;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v2] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v2;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v3] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v3;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v4] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v4;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v5] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v5;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v6] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v6;
        vlTOPp->EB__DOT__rf__DOT__reg_array[__Vdlyvdim0__EB__DOT__rf__DOT__reg_array__v7] 
            = __Vdlyvval__EB__DOT__rf__DOT__reg_array__v7;
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

VL_INLINE_OPT void EB::_combo__TOP__6(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_combo__TOP__6\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void EB::_eval(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_eval\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData EB::_change_request(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_change_request\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData EB::_change_request_1(EB__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_change_request_1\n"); );
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void EB::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    EB::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((OP & 0x80U))) {
        Verilated::overWidthError("OP");}
    if (VL_UNLIKELY((wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((feed_data & 0xfeU))) {
        Verilated::overWidthError("feed_data");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
