// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "INTU__Syms.h"


void INTU::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void INTU::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgSData(oldp+0,(vlTOPp->ALU_Out),16);
        tracep->chgSData(oldp+1,(vlTOPp->A),16);
        tracep->chgSData(oldp+2,(vlTOPp->B),16);
        tracep->chgCData(oldp+3,(vlTOPp->OP),3);
        tracep->chgBit(oldp+4,(vlTOPp->clk));
        tracep->chgSData(oldp+5,(vlTOPp->INTU__DOT__ALU_Result),16);
    }
}

void INTU::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
