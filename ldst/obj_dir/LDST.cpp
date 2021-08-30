// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See LDST.h for the primary calling header

#include "LDST.h"
#include "LDST__Syms.h"

//==========

void LDST::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate LDST::eval\n"); );
    LDST__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("LDST.sv", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void LDST::_eval_initial_loop(LDST__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("LDST.sv", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void LDST::_sequent__TOP__1(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_sequent__TOP__1\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v0;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v1;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v2;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v3;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v4;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v5;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v6;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v7;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v0;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v1;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v2;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v3;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v4;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v5;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v6;
    SData/*15:0*/ __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v7;
    // Body
    vlTOPp->LDST__DOT__load_unit__DOT__unnamedblk1__DOT__i = 8U;
    vlTOPp->LDST__DOT__store_unit__DOT__unnamedblk1__DOT__i = 8U;
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v0 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [0U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v1 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [1U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v2 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [2U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v3 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [3U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v4 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [4U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v5 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [5U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v6 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [6U];
    __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v7 
        = vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2
        [7U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v0 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [0U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v1 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [1U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v2 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [2U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v3 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [3U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v4 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [4U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v5 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [5U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v6 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [6U];
    __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v7 
        = vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2
        [7U];
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[0U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v0;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[1U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v1;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[2U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v2;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[3U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v3;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[4U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v4;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[5U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v5;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[6U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v6;
    vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[7U] 
        = __Vdlyvval__LDST__DOT____Vcellout__store_unit____pinNumber1__v7;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[0U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v0;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[1U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v1;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[2U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v2;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[3U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v3;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[4U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v4;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[5U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v5;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[6U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v6;
    vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[7U] 
        = __Vdlyvval__LDST__DOT____Vcellout__load_unit____pinNumber1__v7;
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
}

VL_INLINE_OPT void LDST::_combo__TOP__3(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_combo__TOP__3\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void LDST::_eval(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_eval\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData LDST::_change_request(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_change_request\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData LDST::_change_request_1(LDST__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_change_request_1\n"); );
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void LDST::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    LDST::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
