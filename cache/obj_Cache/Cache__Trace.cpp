// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Cache__Syms.h"


void Cache::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Cache::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->Cache__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+1,(vlTOPp->Cache__DOT__data_mem),131072);
        }
        tracep->chgWData(oldp+4097,(vlTOPp->data_read),128);
        tracep->chgSData(oldp+4101,(vlTOPp->data_req),11);
        tracep->chgWData(oldp+4102,(vlTOPp->data_write),128);
        tracep->chgBit(oldp+4106,(vlTOPp->clk));
    }
}

void Cache::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
