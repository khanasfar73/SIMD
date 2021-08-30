// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "EB__Syms.h"


//======================

void EB::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void EB::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    EB::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void EB::traceInitTop(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void EB::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+191+i*1,"Result_out", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+199+i*1,"Input_in", true,(i+0), 15,0);}}
        tracep->declBus(c+207,"OP", false,-1, 6,0);
        tracep->declBit(c+208,"wr_en", false,-1);
        tracep->declBit(c+209,"feed_data", false,-1);
        tracep->declBit(c+210,"clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+191+i*1,"EB Result_out", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+199+i*1,"EB Input_in", true,(i+0), 15,0);}}
        tracep->declBus(c+207,"EB OP", false,-1, 6,0);
        tracep->declBit(c+208,"EB wr_en", false,-1);
        tracep->declBit(c+209,"EB feed_data", false,-1);
        tracep->declBit(c+210,"EB clk", false,-1);
        tracep->declBus(c+207,"EB INT_OP", false,-1, 6,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+50+i*1,"EB w_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+82+i*1,"EB Load_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+90+i*1,"EB alu_out_w", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+133+i*1,"EB to_mem_w", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"EB w_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"EB r_addr", true,(i+0), 3,0);}}
        tracep->declBus(c+207,"EB idp INT_OP_o", false,-1, 6,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+17+i*1,"EB idp w_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+25+i*1,"EB idp r_addr_o", true,(i+0), 3,0);}}
        tracep->declBus(c+207,"EB idp OP_in", false,-1, 6,0);
        tracep->declBit(c+210,"EB idp clk", false,-1);
        tracep->declBus(c+33,"EB idp unnamedblk1 i", false,-1, 15,0);
        tracep->declBus(c+94,"EB idp IDP unnamedblk2 i", false,-1, 15,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+141+i*1,"EB rf r_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+34+i*1,"EB rf w_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+42+i*1,"EB rf r_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+58+i*1,"EB rf w_data", true,(i+0), 15,0);}}
        tracep->declBit(c+208,"EB rf wr_en", false,-1);
        tracep->declBit(c+210,"EB rf clk", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+149+i*1,"EB rf reg_array", true,(i+0), 15,0);}}
        tracep->declBus(c+165,"EB rf unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+166,"EB rf unnamedblk2 i", false,-1, 15,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+95+i*1,"EB ldst1 Load_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+103+i*1,"EB ldst1 Store_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+66+i*1,"EB ldst1 Load_i", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+167+i*1,"EB ldst1 Store_i", true,(i+0), 15,0);}}
        tracep->declBit(c+210,"EB ldst1 clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+111+i*1,"EB ldst1 load_unit data_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+74+i*1,"EB ldst1 load_unit data_i", true,(i+0), 15,0);}}
        tracep->declBit(c+210,"EB ldst1 load_unit clk", false,-1);
        tracep->declBus(c+119,"EB ldst1 load_unit unnamedblk1 i", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+120+i*1,"EB ldst1 store_unit data_o", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+175+i*1,"EB ldst1 store_unit data_i", true,(i+0), 15,0);}}
        tracep->declBit(c+210,"EB ldst1 store_unit clk", false,-1);
        tracep->declBus(c+128,"EB ldst1 store_unit unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+129,"EB genblk2[0] int_unit ALU_Out", false,-1, 15,0);
        tracep->declBus(c+183,"EB genblk2[0] int_unit A", false,-1, 15,0);
        tracep->declBus(c+184,"EB genblk2[0] int_unit B", false,-1, 15,0);
        tracep->declBus(c+207,"EB genblk2[0] int_unit OP", false,-1, 6,0);
        tracep->declBit(c+210,"EB genblk2[0] int_unit clk", false,-1);
        tracep->declBus(c+129,"EB genblk2[0] int_unit ALU_Result", false,-1, 15,0);
        tracep->declBus(c+130,"EB genblk2[1] int_unit ALU_Out", false,-1, 15,0);
        tracep->declBus(c+185,"EB genblk2[1] int_unit A", false,-1, 15,0);
        tracep->declBus(c+186,"EB genblk2[1] int_unit B", false,-1, 15,0);
        tracep->declBus(c+207,"EB genblk2[1] int_unit OP", false,-1, 6,0);
        tracep->declBit(c+210,"EB genblk2[1] int_unit clk", false,-1);
        tracep->declBus(c+130,"EB genblk2[1] int_unit ALU_Result", false,-1, 15,0);
        tracep->declBus(c+131,"EB genblk2[2] int_unit ALU_Out", false,-1, 15,0);
        tracep->declBus(c+187,"EB genblk2[2] int_unit A", false,-1, 15,0);
        tracep->declBus(c+188,"EB genblk2[2] int_unit B", false,-1, 15,0);
        tracep->declBus(c+207,"EB genblk2[2] int_unit OP", false,-1, 6,0);
        tracep->declBit(c+210,"EB genblk2[2] int_unit clk", false,-1);
        tracep->declBus(c+131,"EB genblk2[2] int_unit ALU_Result", false,-1, 15,0);
        tracep->declBus(c+132,"EB genblk2[3] int_unit ALU_Out", false,-1, 15,0);
        tracep->declBus(c+189,"EB genblk2[3] int_unit A", false,-1, 15,0);
        tracep->declBus(c+190,"EB genblk2[3] int_unit B", false,-1, 15,0);
        tracep->declBus(c+207,"EB genblk2[3] int_unit OP", false,-1, 6,0);
        tracep->declBit(c+210,"EB genblk2[3] int_unit clk", false,-1);
        tracep->declBus(c+132,"EB genblk2[3] int_unit ALU_Result", false,-1, 15,0);
        tracep->declBus(c+211,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+212,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+213,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+214,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+214,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+213,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+213,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+214,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
    }
}

void EB::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void EB::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void EB::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->EB__DOT__w_addr[0]),4);
        tracep->fullCData(oldp+2,(vlTOPp->EB__DOT__w_addr[1]),4);
        tracep->fullCData(oldp+3,(vlTOPp->EB__DOT__w_addr[2]),4);
        tracep->fullCData(oldp+4,(vlTOPp->EB__DOT__w_addr[3]),4);
        tracep->fullCData(oldp+5,(vlTOPp->EB__DOT__w_addr[4]),4);
        tracep->fullCData(oldp+6,(vlTOPp->EB__DOT__w_addr[5]),4);
        tracep->fullCData(oldp+7,(vlTOPp->EB__DOT__w_addr[6]),4);
        tracep->fullCData(oldp+8,(vlTOPp->EB__DOT__w_addr[7]),4);
        tracep->fullCData(oldp+9,(vlTOPp->EB__DOT__r_addr[0]),4);
        tracep->fullCData(oldp+10,(vlTOPp->EB__DOT__r_addr[1]),4);
        tracep->fullCData(oldp+11,(vlTOPp->EB__DOT__r_addr[2]),4);
        tracep->fullCData(oldp+12,(vlTOPp->EB__DOT__r_addr[3]),4);
        tracep->fullCData(oldp+13,(vlTOPp->EB__DOT__r_addr[4]),4);
        tracep->fullCData(oldp+14,(vlTOPp->EB__DOT__r_addr[5]),4);
        tracep->fullCData(oldp+15,(vlTOPp->EB__DOT__r_addr[6]),4);
        tracep->fullCData(oldp+16,(vlTOPp->EB__DOT__r_addr[7]),4);
        tracep->fullCData(oldp+17,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[0]),4);
        tracep->fullCData(oldp+18,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[1]),4);
        tracep->fullCData(oldp+19,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[2]),4);
        tracep->fullCData(oldp+20,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[3]),4);
        tracep->fullCData(oldp+21,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[4]),4);
        tracep->fullCData(oldp+22,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[5]),4);
        tracep->fullCData(oldp+23,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[6]),4);
        tracep->fullCData(oldp+24,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[7]),4);
        tracep->fullCData(oldp+25,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[0]),4);
        tracep->fullCData(oldp+26,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[1]),4);
        tracep->fullCData(oldp+27,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[2]),4);
        tracep->fullCData(oldp+28,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[3]),4);
        tracep->fullCData(oldp+29,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[4]),4);
        tracep->fullCData(oldp+30,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[5]),4);
        tracep->fullCData(oldp+31,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[6]),4);
        tracep->fullCData(oldp+32,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[7]),4);
        tracep->fullSData(oldp+33,(vlTOPp->EB__DOT__idp__DOT__unnamedblk1__DOT__i),16);
        tracep->fullCData(oldp+34,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[0]),4);
        tracep->fullCData(oldp+35,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[1]),4);
        tracep->fullCData(oldp+36,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[2]),4);
        tracep->fullCData(oldp+37,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[3]),4);
        tracep->fullCData(oldp+38,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[4]),4);
        tracep->fullCData(oldp+39,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[5]),4);
        tracep->fullCData(oldp+40,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[6]),4);
        tracep->fullCData(oldp+41,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[7]),4);
        tracep->fullCData(oldp+42,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[0]),4);
        tracep->fullCData(oldp+43,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[1]),4);
        tracep->fullCData(oldp+44,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[2]),4);
        tracep->fullCData(oldp+45,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[3]),4);
        tracep->fullCData(oldp+46,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[4]),4);
        tracep->fullCData(oldp+47,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[5]),4);
        tracep->fullCData(oldp+48,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[6]),4);
        tracep->fullCData(oldp+49,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[7]),4);
        tracep->fullSData(oldp+50,(vlTOPp->EB__DOT__w_data[0]),16);
        tracep->fullSData(oldp+51,(vlTOPp->EB__DOT__w_data[1]),16);
        tracep->fullSData(oldp+52,(vlTOPp->EB__DOT__w_data[2]),16);
        tracep->fullSData(oldp+53,(vlTOPp->EB__DOT__w_data[3]),16);
        tracep->fullSData(oldp+54,(vlTOPp->EB__DOT__w_data[4]),16);
        tracep->fullSData(oldp+55,(vlTOPp->EB__DOT__w_data[5]),16);
        tracep->fullSData(oldp+56,(vlTOPp->EB__DOT__w_data[6]),16);
        tracep->fullSData(oldp+57,(vlTOPp->EB__DOT__w_data[7]),16);
        tracep->fullSData(oldp+58,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[0]),16);
        tracep->fullSData(oldp+59,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[1]),16);
        tracep->fullSData(oldp+60,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[2]),16);
        tracep->fullSData(oldp+61,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[3]),16);
        tracep->fullSData(oldp+62,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[4]),16);
        tracep->fullSData(oldp+63,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[5]),16);
        tracep->fullSData(oldp+64,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[6]),16);
        tracep->fullSData(oldp+65,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[7]),16);
        tracep->fullSData(oldp+66,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[0]),16);
        tracep->fullSData(oldp+67,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[1]),16);
        tracep->fullSData(oldp+68,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[2]),16);
        tracep->fullSData(oldp+69,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[3]),16);
        tracep->fullSData(oldp+70,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[4]),16);
        tracep->fullSData(oldp+71,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[5]),16);
        tracep->fullSData(oldp+72,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[6]),16);
        tracep->fullSData(oldp+73,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[7]),16);
        tracep->fullSData(oldp+74,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[0]),16);
        tracep->fullSData(oldp+75,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[1]),16);
        tracep->fullSData(oldp+76,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[2]),16);
        tracep->fullSData(oldp+77,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[3]),16);
        tracep->fullSData(oldp+78,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[4]),16);
        tracep->fullSData(oldp+79,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[5]),16);
        tracep->fullSData(oldp+80,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[6]),16);
        tracep->fullSData(oldp+81,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[7]),16);
        tracep->fullSData(oldp+82,(vlTOPp->EB__DOT__Load_data[0]),16);
        tracep->fullSData(oldp+83,(vlTOPp->EB__DOT__Load_data[1]),16);
        tracep->fullSData(oldp+84,(vlTOPp->EB__DOT__Load_data[2]),16);
        tracep->fullSData(oldp+85,(vlTOPp->EB__DOT__Load_data[3]),16);
        tracep->fullSData(oldp+86,(vlTOPp->EB__DOT__Load_data[4]),16);
        tracep->fullSData(oldp+87,(vlTOPp->EB__DOT__Load_data[5]),16);
        tracep->fullSData(oldp+88,(vlTOPp->EB__DOT__Load_data[6]),16);
        tracep->fullSData(oldp+89,(vlTOPp->EB__DOT__Load_data[7]),16);
        tracep->fullSData(oldp+90,(vlTOPp->EB__DOT__alu_out_w[0]),16);
        tracep->fullSData(oldp+91,(vlTOPp->EB__DOT__alu_out_w[1]),16);
        tracep->fullSData(oldp+92,(vlTOPp->EB__DOT__alu_out_w[2]),16);
        tracep->fullSData(oldp+93,(vlTOPp->EB__DOT__alu_out_w[3]),16);
        tracep->fullSData(oldp+94,(vlTOPp->EB__DOT__idp__DOT__IDP__DOT__unnamedblk2__DOT__i),16);
        tracep->fullSData(oldp+95,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[0]),16);
        tracep->fullSData(oldp+96,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[1]),16);
        tracep->fullSData(oldp+97,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[2]),16);
        tracep->fullSData(oldp+98,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[3]),16);
        tracep->fullSData(oldp+99,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[4]),16);
        tracep->fullSData(oldp+100,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[5]),16);
        tracep->fullSData(oldp+101,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[6]),16);
        tracep->fullSData(oldp+102,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[7]),16);
        tracep->fullSData(oldp+103,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[0]),16);
        tracep->fullSData(oldp+104,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[1]),16);
        tracep->fullSData(oldp+105,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[2]),16);
        tracep->fullSData(oldp+106,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[3]),16);
        tracep->fullSData(oldp+107,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[4]),16);
        tracep->fullSData(oldp+108,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[5]),16);
        tracep->fullSData(oldp+109,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[6]),16);
        tracep->fullSData(oldp+110,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[7]),16);
        tracep->fullSData(oldp+111,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[0]),16);
        tracep->fullSData(oldp+112,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[1]),16);
        tracep->fullSData(oldp+113,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[2]),16);
        tracep->fullSData(oldp+114,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[3]),16);
        tracep->fullSData(oldp+115,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[4]),16);
        tracep->fullSData(oldp+116,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[5]),16);
        tracep->fullSData(oldp+117,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[6]),16);
        tracep->fullSData(oldp+118,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[7]),16);
        tracep->fullIData(oldp+119,(vlTOPp->EB__DOT__ldst1__DOT__load_unit__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+120,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[0]),16);
        tracep->fullSData(oldp+121,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[1]),16);
        tracep->fullSData(oldp+122,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[2]),16);
        tracep->fullSData(oldp+123,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[3]),16);
        tracep->fullSData(oldp+124,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[4]),16);
        tracep->fullSData(oldp+125,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[5]),16);
        tracep->fullSData(oldp+126,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[6]),16);
        tracep->fullSData(oldp+127,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[7]),16);
        tracep->fullIData(oldp+128,(vlTOPp->EB__DOT__ldst1__DOT__store_unit__DOT__unnamedblk1__DOT__i),32);
        tracep->fullSData(oldp+129,(vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result),16);
        tracep->fullSData(oldp+130,(vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result),16);
        tracep->fullSData(oldp+131,(vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result),16);
        tracep->fullSData(oldp+132,(vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result),16);
        tracep->fullSData(oldp+133,(vlTOPp->EB__DOT__to_mem_w[0]),16);
        tracep->fullSData(oldp+134,(vlTOPp->EB__DOT__to_mem_w[1]),16);
        tracep->fullSData(oldp+135,(vlTOPp->EB__DOT__to_mem_w[2]),16);
        tracep->fullSData(oldp+136,(vlTOPp->EB__DOT__to_mem_w[3]),16);
        tracep->fullSData(oldp+137,(vlTOPp->EB__DOT__to_mem_w[4]),16);
        tracep->fullSData(oldp+138,(vlTOPp->EB__DOT__to_mem_w[5]),16);
        tracep->fullSData(oldp+139,(vlTOPp->EB__DOT__to_mem_w[6]),16);
        tracep->fullSData(oldp+140,(vlTOPp->EB__DOT__to_mem_w[7]),16);
        tracep->fullSData(oldp+141,(vlTOPp->EB__DOT____Vcellout__rf__r_data[0]),16);
        tracep->fullSData(oldp+142,(vlTOPp->EB__DOT____Vcellout__rf__r_data[1]),16);
        tracep->fullSData(oldp+143,(vlTOPp->EB__DOT____Vcellout__rf__r_data[2]),16);
        tracep->fullSData(oldp+144,(vlTOPp->EB__DOT____Vcellout__rf__r_data[3]),16);
        tracep->fullSData(oldp+145,(vlTOPp->EB__DOT____Vcellout__rf__r_data[4]),16);
        tracep->fullSData(oldp+146,(vlTOPp->EB__DOT____Vcellout__rf__r_data[5]),16);
        tracep->fullSData(oldp+147,(vlTOPp->EB__DOT____Vcellout__rf__r_data[6]),16);
        tracep->fullSData(oldp+148,(vlTOPp->EB__DOT____Vcellout__rf__r_data[7]),16);
        tracep->fullSData(oldp+149,(vlTOPp->EB__DOT__rf__DOT__reg_array[0]),16);
        tracep->fullSData(oldp+150,(vlTOPp->EB__DOT__rf__DOT__reg_array[1]),16);
        tracep->fullSData(oldp+151,(vlTOPp->EB__DOT__rf__DOT__reg_array[2]),16);
        tracep->fullSData(oldp+152,(vlTOPp->EB__DOT__rf__DOT__reg_array[3]),16);
        tracep->fullSData(oldp+153,(vlTOPp->EB__DOT__rf__DOT__reg_array[4]),16);
        tracep->fullSData(oldp+154,(vlTOPp->EB__DOT__rf__DOT__reg_array[5]),16);
        tracep->fullSData(oldp+155,(vlTOPp->EB__DOT__rf__DOT__reg_array[6]),16);
        tracep->fullSData(oldp+156,(vlTOPp->EB__DOT__rf__DOT__reg_array[7]),16);
        tracep->fullSData(oldp+157,(vlTOPp->EB__DOT__rf__DOT__reg_array[8]),16);
        tracep->fullSData(oldp+158,(vlTOPp->EB__DOT__rf__DOT__reg_array[9]),16);
        tracep->fullSData(oldp+159,(vlTOPp->EB__DOT__rf__DOT__reg_array[10]),16);
        tracep->fullSData(oldp+160,(vlTOPp->EB__DOT__rf__DOT__reg_array[11]),16);
        tracep->fullSData(oldp+161,(vlTOPp->EB__DOT__rf__DOT__reg_array[12]),16);
        tracep->fullSData(oldp+162,(vlTOPp->EB__DOT__rf__DOT__reg_array[13]),16);
        tracep->fullSData(oldp+163,(vlTOPp->EB__DOT__rf__DOT__reg_array[14]),16);
        tracep->fullSData(oldp+164,(vlTOPp->EB__DOT__rf__DOT__reg_array[15]),16);
        tracep->fullIData(oldp+165,(vlTOPp->EB__DOT__rf__DOT__unnamedblk1__DOT__j),32);
        tracep->fullSData(oldp+166,(vlTOPp->EB__DOT__rf__DOT__unnamedblk2__DOT__i),16);
        tracep->fullSData(oldp+167,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[0]),16);
        tracep->fullSData(oldp+168,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[1]),16);
        tracep->fullSData(oldp+169,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[2]),16);
        tracep->fullSData(oldp+170,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[3]),16);
        tracep->fullSData(oldp+171,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[4]),16);
        tracep->fullSData(oldp+172,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[5]),16);
        tracep->fullSData(oldp+173,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[6]),16);
        tracep->fullSData(oldp+174,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[7]),16);
        tracep->fullSData(oldp+175,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[0]),16);
        tracep->fullSData(oldp+176,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[1]),16);
        tracep->fullSData(oldp+177,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[2]),16);
        tracep->fullSData(oldp+178,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[3]),16);
        tracep->fullSData(oldp+179,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[4]),16);
        tracep->fullSData(oldp+180,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[5]),16);
        tracep->fullSData(oldp+181,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[6]),16);
        tracep->fullSData(oldp+182,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[7]),16);
        tracep->fullSData(oldp+183,(vlTOPp->EB__DOT__to_mem_w
                                    [0U]),16);
        tracep->fullSData(oldp+184,(vlTOPp->EB__DOT__to_mem_w
                                    [1U]),16);
        tracep->fullSData(oldp+185,(vlTOPp->EB__DOT__to_mem_w
                                    [2U]),16);
        tracep->fullSData(oldp+186,(vlTOPp->EB__DOT__to_mem_w
                                    [3U]),16);
        tracep->fullSData(oldp+187,(vlTOPp->EB__DOT__to_mem_w
                                    [4U]),16);
        tracep->fullSData(oldp+188,(vlTOPp->EB__DOT__to_mem_w
                                    [5U]),16);
        tracep->fullSData(oldp+189,(vlTOPp->EB__DOT__to_mem_w
                                    [6U]),16);
        tracep->fullSData(oldp+190,(vlTOPp->EB__DOT__to_mem_w
                                    [7U]),16);
        tracep->fullSData(oldp+191,(vlTOPp->Result_out[0]),16);
        tracep->fullSData(oldp+192,(vlTOPp->Result_out[1]),16);
        tracep->fullSData(oldp+193,(vlTOPp->Result_out[2]),16);
        tracep->fullSData(oldp+194,(vlTOPp->Result_out[3]),16);
        tracep->fullSData(oldp+195,(vlTOPp->Result_out[4]),16);
        tracep->fullSData(oldp+196,(vlTOPp->Result_out[5]),16);
        tracep->fullSData(oldp+197,(vlTOPp->Result_out[6]),16);
        tracep->fullSData(oldp+198,(vlTOPp->Result_out[7]),16);
        tracep->fullSData(oldp+199,(vlTOPp->Input_in[0]),16);
        tracep->fullSData(oldp+200,(vlTOPp->Input_in[1]),16);
        tracep->fullSData(oldp+201,(vlTOPp->Input_in[2]),16);
        tracep->fullSData(oldp+202,(vlTOPp->Input_in[3]),16);
        tracep->fullSData(oldp+203,(vlTOPp->Input_in[4]),16);
        tracep->fullSData(oldp+204,(vlTOPp->Input_in[5]),16);
        tracep->fullSData(oldp+205,(vlTOPp->Input_in[6]),16);
        tracep->fullSData(oldp+206,(vlTOPp->Input_in[7]),16);
        tracep->fullCData(oldp+207,(vlTOPp->OP),7);
        tracep->fullBit(oldp+208,(vlTOPp->wr_en));
        tracep->fullBit(oldp+209,(vlTOPp->feed_data));
        tracep->fullBit(oldp+210,(vlTOPp->clk));
        tracep->fullIData(oldp+211,(0xfU),32);
        tracep->fullIData(oldp+212,(0x10U),32);
        tracep->fullIData(oldp+213,(4U),32);
        tracep->fullIData(oldp+214,(8U),32);
    }
}
