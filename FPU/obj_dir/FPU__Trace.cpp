// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "FPU__Syms.h"


void FPU::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void FPU::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgSData(oldp+0,(vlTOPp->FPU_Out),16);
        tracep->chgSData(oldp+1,(vlTOPp->A),16);
        tracep->chgSData(oldp+2,(vlTOPp->B),16);
        tracep->chgSData(oldp+3,(vlTOPp->C),16);
        tracep->chgCData(oldp+4,(vlTOPp->OP),3);
        tracep->chgBit(oldp+5,(vlTOPp->clk));
        tracep->chgSData(oldp+6,(vlTOPp->FPU__DOT__FPU_Result),16);
    }
}

void FPU::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
