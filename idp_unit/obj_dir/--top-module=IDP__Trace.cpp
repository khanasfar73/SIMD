// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "--top-module=IDP__Syms.h"


void --top-module=IDP::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void --top-module=IDP::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlTOPp->IDP__DOT__unnamedblk1__DOT__i),16);
        }
        tracep->chgCData(oldp+1,(vlTOPp->INT_OP_o),3);
        tracep->chgCData(oldp+2,(vlTOPp->w_addr_o[0]),4);
        tracep->chgCData(oldp+3,(vlTOPp->w_addr_o[1]),4);
        tracep->chgCData(oldp+4,(vlTOPp->w_addr_o[2]),4);
        tracep->chgCData(oldp+5,(vlTOPp->w_addr_o[3]),4);
        tracep->chgCData(oldp+6,(vlTOPp->w_addr_o[4]),4);
        tracep->chgCData(oldp+7,(vlTOPp->w_addr_o[5]),4);
        tracep->chgCData(oldp+8,(vlTOPp->w_addr_o[6]),4);
        tracep->chgCData(oldp+9,(vlTOPp->w_addr_o[7]),4);
        tracep->chgCData(oldp+10,(vlTOPp->r_addr_o[0]),4);
        tracep->chgCData(oldp+11,(vlTOPp->r_addr_o[1]),4);
        tracep->chgCData(oldp+12,(vlTOPp->r_addr_o[2]),4);
        tracep->chgCData(oldp+13,(vlTOPp->r_addr_o[3]),4);
        tracep->chgCData(oldp+14,(vlTOPp->r_addr_o[4]),4);
        tracep->chgCData(oldp+15,(vlTOPp->r_addr_o[5]),4);
        tracep->chgCData(oldp+16,(vlTOPp->r_addr_o[6]),4);
        tracep->chgCData(oldp+17,(vlTOPp->r_addr_o[7]),4);
        tracep->chgCData(oldp+18,(vlTOPp->OP),3);
        tracep->chgBit(oldp+19,(vlTOPp->clk));
        tracep->chgSData(oldp+20,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk2__DOT__i),16);
    }
}

void --top-module=IDP::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
