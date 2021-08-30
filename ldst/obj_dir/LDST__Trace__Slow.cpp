// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "LDST__Syms.h"


//======================

void LDST::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void LDST::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    LDST::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void LDST::traceInitTop(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void LDST::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+35+i*1,"Load_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+43+i*1,"Store_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+51+i*1,"Load_i", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+59+i*1,"Store_i", true,(i+0), 15,0);}}
        tracep->declBit(c+67,"clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+35+i*1,"LDST Load_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+43+i*1,"LDST Store_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+51+i*1,"LDST Load_i", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+59+i*1,"LDST Store_i", true,(i+0), 15,0);}}
        tracep->declBit(c+67,"LDST clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"LDST load_unit data_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+19+i*1,"LDST load_unit data_i", true,(i+0), 15,0);}}
        tracep->declBit(c+67,"LDST load_unit clk", false,-1);
        tracep->declBus(c+9,"LDST load_unit unnamedblk1 i", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+10+i*1,"LDST store_unit data_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+27+i*1,"LDST store_unit data_i", true,(i+0), 15,0);}}
        tracep->declBit(c+67,"LDST store_unit clk", false,-1);
        tracep->declBus(c+18,"LDST store_unit unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+68,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+69,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+70,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+71,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+71,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+70,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+70,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+71,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
    }
}

void LDST::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void LDST::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void LDST::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    LDST__Syms* __restrict vlSymsp = static_cast<LDST__Syms*>(userp);
    LDST* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[0]),16);
        tracep->fullSData(oldp+2,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[1]),16);
        tracep->fullSData(oldp+3,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[2]),16);
        tracep->fullSData(oldp+4,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[3]),16);
        tracep->fullSData(oldp+5,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[4]),16);
        tracep->fullSData(oldp+6,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[5]),16);
        tracep->fullSData(oldp+7,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[6]),16);
        tracep->fullSData(oldp+8,(vlTOPp->LDST__DOT____Vcellout__load_unit____pinNumber1[7]),16);
        tracep->fullIData(oldp+9,(vlTOPp->LDST__DOT__load_unit__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+10,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[0]),16);
        tracep->fullSData(oldp+11,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[1]),16);
        tracep->fullSData(oldp+12,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[2]),16);
        tracep->fullSData(oldp+13,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[3]),16);
        tracep->fullSData(oldp+14,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[4]),16);
        tracep->fullSData(oldp+15,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[5]),16);
        tracep->fullSData(oldp+16,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[6]),16);
        tracep->fullSData(oldp+17,(vlTOPp->LDST__DOT____Vcellout__store_unit____pinNumber1[7]),16);
        tracep->fullIData(oldp+18,(vlTOPp->LDST__DOT__store_unit__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+19,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[0]),16);
        tracep->fullSData(oldp+20,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[1]),16);
        tracep->fullSData(oldp+21,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[2]),16);
        tracep->fullSData(oldp+22,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[3]),16);
        tracep->fullSData(oldp+23,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[4]),16);
        tracep->fullSData(oldp+24,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[5]),16);
        tracep->fullSData(oldp+25,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[6]),16);
        tracep->fullSData(oldp+26,(vlTOPp->LDST__DOT____Vcellinp__load_unit____pinNumber2[7]),16);
        tracep->fullSData(oldp+27,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[0]),16);
        tracep->fullSData(oldp+28,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[1]),16);
        tracep->fullSData(oldp+29,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[2]),16);
        tracep->fullSData(oldp+30,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[3]),16);
        tracep->fullSData(oldp+31,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[4]),16);
        tracep->fullSData(oldp+32,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[5]),16);
        tracep->fullSData(oldp+33,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[6]),16);
        tracep->fullSData(oldp+34,(vlTOPp->LDST__DOT____Vcellinp__store_unit____pinNumber2[7]),16);
        tracep->fullSData(oldp+35,(vlTOPp->Load_o[0]),16);
        tracep->fullSData(oldp+36,(vlTOPp->Load_o[1]),16);
        tracep->fullSData(oldp+37,(vlTOPp->Load_o[2]),16);
        tracep->fullSData(oldp+38,(vlTOPp->Load_o[3]),16);
        tracep->fullSData(oldp+39,(vlTOPp->Load_o[4]),16);
        tracep->fullSData(oldp+40,(vlTOPp->Load_o[5]),16);
        tracep->fullSData(oldp+41,(vlTOPp->Load_o[6]),16);
        tracep->fullSData(oldp+42,(vlTOPp->Load_o[7]),16);
        tracep->fullSData(oldp+43,(vlTOPp->Store_o[0]),16);
        tracep->fullSData(oldp+44,(vlTOPp->Store_o[1]),16);
        tracep->fullSData(oldp+45,(vlTOPp->Store_o[2]),16);
        tracep->fullSData(oldp+46,(vlTOPp->Store_o[3]),16);
        tracep->fullSData(oldp+47,(vlTOPp->Store_o[4]),16);
        tracep->fullSData(oldp+48,(vlTOPp->Store_o[5]),16);
        tracep->fullSData(oldp+49,(vlTOPp->Store_o[6]),16);
        tracep->fullSData(oldp+50,(vlTOPp->Store_o[7]),16);
        tracep->fullSData(oldp+51,(vlTOPp->Load_i[0]),16);
        tracep->fullSData(oldp+52,(vlTOPp->Load_i[1]),16);
        tracep->fullSData(oldp+53,(vlTOPp->Load_i[2]),16);
        tracep->fullSData(oldp+54,(vlTOPp->Load_i[3]),16);
        tracep->fullSData(oldp+55,(vlTOPp->Load_i[4]),16);
        tracep->fullSData(oldp+56,(vlTOPp->Load_i[5]),16);
        tracep->fullSData(oldp+57,(vlTOPp->Load_i[6]),16);
        tracep->fullSData(oldp+58,(vlTOPp->Load_i[7]),16);
        tracep->fullSData(oldp+59,(vlTOPp->Store_i[0]),16);
        tracep->fullSData(oldp+60,(vlTOPp->Store_i[1]),16);
        tracep->fullSData(oldp+61,(vlTOPp->Store_i[2]),16);
        tracep->fullSData(oldp+62,(vlTOPp->Store_i[3]),16);
        tracep->fullSData(oldp+63,(vlTOPp->Store_i[4]),16);
        tracep->fullSData(oldp+64,(vlTOPp->Store_i[5]),16);
        tracep->fullSData(oldp+65,(vlTOPp->Store_i[6]),16);
        tracep->fullSData(oldp+66,(vlTOPp->Store_i[7]),16);
        tracep->fullBit(oldp+67,(vlTOPp->clk));
        tracep->fullIData(oldp+68,(0xfU),32);
        tracep->fullIData(oldp+69,(0x10U),32);
        tracep->fullIData(oldp+70,(4U),32);
        tracep->fullIData(oldp+71,(8U),32);
    }
}
