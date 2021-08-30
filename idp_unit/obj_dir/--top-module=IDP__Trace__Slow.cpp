// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "--top-module=IDP__Syms.h"


//======================

void --top-module=IDP::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void --top-module=IDP::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    --top-module=IDP::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void --top-module=IDP::traceInitTop(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void --top-module=IDP::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+2,"INT_OP_o", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+3+i*1,"w_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+11+i*1,"r_addr_o", true,(i+0), 3,0);}}
        tracep->declBus(c+19,"OP", false,-1, 2,0);
        tracep->declBit(c+20,"clk", false,-1);
        tracep->declBus(c+2,"IDP INT_OP_o", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+3+i*1,"IDP w_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+11+i*1,"IDP r_addr_o", true,(i+0), 3,0);}}
        tracep->declBus(c+19,"IDP OP", false,-1, 2,0);
        tracep->declBit(c+20,"IDP clk", false,-1);
        tracep->declBus(c+1,"IDP unnamedblk1 i", false,-1, 15,0);
        tracep->declBus(c+21,"IDP IDP unnamedblk2 i", false,-1, 15,0);
        tracep->declBus(c+22,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+23,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+24,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+25,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+25,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+24,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+24,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+25,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
    }
}

void --top-module=IDP::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void --top-module=IDP::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void --top-module=IDP::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    --top-module=IDP__Syms* __restrict vlSymsp = static_cast<--top-module=IDP__Syms*>(userp);
    --top-module=IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->IDP__DOT__unnamedblk1__DOT__i),16);
        tracep->fullCData(oldp+2,(vlTOPp->INT_OP_o),3);
        tracep->fullCData(oldp+3,(vlTOPp->w_addr_o[0]),4);
        tracep->fullCData(oldp+4,(vlTOPp->w_addr_o[1]),4);
        tracep->fullCData(oldp+5,(vlTOPp->w_addr_o[2]),4);
        tracep->fullCData(oldp+6,(vlTOPp->w_addr_o[3]),4);
        tracep->fullCData(oldp+7,(vlTOPp->w_addr_o[4]),4);
        tracep->fullCData(oldp+8,(vlTOPp->w_addr_o[5]),4);
        tracep->fullCData(oldp+9,(vlTOPp->w_addr_o[6]),4);
        tracep->fullCData(oldp+10,(vlTOPp->w_addr_o[7]),4);
        tracep->fullCData(oldp+11,(vlTOPp->r_addr_o[0]),4);
        tracep->fullCData(oldp+12,(vlTOPp->r_addr_o[1]),4);
        tracep->fullCData(oldp+13,(vlTOPp->r_addr_o[2]),4);
        tracep->fullCData(oldp+14,(vlTOPp->r_addr_o[3]),4);
        tracep->fullCData(oldp+15,(vlTOPp->r_addr_o[4]),4);
        tracep->fullCData(oldp+16,(vlTOPp->r_addr_o[5]),4);
        tracep->fullCData(oldp+17,(vlTOPp->r_addr_o[6]),4);
        tracep->fullCData(oldp+18,(vlTOPp->r_addr_o[7]),4);
        tracep->fullCData(oldp+19,(vlTOPp->OP),3);
        tracep->fullBit(oldp+20,(vlTOPp->clk));
        tracep->fullSData(oldp+21,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk2__DOT__i),16);
        tracep->fullIData(oldp+22,(0xfU),32);
        tracep->fullIData(oldp+23,(0x10U),32);
        tracep->fullIData(oldp+24,(4U),32);
        tracep->fullIData(oldp+25,(8U),32);
    }
}
