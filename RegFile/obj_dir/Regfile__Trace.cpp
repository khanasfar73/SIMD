// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Regfile__Syms.h"


void Regfile::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Regfile::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->Regfile__DOT__reg_array[0]),16);
            tracep->chgSData(oldp+1,(vlTOPp->Regfile__DOT__reg_array[1]),16);
            tracep->chgSData(oldp+2,(vlTOPp->Regfile__DOT__reg_array[2]),16);
            tracep->chgSData(oldp+3,(vlTOPp->Regfile__DOT__reg_array[3]),16);
            tracep->chgSData(oldp+4,(vlTOPp->Regfile__DOT__reg_array[4]),16);
            tracep->chgSData(oldp+5,(vlTOPp->Regfile__DOT__reg_array[5]),16);
            tracep->chgSData(oldp+6,(vlTOPp->Regfile__DOT__reg_array[6]),16);
            tracep->chgSData(oldp+7,(vlTOPp->Regfile__DOT__reg_array[7]),16);
            tracep->chgSData(oldp+8,(vlTOPp->Regfile__DOT__reg_array[8]),16);
            tracep->chgSData(oldp+9,(vlTOPp->Regfile__DOT__reg_array[9]),16);
            tracep->chgSData(oldp+10,(vlTOPp->Regfile__DOT__reg_array[10]),16);
            tracep->chgSData(oldp+11,(vlTOPp->Regfile__DOT__reg_array[11]),16);
            tracep->chgSData(oldp+12,(vlTOPp->Regfile__DOT__reg_array[12]),16);
            tracep->chgSData(oldp+13,(vlTOPp->Regfile__DOT__reg_array[13]),16);
            tracep->chgSData(oldp+14,(vlTOPp->Regfile__DOT__reg_array[14]),16);
            tracep->chgSData(oldp+15,(vlTOPp->Regfile__DOT__reg_array[15]),16);
            tracep->chgIData(oldp+16,(vlTOPp->Regfile__DOT__unnamedblk1__DOT__j),32);
            tracep->chgSData(oldp+17,(vlTOPp->Regfile__DOT__unnamedblk2__DOT__i),16);
        }
        tracep->chgSData(oldp+18,(vlTOPp->r_data[0]),16);
        tracep->chgSData(oldp+19,(vlTOPp->r_data[1]),16);
        tracep->chgSData(oldp+20,(vlTOPp->r_data[2]),16);
        tracep->chgSData(oldp+21,(vlTOPp->r_data[3]),16);
        tracep->chgSData(oldp+22,(vlTOPp->r_data[4]),16);
        tracep->chgSData(oldp+23,(vlTOPp->r_data[5]),16);
        tracep->chgSData(oldp+24,(vlTOPp->r_data[6]),16);
        tracep->chgSData(oldp+25,(vlTOPp->r_data[7]),16);
        tracep->chgCData(oldp+26,(vlTOPp->w_addr[0]),4);
        tracep->chgCData(oldp+27,(vlTOPp->w_addr[1]),4);
        tracep->chgCData(oldp+28,(vlTOPp->w_addr[2]),4);
        tracep->chgCData(oldp+29,(vlTOPp->w_addr[3]),4);
        tracep->chgCData(oldp+30,(vlTOPp->w_addr[4]),4);
        tracep->chgCData(oldp+31,(vlTOPp->w_addr[5]),4);
        tracep->chgCData(oldp+32,(vlTOPp->w_addr[6]),4);
        tracep->chgCData(oldp+33,(vlTOPp->w_addr[7]),4);
        tracep->chgCData(oldp+34,(vlTOPp->r_addr[0]),4);
        tracep->chgCData(oldp+35,(vlTOPp->r_addr[1]),4);
        tracep->chgCData(oldp+36,(vlTOPp->r_addr[2]),4);
        tracep->chgCData(oldp+37,(vlTOPp->r_addr[3]),4);
        tracep->chgCData(oldp+38,(vlTOPp->r_addr[4]),4);
        tracep->chgCData(oldp+39,(vlTOPp->r_addr[5]),4);
        tracep->chgCData(oldp+40,(vlTOPp->r_addr[6]),4);
        tracep->chgCData(oldp+41,(vlTOPp->r_addr[7]),4);
        tracep->chgSData(oldp+42,(vlTOPp->w_data[0]),16);
        tracep->chgSData(oldp+43,(vlTOPp->w_data[1]),16);
        tracep->chgSData(oldp+44,(vlTOPp->w_data[2]),16);
        tracep->chgSData(oldp+45,(vlTOPp->w_data[3]),16);
        tracep->chgSData(oldp+46,(vlTOPp->w_data[4]),16);
        tracep->chgSData(oldp+47,(vlTOPp->w_data[5]),16);
        tracep->chgSData(oldp+48,(vlTOPp->w_data[6]),16);
        tracep->chgSData(oldp+49,(vlTOPp->w_data[7]),16);
        tracep->chgBit(oldp+50,(vlTOPp->wr_en));
        tracep->chgBit(oldp+51,(vlTOPp->clk));
    }
}

void Regfile::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
