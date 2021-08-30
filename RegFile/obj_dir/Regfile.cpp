// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Regfile.h for the primary calling header

#include "Regfile.h"
#include "Regfile__Syms.h"

//==========

void Regfile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Regfile::eval\n"); );
    Regfile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Regfile.sv", 6, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Regfile::_eval_initial_loop(Regfile__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Regfile.sv", 6, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Regfile::_sequent__TOP__1(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_sequent__TOP__1\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__Regfile__DOT__reg_array__v0;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v1;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v2;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v3;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v4;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v5;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v6;
    CData/*3:0*/ __Vdlyvdim0__Regfile__DOT__reg_array__v7;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v0;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v1;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v2;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v3;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v4;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v5;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v6;
    SData/*15:0*/ __Vdlyvval__Regfile__DOT__reg_array__v7;
    // Body
    vlTOPp->Regfile__DOT__unnamedblk2__DOT__i = 0x10U;
    if (vlTOPp->wr_en) {
        vlTOPp->Regfile__DOT__unnamedblk1__DOT__j = 8U;
    }
    VL_WRITEF("$RegFile ========> R0: %2#\n$RegFile ========> R1: %2#\n$RegFile ========> R2: %2#\n$RegFile ========> R3: %2#\n$RegFile ========> R4: %2#\n$RegFile ========> R5: %2#\n$RegFile ========> R6: %2#\n$RegFile ========> R7: %2#\n$RegFile ========> R8: %2#\n$RegFile ========> R9: %2#\n$RegFile ========> R10: %2#\n$RegFile ========> R11: %2#\n$RegFile ========> R12: %2#\n$RegFile ========> R13: %2#\n$RegFile ========> R14: %2#\n$RegFile ========> R15: %2#\n",
              16,vlTOPp->Regfile__DOT__reg_array[0U],
              16,vlTOPp->Regfile__DOT__reg_array[1U],
              16,vlTOPp->Regfile__DOT__reg_array[2U],
              16,vlTOPp->Regfile__DOT__reg_array[3U],
              16,vlTOPp->Regfile__DOT__reg_array[4U],
              16,vlTOPp->Regfile__DOT__reg_array[5U],
              16,vlTOPp->Regfile__DOT__reg_array[6U],
              16,vlTOPp->Regfile__DOT__reg_array[7U],
              16,vlTOPp->Regfile__DOT__reg_array[8U],
              16,vlTOPp->Regfile__DOT__reg_array[9U],
              16,vlTOPp->Regfile__DOT__reg_array[0xaU],
              16,vlTOPp->Regfile__DOT__reg_array[0xbU],
              16,vlTOPp->Regfile__DOT__reg_array[0xcU],
              16,vlTOPp->Regfile__DOT__reg_array[0xdU],
              16,vlTOPp->Regfile__DOT__reg_array[0xeU],
              16,vlTOPp->Regfile__DOT__reg_array[0xfU]);
    __Vdlyvset__Regfile__DOT__reg_array__v0 = 0U;
    if (vlTOPp->wr_en) {
        __Vdlyvval__Regfile__DOT__reg_array__v0 = vlTOPp->w_data
            [0U];
        __Vdlyvset__Regfile__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__Regfile__DOT__reg_array__v0 = 
            vlTOPp->w_addr[0U];
        __Vdlyvval__Regfile__DOT__reg_array__v1 = vlTOPp->w_data
            [1U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v1 = 
            vlTOPp->w_addr[1U];
        __Vdlyvval__Regfile__DOT__reg_array__v2 = vlTOPp->w_data
            [2U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v2 = 
            vlTOPp->w_addr[2U];
        __Vdlyvval__Regfile__DOT__reg_array__v3 = vlTOPp->w_data
            [3U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v3 = 
            vlTOPp->w_addr[3U];
        __Vdlyvval__Regfile__DOT__reg_array__v4 = vlTOPp->w_data
            [4U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v4 = 
            vlTOPp->w_addr[4U];
        __Vdlyvval__Regfile__DOT__reg_array__v5 = vlTOPp->w_data
            [5U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v5 = 
            vlTOPp->w_addr[5U];
        __Vdlyvval__Regfile__DOT__reg_array__v6 = vlTOPp->w_data
            [6U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v6 = 
            vlTOPp->w_addr[6U];
        __Vdlyvval__Regfile__DOT__reg_array__v7 = vlTOPp->w_data
            [7U];
        __Vdlyvdim0__Regfile__DOT__reg_array__v7 = 
            vlTOPp->w_addr[7U];
    }
    if (__Vdlyvset__Regfile__DOT__reg_array__v0) {
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v0] 
            = __Vdlyvval__Regfile__DOT__reg_array__v0;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v1] 
            = __Vdlyvval__Regfile__DOT__reg_array__v1;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v2] 
            = __Vdlyvval__Regfile__DOT__reg_array__v2;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v3] 
            = __Vdlyvval__Regfile__DOT__reg_array__v3;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v4] 
            = __Vdlyvval__Regfile__DOT__reg_array__v4;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v5] 
            = __Vdlyvval__Regfile__DOT__reg_array__v5;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v6] 
            = __Vdlyvval__Regfile__DOT__reg_array__v6;
        vlTOPp->Regfile__DOT__reg_array[__Vdlyvdim0__Regfile__DOT__reg_array__v7] 
            = __Vdlyvval__Regfile__DOT__reg_array__v7;
    }
}

VL_INLINE_OPT void Regfile::_combo__TOP__3(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_combo__TOP__3\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->r_data[0U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[0U]];
    vlTOPp->r_data[1U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[1U]];
    vlTOPp->r_data[2U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[2U]];
    vlTOPp->r_data[3U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[3U]];
    vlTOPp->r_data[4U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[4U]];
    vlTOPp->r_data[5U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[5U]];
    vlTOPp->r_data[6U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[6U]];
    vlTOPp->r_data[7U] = vlTOPp->Regfile__DOT__reg_array
        [vlTOPp->r_addr[7U]];
}

void Regfile::_eval(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_eval\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Regfile::_change_request(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_change_request\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Regfile::_change_request_1(Regfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_change_request_1\n"); );
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Regfile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Regfile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
