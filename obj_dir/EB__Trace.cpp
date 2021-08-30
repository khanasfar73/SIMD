// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "EB__Syms.h"


void EB::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void EB::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlTOPp->EB__DOT__w_addr[0]),4);
            tracep->chgCData(oldp+1,(vlTOPp->EB__DOT__w_addr[1]),4);
            tracep->chgCData(oldp+2,(vlTOPp->EB__DOT__w_addr[2]),4);
            tracep->chgCData(oldp+3,(vlTOPp->EB__DOT__w_addr[3]),4);
            tracep->chgCData(oldp+4,(vlTOPp->EB__DOT__w_addr[4]),4);
            tracep->chgCData(oldp+5,(vlTOPp->EB__DOT__w_addr[5]),4);
            tracep->chgCData(oldp+6,(vlTOPp->EB__DOT__w_addr[6]),4);
            tracep->chgCData(oldp+7,(vlTOPp->EB__DOT__w_addr[7]),4);
            tracep->chgCData(oldp+8,(vlTOPp->EB__DOT__r_addr[0]),4);
            tracep->chgCData(oldp+9,(vlTOPp->EB__DOT__r_addr[1]),4);
            tracep->chgCData(oldp+10,(vlTOPp->EB__DOT__r_addr[2]),4);
            tracep->chgCData(oldp+11,(vlTOPp->EB__DOT__r_addr[3]),4);
            tracep->chgCData(oldp+12,(vlTOPp->EB__DOT__r_addr[4]),4);
            tracep->chgCData(oldp+13,(vlTOPp->EB__DOT__r_addr[5]),4);
            tracep->chgCData(oldp+14,(vlTOPp->EB__DOT__r_addr[6]),4);
            tracep->chgCData(oldp+15,(vlTOPp->EB__DOT__r_addr[7]),4);
            tracep->chgCData(oldp+16,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[0]),4);
            tracep->chgCData(oldp+17,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[1]),4);
            tracep->chgCData(oldp+18,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[2]),4);
            tracep->chgCData(oldp+19,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[3]),4);
            tracep->chgCData(oldp+20,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[4]),4);
            tracep->chgCData(oldp+21,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[5]),4);
            tracep->chgCData(oldp+22,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[6]),4);
            tracep->chgCData(oldp+23,(vlTOPp->EB__DOT____Vcellout__idp__w_addr_o[7]),4);
            tracep->chgCData(oldp+24,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[0]),4);
            tracep->chgCData(oldp+25,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[1]),4);
            tracep->chgCData(oldp+26,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[2]),4);
            tracep->chgCData(oldp+27,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[3]),4);
            tracep->chgCData(oldp+28,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[4]),4);
            tracep->chgCData(oldp+29,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[5]),4);
            tracep->chgCData(oldp+30,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[6]),4);
            tracep->chgCData(oldp+31,(vlTOPp->EB__DOT____Vcellout__idp__r_addr_o[7]),4);
            tracep->chgSData(oldp+32,(vlTOPp->EB__DOT__idp__DOT__unnamedblk1__DOT__i),16);
            tracep->chgCData(oldp+33,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[0]),4);
            tracep->chgCData(oldp+34,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[1]),4);
            tracep->chgCData(oldp+35,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[2]),4);
            tracep->chgCData(oldp+36,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[3]),4);
            tracep->chgCData(oldp+37,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[4]),4);
            tracep->chgCData(oldp+38,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[5]),4);
            tracep->chgCData(oldp+39,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[6]),4);
            tracep->chgCData(oldp+40,(vlTOPp->EB__DOT____Vcellinp__rf__w_addr[7]),4);
            tracep->chgCData(oldp+41,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[0]),4);
            tracep->chgCData(oldp+42,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[1]),4);
            tracep->chgCData(oldp+43,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[2]),4);
            tracep->chgCData(oldp+44,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[3]),4);
            tracep->chgCData(oldp+45,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[4]),4);
            tracep->chgCData(oldp+46,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[5]),4);
            tracep->chgCData(oldp+47,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[6]),4);
            tracep->chgCData(oldp+48,(vlTOPp->EB__DOT____Vcellinp__rf__r_addr[7]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+49,(vlTOPp->EB__DOT__w_data[0]),16);
            tracep->chgSData(oldp+50,(vlTOPp->EB__DOT__w_data[1]),16);
            tracep->chgSData(oldp+51,(vlTOPp->EB__DOT__w_data[2]),16);
            tracep->chgSData(oldp+52,(vlTOPp->EB__DOT__w_data[3]),16);
            tracep->chgSData(oldp+53,(vlTOPp->EB__DOT__w_data[4]),16);
            tracep->chgSData(oldp+54,(vlTOPp->EB__DOT__w_data[5]),16);
            tracep->chgSData(oldp+55,(vlTOPp->EB__DOT__w_data[6]),16);
            tracep->chgSData(oldp+56,(vlTOPp->EB__DOT__w_data[7]),16);
            tracep->chgSData(oldp+57,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[0]),16);
            tracep->chgSData(oldp+58,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[1]),16);
            tracep->chgSData(oldp+59,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[2]),16);
            tracep->chgSData(oldp+60,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[3]),16);
            tracep->chgSData(oldp+61,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[4]),16);
            tracep->chgSData(oldp+62,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[5]),16);
            tracep->chgSData(oldp+63,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[6]),16);
            tracep->chgSData(oldp+64,(vlTOPp->EB__DOT____Vcellinp__rf__w_data[7]),16);
            tracep->chgSData(oldp+65,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[0]),16);
            tracep->chgSData(oldp+66,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[1]),16);
            tracep->chgSData(oldp+67,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[2]),16);
            tracep->chgSData(oldp+68,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[3]),16);
            tracep->chgSData(oldp+69,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[4]),16);
            tracep->chgSData(oldp+70,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[5]),16);
            tracep->chgSData(oldp+71,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[6]),16);
            tracep->chgSData(oldp+72,(vlTOPp->EB__DOT____Vcellinp__ldst1__Load_i[7]),16);
            tracep->chgSData(oldp+73,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[0]),16);
            tracep->chgSData(oldp+74,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[1]),16);
            tracep->chgSData(oldp+75,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[2]),16);
            tracep->chgSData(oldp+76,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[3]),16);
            tracep->chgSData(oldp+77,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[4]),16);
            tracep->chgSData(oldp+78,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[5]),16);
            tracep->chgSData(oldp+79,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[6]),16);
            tracep->chgSData(oldp+80,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[7]),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+81,(vlTOPp->EB__DOT__Load_data[0]),16);
            tracep->chgSData(oldp+82,(vlTOPp->EB__DOT__Load_data[1]),16);
            tracep->chgSData(oldp+83,(vlTOPp->EB__DOT__Load_data[2]),16);
            tracep->chgSData(oldp+84,(vlTOPp->EB__DOT__Load_data[3]),16);
            tracep->chgSData(oldp+85,(vlTOPp->EB__DOT__Load_data[4]),16);
            tracep->chgSData(oldp+86,(vlTOPp->EB__DOT__Load_data[5]),16);
            tracep->chgSData(oldp+87,(vlTOPp->EB__DOT__Load_data[6]),16);
            tracep->chgSData(oldp+88,(vlTOPp->EB__DOT__Load_data[7]),16);
            tracep->chgSData(oldp+89,(vlTOPp->EB__DOT__alu_out_w[0]),16);
            tracep->chgSData(oldp+90,(vlTOPp->EB__DOT__alu_out_w[1]),16);
            tracep->chgSData(oldp+91,(vlTOPp->EB__DOT__alu_out_w[2]),16);
            tracep->chgSData(oldp+92,(vlTOPp->EB__DOT__alu_out_w[3]),16);
            tracep->chgSData(oldp+93,(vlTOPp->EB__DOT__idp__DOT__IDP__DOT__unnamedblk2__DOT__i),16);
            tracep->chgSData(oldp+94,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[0]),16);
            tracep->chgSData(oldp+95,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[1]),16);
            tracep->chgSData(oldp+96,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[2]),16);
            tracep->chgSData(oldp+97,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[3]),16);
            tracep->chgSData(oldp+98,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[4]),16);
            tracep->chgSData(oldp+99,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[5]),16);
            tracep->chgSData(oldp+100,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[6]),16);
            tracep->chgSData(oldp+101,(vlTOPp->EB__DOT____Vcellout__ldst1__Load_o[7]),16);
            tracep->chgSData(oldp+102,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[0]),16);
            tracep->chgSData(oldp+103,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[1]),16);
            tracep->chgSData(oldp+104,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[2]),16);
            tracep->chgSData(oldp+105,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[3]),16);
            tracep->chgSData(oldp+106,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[4]),16);
            tracep->chgSData(oldp+107,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[5]),16);
            tracep->chgSData(oldp+108,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[6]),16);
            tracep->chgSData(oldp+109,(vlTOPp->EB__DOT____Vcellout__ldst1__Store_o[7]),16);
            tracep->chgSData(oldp+110,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[0]),16);
            tracep->chgSData(oldp+111,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[1]),16);
            tracep->chgSData(oldp+112,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[2]),16);
            tracep->chgSData(oldp+113,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[3]),16);
            tracep->chgSData(oldp+114,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[4]),16);
            tracep->chgSData(oldp+115,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[5]),16);
            tracep->chgSData(oldp+116,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[6]),16);
            tracep->chgSData(oldp+117,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[7]),16);
            tracep->chgIData(oldp+118,(vlTOPp->EB__DOT__ldst1__DOT__load_unit__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+119,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[0]),16);
            tracep->chgSData(oldp+120,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[1]),16);
            tracep->chgSData(oldp+121,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[2]),16);
            tracep->chgSData(oldp+122,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[3]),16);
            tracep->chgSData(oldp+123,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[4]),16);
            tracep->chgSData(oldp+124,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[5]),16);
            tracep->chgSData(oldp+125,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[6]),16);
            tracep->chgSData(oldp+126,(vlTOPp->EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[7]),16);
            tracep->chgIData(oldp+127,(vlTOPp->EB__DOT__ldst1__DOT__store_unit__DOT__unnamedblk1__DOT__i),32);
            tracep->chgSData(oldp+128,(vlTOPp->EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result),16);
            tracep->chgSData(oldp+129,(vlTOPp->EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result),16);
            tracep->chgSData(oldp+130,(vlTOPp->EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result),16);
            tracep->chgSData(oldp+131,(vlTOPp->EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgSData(oldp+132,(vlTOPp->EB__DOT__to_mem_w[0]),16);
            tracep->chgSData(oldp+133,(vlTOPp->EB__DOT__to_mem_w[1]),16);
            tracep->chgSData(oldp+134,(vlTOPp->EB__DOT__to_mem_w[2]),16);
            tracep->chgSData(oldp+135,(vlTOPp->EB__DOT__to_mem_w[3]),16);
            tracep->chgSData(oldp+136,(vlTOPp->EB__DOT__to_mem_w[4]),16);
            tracep->chgSData(oldp+137,(vlTOPp->EB__DOT__to_mem_w[5]),16);
            tracep->chgSData(oldp+138,(vlTOPp->EB__DOT__to_mem_w[6]),16);
            tracep->chgSData(oldp+139,(vlTOPp->EB__DOT__to_mem_w[7]),16);
            tracep->chgSData(oldp+140,(vlTOPp->EB__DOT____Vcellout__rf__r_data[0]),16);
            tracep->chgSData(oldp+141,(vlTOPp->EB__DOT____Vcellout__rf__r_data[1]),16);
            tracep->chgSData(oldp+142,(vlTOPp->EB__DOT____Vcellout__rf__r_data[2]),16);
            tracep->chgSData(oldp+143,(vlTOPp->EB__DOT____Vcellout__rf__r_data[3]),16);
            tracep->chgSData(oldp+144,(vlTOPp->EB__DOT____Vcellout__rf__r_data[4]),16);
            tracep->chgSData(oldp+145,(vlTOPp->EB__DOT____Vcellout__rf__r_data[5]),16);
            tracep->chgSData(oldp+146,(vlTOPp->EB__DOT____Vcellout__rf__r_data[6]),16);
            tracep->chgSData(oldp+147,(vlTOPp->EB__DOT____Vcellout__rf__r_data[7]),16);
            tracep->chgSData(oldp+148,(vlTOPp->EB__DOT__rf__DOT__reg_array[0]),16);
            tracep->chgSData(oldp+149,(vlTOPp->EB__DOT__rf__DOT__reg_array[1]),16);
            tracep->chgSData(oldp+150,(vlTOPp->EB__DOT__rf__DOT__reg_array[2]),16);
            tracep->chgSData(oldp+151,(vlTOPp->EB__DOT__rf__DOT__reg_array[3]),16);
            tracep->chgSData(oldp+152,(vlTOPp->EB__DOT__rf__DOT__reg_array[4]),16);
            tracep->chgSData(oldp+153,(vlTOPp->EB__DOT__rf__DOT__reg_array[5]),16);
            tracep->chgSData(oldp+154,(vlTOPp->EB__DOT__rf__DOT__reg_array[6]),16);
            tracep->chgSData(oldp+155,(vlTOPp->EB__DOT__rf__DOT__reg_array[7]),16);
            tracep->chgSData(oldp+156,(vlTOPp->EB__DOT__rf__DOT__reg_array[8]),16);
            tracep->chgSData(oldp+157,(vlTOPp->EB__DOT__rf__DOT__reg_array[9]),16);
            tracep->chgSData(oldp+158,(vlTOPp->EB__DOT__rf__DOT__reg_array[10]),16);
            tracep->chgSData(oldp+159,(vlTOPp->EB__DOT__rf__DOT__reg_array[11]),16);
            tracep->chgSData(oldp+160,(vlTOPp->EB__DOT__rf__DOT__reg_array[12]),16);
            tracep->chgSData(oldp+161,(vlTOPp->EB__DOT__rf__DOT__reg_array[13]),16);
            tracep->chgSData(oldp+162,(vlTOPp->EB__DOT__rf__DOT__reg_array[14]),16);
            tracep->chgSData(oldp+163,(vlTOPp->EB__DOT__rf__DOT__reg_array[15]),16);
            tracep->chgIData(oldp+164,(vlTOPp->EB__DOT__rf__DOT__unnamedblk1__DOT__j),32);
            tracep->chgSData(oldp+165,(vlTOPp->EB__DOT__rf__DOT__unnamedblk2__DOT__i),16);
            tracep->chgSData(oldp+166,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[0]),16);
            tracep->chgSData(oldp+167,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[1]),16);
            tracep->chgSData(oldp+168,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[2]),16);
            tracep->chgSData(oldp+169,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[3]),16);
            tracep->chgSData(oldp+170,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[4]),16);
            tracep->chgSData(oldp+171,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[5]),16);
            tracep->chgSData(oldp+172,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[6]),16);
            tracep->chgSData(oldp+173,(vlTOPp->EB__DOT____Vcellinp__ldst1__Store_i[7]),16);
            tracep->chgSData(oldp+174,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[0]),16);
            tracep->chgSData(oldp+175,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[1]),16);
            tracep->chgSData(oldp+176,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[2]),16);
            tracep->chgSData(oldp+177,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[3]),16);
            tracep->chgSData(oldp+178,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[4]),16);
            tracep->chgSData(oldp+179,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[5]),16);
            tracep->chgSData(oldp+180,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[6]),16);
            tracep->chgSData(oldp+181,(vlTOPp->EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[7]),16);
            tracep->chgSData(oldp+182,(vlTOPp->EB__DOT__to_mem_w
                                       [0U]),16);
            tracep->chgSData(oldp+183,(vlTOPp->EB__DOT__to_mem_w
                                       [1U]),16);
            tracep->chgSData(oldp+184,(vlTOPp->EB__DOT__to_mem_w
                                       [2U]),16);
            tracep->chgSData(oldp+185,(vlTOPp->EB__DOT__to_mem_w
                                       [3U]),16);
            tracep->chgSData(oldp+186,(vlTOPp->EB__DOT__to_mem_w
                                       [4U]),16);
            tracep->chgSData(oldp+187,(vlTOPp->EB__DOT__to_mem_w
                                       [5U]),16);
            tracep->chgSData(oldp+188,(vlTOPp->EB__DOT__to_mem_w
                                       [6U]),16);
            tracep->chgSData(oldp+189,(vlTOPp->EB__DOT__to_mem_w
                                       [7U]),16);
        }
        tracep->chgSData(oldp+190,(vlTOPp->Result_out[0]),16);
        tracep->chgSData(oldp+191,(vlTOPp->Result_out[1]),16);
        tracep->chgSData(oldp+192,(vlTOPp->Result_out[2]),16);
        tracep->chgSData(oldp+193,(vlTOPp->Result_out[3]),16);
        tracep->chgSData(oldp+194,(vlTOPp->Result_out[4]),16);
        tracep->chgSData(oldp+195,(vlTOPp->Result_out[5]),16);
        tracep->chgSData(oldp+196,(vlTOPp->Result_out[6]),16);
        tracep->chgSData(oldp+197,(vlTOPp->Result_out[7]),16);
        tracep->chgSData(oldp+198,(vlTOPp->Input_in[0]),16);
        tracep->chgSData(oldp+199,(vlTOPp->Input_in[1]),16);
        tracep->chgSData(oldp+200,(vlTOPp->Input_in[2]),16);
        tracep->chgSData(oldp+201,(vlTOPp->Input_in[3]),16);
        tracep->chgSData(oldp+202,(vlTOPp->Input_in[4]),16);
        tracep->chgSData(oldp+203,(vlTOPp->Input_in[5]),16);
        tracep->chgSData(oldp+204,(vlTOPp->Input_in[6]),16);
        tracep->chgSData(oldp+205,(vlTOPp->Input_in[7]),16);
        tracep->chgCData(oldp+206,(vlTOPp->OP),7);
        tracep->chgBit(oldp+207,(vlTOPp->wr_en));
        tracep->chgBit(oldp+208,(vlTOPp->feed_data));
        tracep->chgBit(oldp+209,(vlTOPp->clk));
    }
}

void EB::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    EB__Syms* __restrict vlSymsp = static_cast<EB__Syms*>(userp);
    EB* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
