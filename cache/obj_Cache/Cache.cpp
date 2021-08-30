// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Cache.h for the primary calling header

#include "Cache.h"
#include "Cache__Syms.h"

//==========

void Cache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Cache::eval\n"); );
    Cache__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Cache.sv", 5, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Cache::_eval_initial_loop(Cache__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Cache.sv", 5, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Cache::_sequent__TOP__2(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_sequent__TOP__2\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (IData)(vlTOPp->data_req))) {
        VL_ASSIGNSEL_WIIW(128,(0x1ff80U & ((IData)(vlTOPp->data_req) 
                                           << 6U)), vlTOPp->Cache__DOT__data_mem, vlTOPp->data_write);
    }
}

VL_INLINE_OPT void Cache::_settle__TOP__3(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_settle__TOP__3\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_read[0U] = vlTOPp->Cache__DOT__data_mem[
        (0xffcU & ((IData)(vlTOPp->data_req) << 1U))];
    vlTOPp->data_read[1U] = vlTOPp->Cache__DOT__data_mem[
        ((IData)(1U) + (0xffcU & ((IData)(vlTOPp->data_req) 
                                  << 1U)))];
    vlTOPp->data_read[2U] = vlTOPp->Cache__DOT__data_mem[
        ((IData)(2U) + (0xffcU & ((IData)(vlTOPp->data_req) 
                                  << 1U)))];
    vlTOPp->data_read[3U] = vlTOPp->Cache__DOT__data_mem[
        ((IData)(3U) + (0xffcU & ((IData)(vlTOPp->data_req) 
                                  << 1U)))];
}

void Cache::_eval(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_eval\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_settle__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Cache::_change_request(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_change_request\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Cache::_change_request_1(Cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_change_request_1\n"); );
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Cache::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Cache::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
