// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "LDST__Syms.h"


void LDST::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void LDST::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[0]),16);
            tracep->chgSData(oldp+1,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[1]),16);
            tracep->chgSData(oldp+2,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[2]),16);
            tracep->chgSData(oldp+3,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[3]),16);
            tracep->chgSData(oldp+4,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[4]),16);
            tracep->chgSData(oldp+5,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[5]),16);
            tracep->chgSData(oldp+6,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[6]),16);
            tracep->chgSData(oldp+7,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[7]),16);
            tracep->chgIData(oldp+8,(vlTOPp->LDST__DOT__load_unit__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+9,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[0]),16);
            tracep->chgSData(oldp+10,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[1]),16);
            tracep->chgSData(oldp+11,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[2]),16);
            tracep->chgSData(oldp+12,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[3]),16);
            tracep->chgSData(oldp+13,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[4]),16);
            tracep->chgSData(oldp+14,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[5]),16);
            tracep->chgSData(oldp+15,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[6]),16);
            tracep->chgSData(oldp+16,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[7]),16);
            tracep->chgIData(oldp+17,(vlTOPp->LDST__DOT__store_unit__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+18,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[0]),16);
            tracep->chgSData(oldp+19,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[1]),16);
            tracep->chgSData(oldp+20,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[2]),16);
            tracep->chgSData(oldp+21,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[3]),16);
            tracep->chgSData(oldp+22,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[4]),16);
            tracep->chgSData(oldp+23,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[5]),16);
            tracep->chgSData(oldp+24,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[6]),16);
            tracep->chgSData(oldp+25,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[7]),16);
            tracep->chgSData(oldp+26,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[0]),16);
            tracep->chgSData(oldp+27,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[1]),16);
            tracep->chgSData(oldp+28,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[2]),16);
            tracep->chgSData(oldp+29,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[3]),16);
            tracep->chgSData(oldp+30,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[4]),16);
            tracep->chgSData(oldp+31,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[5]),16);
            tracep->chgSData(oldp+32,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[6]),16);
            tracep->chgSData(oldp+33,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[7]),16);
        }
        tracep->chgSData(oldp+34,(vlTOPp->Load_o[0]),16);
        tracep->chgSData(oldp+35,(vlTOPp->Load_o[1]),16);
        tracep->chgSData(oldp+36,(vlTOPp->Load_o[2]),16);
        tracep->chgSData(oldp+37,(vlTOPp->Load_o[3]),16);
        tracep->chgSData(oldp+38,(vlTOPp->Load_o[4]),16);
        tracep->chgSData(oldp+39,(vlTOPp->Load_o[5]),16);
        tracep->chgSData(oldp+40,(vlTOPp->Load_o[6]),16);
        tracep->chgSData(oldp+41,(vlTOPp->Load_o[7]),16);
        tracep->chgSData(oldp+42,(vlTOPp->Store_o[0]),16);
        tracep->chgSData(oldp+43,(vlTOPp->Store_o[1]),16);
        tracep->chgSData(oldp+44,(vlTOPp->Store_o[2]),16);
        tracep->chgSData(oldp+45,(vlTOPp->Store_o[3]),16);
        tracep->chgSData(oldp+46,(vlTOPp->Store_o[4]),16);
        tracep->chgSData(oldp+47,(vlTOPp->Store_o[5]),16);
        tracep->chgSData(oldp+48,(vlTOPp->Store_o[6]),16);
        tracep->chgSData(oldp+49,(vlTOPp->Store_o[7]),16);
        tracep->chgSData(oldp+50,(vlTOPp->Load_i[0]),16);
        tracep->chgSData(oldp+51,(vlTOPp->Load_i[1]),16);
        tracep->chgSData(oldp+52,(vlTOPp->Load_i[2]),16);
        tracep->chgSData(oldp+53,(vlTOPp->Load_i[3]),16);
        tracep->chgSData(oldp+54,(vlTOPp->Load_i[4]),16);
        tracep->chgSData(oldp+55,(vlTOPp->Load_i[5]),16);
        tracep->chgSData(oldp+56,(vlTOPp->Load_i[6]),16);
        tracep->chgSData(oldp+57,(vlTOPp->Load_i[7]),16);
        tracep->chgSData(oldp+58,(vlTOPp->Store_i[0]),16);
        tracep->chgSData(oldp+59,(vlTOPp->Store_i[1]),16);
        tracep->chgSData(oldp+60,(vlTOPp->Store_i[2]),16);
        tracep->chgSData(oldp+61,(vlTOPp->Store_i[3]),16);
        tracep->chgSData(oldp+62,(vlTOPp->Store_i[4]),16);
        tracep->chgSData(oldp+63,(vlTOPp->Store_i[5]),16);
        tracep->chgSData(oldp+64,(vlTOPp->Store_i[6]),16);
        tracep->chgSData(oldp+65,(vlTOPp->Store_i[7]),16);
        tracep->chgBit(oldp+66,(vlTOPp->clk));
    }
}

void LDST::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
