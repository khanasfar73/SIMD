// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "INTU__Syms.h"


//======================

void INTU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void INTU::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    INTU::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void INTU::traceInitTop(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void INTU::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"ALU_Out", false,-1, 15,0);
        tracep->declBus(c+2,"A", false,-1, 15,0);
        tracep->declBus(c+3,"B", false,-1, 15,0);
        tracep->declBus(c+4,"OP", false,-1, 2,0);
        tracep->declBit(c+5,"clk", false,-1);
        tracep->declBus(c+1,"INTU ALU_Out", false,-1, 15,0);
        tracep->declBus(c+2,"INTU A", false,-1, 15,0);
        tracep->declBus(c+3,"INTU B", false,-1, 15,0);
        tracep->declBus(c+4,"INTU OP", false,-1, 2,0);
        tracep->declBit(c+5,"INTU clk", false,-1);
        tracep->declBus(c+6,"INTU ALU_Result", false,-1, 15,0);
        tracep->declBus(c+7,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+8,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+9,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+10,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+9,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+9,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+9,"OpCodes REG_PER_THREAD", false,-1, 31,0);
    }
}

void INTU::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void INTU::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void INTU::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    INTU__Syms* __restrict vlSymsp = static_cast<INTU__Syms*>(userp);
    INTU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->ALU_Out),16);
        tracep->fullSData(oldp+2,(vlTOPp->A),16);
        tracep->fullSData(oldp+3,(vlTOPp->B),16);
        tracep->fullCData(oldp+4,(vlTOPp->OP),3);
        tracep->fullBit(oldp+5,(vlTOPp->clk));
        tracep->fullSData(oldp+6,(vlTOPp->INTU__DOT__ALU_Result),16);
        tracep->fullIData(oldp+7,(0xfU),32);
        tracep->fullIData(oldp+8,(0x10U),32);
        tracep->fullIData(oldp+9,(4U),32);
        tracep->fullIData(oldp+10,(8U),32);
    }
}
