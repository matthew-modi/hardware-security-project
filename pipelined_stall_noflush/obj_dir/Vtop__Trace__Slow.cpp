// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1073,"clk", false,-1);
        vcdp->declBit(c+1081,"reset", false,-1);
        vcdp->declBit(c+1073,"top clk", false,-1);
        vcdp->declBit(c+1081,"top reset", false,-1);
        vcdp->declBus(c+649,"top start_address_1", false,-1, 7,0);
        vcdp->declBus(c+657,"top start_id_1", false,-1, 7,0);
        vcdp->declBit(c+665,"top start_valid_1", false,-1);
        vcdp->declBit(c+1,"top start_stall_1", false,-1);
        vcdp->declBus(c+673,"top start_address_2", false,-1, 7,0);
        vcdp->declBus(c+681,"top start_id_2", false,-1, 7,0);
        vcdp->declBit(c+689,"top start_valid_2", false,-1);
        vcdp->declBit(c+9,"top start_stall_2", false,-1);
        vcdp->declBus(c+17,"top end_address_1", false,-1, 7,0);
        vcdp->declBus(c+25,"top end_id_1", false,-1, 7,0);
        vcdp->declBit(c+33,"top end_valid_1", false,-1);
        vcdp->declBit(c+41,"top end_stall_1", false,-1);
        vcdp->declBus(c+49,"top end_address_2", false,-1, 7,0);
        vcdp->declBus(c+57,"top end_id_2", false,-1, 7,0);
        vcdp->declBit(c+65,"top end_valid_2", false,-1);
        vcdp->declBit(c+73,"top end_stall_2", false,-1);
        vcdp->declBit(c+81,"top arbiter_valid", false,-1);
        vcdp->declBit(c+697,"top arbiter_choice", false,-1);
        vcdp->declBus(c+705,"top resource_data", false,-1, 31,0);
        vcdp->declBus(c+713,"top resource_id", false,-1, 7,0);
        vcdp->declBit(c+721,"top resource_valid", false,-1);
        vcdp->declBit(c+729,"top resource_ready", false,-1);
        vcdp->declBit(c+1073,"top producer clk", false,-1);
        vcdp->declBit(c+1081,"top producer reset", false,-1);
        vcdp->declBit(c+1,"top producer in_stall_1", false,-1);
        vcdp->declBus(c+649,"top producer out_address_1", false,-1, 7,0);
        vcdp->declBus(c+657,"top producer out_id_1", false,-1, 7,0);
        vcdp->declBit(c+665,"top producer out_valid_1", false,-1);
        vcdp->declBit(c+9,"top producer in_stall_2", false,-1);
        vcdp->declBus(c+673,"top producer out_address_2", false,-1, 7,0);
        vcdp->declBus(c+681,"top producer out_id_2", false,-1, 7,0);
        vcdp->declBit(c+689,"top producer out_valid_2", false,-1);
        vcdp->declBus(c+649,"top producer reg_address_1", false,-1, 7,0);
        vcdp->declBus(c+657,"top producer reg_id_1", false,-1, 7,0);
        vcdp->declBit(c+665,"top producer reg_valid_1", false,-1);
        vcdp->declBus(c+673,"top producer reg_address_2", false,-1, 7,0);
        vcdp->declBus(c+681,"top producer reg_id_2", false,-1, 7,0);
        vcdp->declBit(c+689,"top producer reg_valid_2", false,-1);
        vcdp->declBit(c+1073,"top arbiter clk", false,-1);
        vcdp->declBit(c+1081,"top arbiter reset", false,-1);
        vcdp->declBit(c+33,"top arbiter in_valid_1", false,-1);
        vcdp->declBit(c+65,"top arbiter in_valid_2", false,-1);
        vcdp->declBit(c+729,"top arbiter in_ready", false,-1);
        vcdp->declBit(c+697,"top arbiter out_choice", false,-1);
        vcdp->declBit(c+81,"top arbiter out_valid", false,-1);
        vcdp->declBit(c+41,"top arbiter out_stall_1", false,-1);
        vcdp->declBit(c+73,"top arbiter out_stall_2", false,-1);
        vcdp->declBit(c+697,"top arbiter reg_choice", false,-1);
        vcdp->declBit(c+1073,"top pipeline_1 clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_1 reset", false,-1);
        vcdp->declBus(c+649,"top pipeline_1 in_address", false,-1, 7,0);
        vcdp->declBus(c+657,"top pipeline_1 in_id", false,-1, 7,0);
        vcdp->declBit(c+665,"top pipeline_1 in_valid", false,-1);
        vcdp->declBit(c+1,"top pipeline_1 out_stall", false,-1);
        vcdp->declBus(c+17,"top pipeline_1 out_address", false,-1, 7,0);
        vcdp->declBus(c+25,"top pipeline_1 out_id", false,-1, 7,0);
        vcdp->declBit(c+33,"top pipeline_1 out_valid", false,-1);
        vcdp->declBit(c+41,"top pipeline_1 in_stall", false,-1);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+89+i*1,"top pipeline_1 address", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+121+i*1,"top pipeline_1 id", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+153+i*1,"top pipeline_1 valid", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+185+i*1,"top pipeline_1 stall", true,(i+0));}}
        vcdp->declBit(c+1073,"top pipeline_1 PIPELINE[0] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_1 PIPELINE[0] stage_inst reset", false,-1);
        vcdp->declBus(c+1089,"top pipeline_1 PIPELINE[0] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+217,"top pipeline_1 PIPELINE[0] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+225,"top pipeline_1 PIPELINE[0] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+233,"top pipeline_1 PIPELINE[0] stage_inst in_valid", false,-1);
        vcdp->declBit(c+737,"top pipeline_1 PIPELINE[0] stage_inst out_stall", false,-1);
        vcdp->declBus(c+745,"top pipeline_1 PIPELINE[0] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+753,"top pipeline_1 PIPELINE[0] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+761,"top pipeline_1 PIPELINE[0] stage_inst out_valid", false,-1);
        vcdp->declBit(c+241,"top pipeline_1 PIPELINE[0] stage_inst in_stall", false,-1);
        vcdp->declBus(c+745,"top pipeline_1 PIPELINE[0] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+753,"top pipeline_1 PIPELINE[0] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+761,"top pipeline_1 PIPELINE[0] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+769,"top pipeline_1 PIPELINE[0] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+777,"top pipeline_1 PIPELINE[0] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+737,"top pipeline_1 PIPELINE[0] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+249,"top pipeline_1 PIPELINE[0] stage_inst main_en", false,-1);
        vcdp->declBit(c+257,"top pipeline_1 PIPELINE[0] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+737,"top pipeline_1 PIPELINE[0] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top pipeline_1 PIPELINE[1] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_1 PIPELINE[1] stage_inst reset", false,-1);
        vcdp->declBus(c+1097,"top pipeline_1 PIPELINE[1] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+265,"top pipeline_1 PIPELINE[1] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+273,"top pipeline_1 PIPELINE[1] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+281,"top pipeline_1 PIPELINE[1] stage_inst in_valid", false,-1);
        vcdp->declBit(c+785,"top pipeline_1 PIPELINE[1] stage_inst out_stall", false,-1);
        vcdp->declBus(c+793,"top pipeline_1 PIPELINE[1] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+801,"top pipeline_1 PIPELINE[1] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+809,"top pipeline_1 PIPELINE[1] stage_inst out_valid", false,-1);
        vcdp->declBit(c+289,"top pipeline_1 PIPELINE[1] stage_inst in_stall", false,-1);
        vcdp->declBus(c+793,"top pipeline_1 PIPELINE[1] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+801,"top pipeline_1 PIPELINE[1] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+809,"top pipeline_1 PIPELINE[1] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+817,"top pipeline_1 PIPELINE[1] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+825,"top pipeline_1 PIPELINE[1] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+785,"top pipeline_1 PIPELINE[1] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+297,"top pipeline_1 PIPELINE[1] stage_inst main_en", false,-1);
        vcdp->declBit(c+305,"top pipeline_1 PIPELINE[1] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+785,"top pipeline_1 PIPELINE[1] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top pipeline_1 PIPELINE[2] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_1 PIPELINE[2] stage_inst reset", false,-1);
        vcdp->declBus(c+1105,"top pipeline_1 PIPELINE[2] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+313,"top pipeline_1 PIPELINE[2] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+321,"top pipeline_1 PIPELINE[2] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+329,"top pipeline_1 PIPELINE[2] stage_inst in_valid", false,-1);
        vcdp->declBit(c+833,"top pipeline_1 PIPELINE[2] stage_inst out_stall", false,-1);
        vcdp->declBus(c+841,"top pipeline_1 PIPELINE[2] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+849,"top pipeline_1 PIPELINE[2] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+857,"top pipeline_1 PIPELINE[2] stage_inst out_valid", false,-1);
        vcdp->declBit(c+337,"top pipeline_1 PIPELINE[2] stage_inst in_stall", false,-1);
        vcdp->declBus(c+841,"top pipeline_1 PIPELINE[2] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+849,"top pipeline_1 PIPELINE[2] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+857,"top pipeline_1 PIPELINE[2] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+865,"top pipeline_1 PIPELINE[2] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+873,"top pipeline_1 PIPELINE[2] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+833,"top pipeline_1 PIPELINE[2] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+345,"top pipeline_1 PIPELINE[2] stage_inst main_en", false,-1);
        vcdp->declBit(c+353,"top pipeline_1 PIPELINE[2] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+833,"top pipeline_1 PIPELINE[2] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top pipeline_2 clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_2 reset", false,-1);
        vcdp->declBus(c+673,"top pipeline_2 in_address", false,-1, 7,0);
        vcdp->declBus(c+681,"top pipeline_2 in_id", false,-1, 7,0);
        vcdp->declBit(c+689,"top pipeline_2 in_valid", false,-1);
        vcdp->declBit(c+9,"top pipeline_2 out_stall", false,-1);
        vcdp->declBus(c+49,"top pipeline_2 out_address", false,-1, 7,0);
        vcdp->declBus(c+57,"top pipeline_2 out_id", false,-1, 7,0);
        vcdp->declBit(c+65,"top pipeline_2 out_valid", false,-1);
        vcdp->declBit(c+73,"top pipeline_2 in_stall", false,-1);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+361+i*1,"top pipeline_2 address", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+393+i*1,"top pipeline_2 id", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+425+i*1,"top pipeline_2 valid", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+457+i*1,"top pipeline_2 stall", true,(i+0));}}
        vcdp->declBit(c+1073,"top pipeline_2 PIPELINE[0] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_2 PIPELINE[0] stage_inst reset", false,-1);
        vcdp->declBus(c+1089,"top pipeline_2 PIPELINE[0] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+489,"top pipeline_2 PIPELINE[0] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+497,"top pipeline_2 PIPELINE[0] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+505,"top pipeline_2 PIPELINE[0] stage_inst in_valid", false,-1);
        vcdp->declBit(c+881,"top pipeline_2 PIPELINE[0] stage_inst out_stall", false,-1);
        vcdp->declBus(c+889,"top pipeline_2 PIPELINE[0] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+897,"top pipeline_2 PIPELINE[0] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+905,"top pipeline_2 PIPELINE[0] stage_inst out_valid", false,-1);
        vcdp->declBit(c+513,"top pipeline_2 PIPELINE[0] stage_inst in_stall", false,-1);
        vcdp->declBus(c+889,"top pipeline_2 PIPELINE[0] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+897,"top pipeline_2 PIPELINE[0] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+905,"top pipeline_2 PIPELINE[0] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+913,"top pipeline_2 PIPELINE[0] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+921,"top pipeline_2 PIPELINE[0] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+881,"top pipeline_2 PIPELINE[0] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+521,"top pipeline_2 PIPELINE[0] stage_inst main_en", false,-1);
        vcdp->declBit(c+529,"top pipeline_2 PIPELINE[0] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+881,"top pipeline_2 PIPELINE[0] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top pipeline_2 PIPELINE[1] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_2 PIPELINE[1] stage_inst reset", false,-1);
        vcdp->declBus(c+1097,"top pipeline_2 PIPELINE[1] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+537,"top pipeline_2 PIPELINE[1] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+545,"top pipeline_2 PIPELINE[1] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+553,"top pipeline_2 PIPELINE[1] stage_inst in_valid", false,-1);
        vcdp->declBit(c+929,"top pipeline_2 PIPELINE[1] stage_inst out_stall", false,-1);
        vcdp->declBus(c+937,"top pipeline_2 PIPELINE[1] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+945,"top pipeline_2 PIPELINE[1] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+953,"top pipeline_2 PIPELINE[1] stage_inst out_valid", false,-1);
        vcdp->declBit(c+561,"top pipeline_2 PIPELINE[1] stage_inst in_stall", false,-1);
        vcdp->declBus(c+937,"top pipeline_2 PIPELINE[1] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+945,"top pipeline_2 PIPELINE[1] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+953,"top pipeline_2 PIPELINE[1] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+961,"top pipeline_2 PIPELINE[1] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+969,"top pipeline_2 PIPELINE[1] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+929,"top pipeline_2 PIPELINE[1] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+569,"top pipeline_2 PIPELINE[1] stage_inst main_en", false,-1);
        vcdp->declBit(c+577,"top pipeline_2 PIPELINE[1] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+929,"top pipeline_2 PIPELINE[1] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top pipeline_2 PIPELINE[2] stage_inst clk", false,-1);
        vcdp->declBit(c+1081,"top pipeline_2 PIPELINE[2] stage_inst reset", false,-1);
        vcdp->declBus(c+1105,"top pipeline_2 PIPELINE[2] stage_inst stage_offset", false,-1, 7,0);
        vcdp->declBus(c+585,"top pipeline_2 PIPELINE[2] stage_inst in_address", false,-1, 7,0);
        vcdp->declBus(c+593,"top pipeline_2 PIPELINE[2] stage_inst in_id", false,-1, 7,0);
        vcdp->declBit(c+601,"top pipeline_2 PIPELINE[2] stage_inst in_valid", false,-1);
        vcdp->declBit(c+977,"top pipeline_2 PIPELINE[2] stage_inst out_stall", false,-1);
        vcdp->declBus(c+985,"top pipeline_2 PIPELINE[2] stage_inst out_address", false,-1, 7,0);
        vcdp->declBus(c+993,"top pipeline_2 PIPELINE[2] stage_inst out_id", false,-1, 7,0);
        vcdp->declBit(c+1001,"top pipeline_2 PIPELINE[2] stage_inst out_valid", false,-1);
        vcdp->declBit(c+609,"top pipeline_2 PIPELINE[2] stage_inst in_stall", false,-1);
        vcdp->declBus(c+985,"top pipeline_2 PIPELINE[2] stage_inst reg_main_address", false,-1, 7,0);
        vcdp->declBus(c+993,"top pipeline_2 PIPELINE[2] stage_inst reg_main_id", false,-1, 7,0);
        vcdp->declBit(c+1001,"top pipeline_2 PIPELINE[2] stage_inst reg_main_valid", false,-1);
        vcdp->declBus(c+1009,"top pipeline_2 PIPELINE[2] stage_inst reg_overflow_address", false,-1, 7,0);
        vcdp->declBus(c+1017,"top pipeline_2 PIPELINE[2] stage_inst reg_overflow_id", false,-1, 7,0);
        vcdp->declBit(c+977,"top pipeline_2 PIPELINE[2] stage_inst reg_overflow_valid", false,-1);
        vcdp->declBit(c+617,"top pipeline_2 PIPELINE[2] stage_inst main_en", false,-1);
        vcdp->declBit(c+625,"top pipeline_2 PIPELINE[2] stage_inst overflow_en", false,-1);
        vcdp->declBit(c+977,"top pipeline_2 PIPELINE[2] stage_inst overflow_sel", false,-1);
        vcdp->declBit(c+1073,"top shared_resource clk", false,-1);
        vcdp->declBit(c+1081,"top shared_resource reset", false,-1);
        vcdp->declBus(c+633,"top shared_resource in_address", false,-1, 7,0);
        vcdp->declBus(c+641,"top shared_resource in_id", false,-1, 7,0);
        vcdp->declBit(c+81,"top shared_resource in_valid", false,-1);
        vcdp->declBus(c+705,"top shared_resource out_data", false,-1, 31,0);
        vcdp->declBus(c+713,"top shared_resource out_id", false,-1, 7,0);
        vcdp->declBit(c+721,"top shared_resource out_valid", false,-1);
        vcdp->declBit(c+729,"top shared_resource out_ready", false,-1);
        vcdp->declBus(c+1025,"top shared_resource reg_data_internal", false,-1, 31,0);
        vcdp->declBus(c+1033,"top shared_resource reg_id_internal", false,-1, 7,0);
        vcdp->declBus(c+705,"top shared_resource reg_data_external", false,-1, 31,0);
        vcdp->declBus(c+713,"top shared_resource reg_id_external", false,-1, 7,0);
        vcdp->declBit(c+721,"top shared_resource reg_valid", false,-1);
        vcdp->declBit(c+729,"top shared_resource reg_ready", false,-1);
        vcdp->declBus(c+1041,"top shared_resource counter", false,-1, 3,0);
        vcdp->declBit(c+1073,"top consumer clk", false,-1);
        vcdp->declBit(c+1081,"top consumer reset", false,-1);
        vcdp->declBus(c+705,"top consumer in_data", false,-1, 31,0);
        vcdp->declBus(c+713,"top consumer in_id", false,-1, 7,0);
        vcdp->declBit(c+721,"top consumer in_valid", false,-1);
        vcdp->declBus(c+1049,"top consumer data_reg", false,-1, 31,0);
        vcdp->declBus(c+1057,"top consumer id_reg", false,-1, 7,0);
        vcdp->declBit(c+1065,"top consumer valid_reg", false,-1);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                           [0U]));
        vcdp->fullBit(c+9,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                           [0U]));
        vcdp->fullBus(c+17,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [3U]),8);
        vcdp->fullBus(c+25,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [3U]),8);
        vcdp->fullBit(c+33,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [3U]));
        vcdp->fullBit(c+41,((vlTOPp->top__DOT__pipeline_1__DOT__valid
                             [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                              & (~ (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)))))
                              : 0U)));
        vcdp->fullBus(c+49,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [3U]),8);
        vcdp->fullBus(c+57,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [3U]),8);
        vcdp->fullBit(c+65,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [3U]));
        vcdp->fullBit(c+73,((vlTOPp->top__DOT__pipeline_2__DOT__valid
                             [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                              & (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice))))
                              : 0U)));
        vcdp->fullBit(c+81,((vlTOPp->top__DOT__pipeline_1__DOT__valid
                             [3U] | vlTOPp->top__DOT__pipeline_2__DOT__valid
                             [3U])));
        vcdp->fullBus(c+89,(vlTOPp->top__DOT__pipeline_1__DOT__address[0]),8);
        vcdp->fullBus(c+90,(vlTOPp->top__DOT__pipeline_1__DOT__address[1]),8);
        vcdp->fullBus(c+91,(vlTOPp->top__DOT__pipeline_1__DOT__address[2]),8);
        vcdp->fullBus(c+92,(vlTOPp->top__DOT__pipeline_1__DOT__address[3]),8);
        vcdp->fullBus(c+121,(vlTOPp->top__DOT__pipeline_1__DOT__id[0]),8);
        vcdp->fullBus(c+122,(vlTOPp->top__DOT__pipeline_1__DOT__id[1]),8);
        vcdp->fullBus(c+123,(vlTOPp->top__DOT__pipeline_1__DOT__id[2]),8);
        vcdp->fullBus(c+124,(vlTOPp->top__DOT__pipeline_1__DOT__id[3]),8);
        vcdp->fullBit(c+153,(vlTOPp->top__DOT__pipeline_1__DOT__valid[0]));
        vcdp->fullBit(c+154,(vlTOPp->top__DOT__pipeline_1__DOT__valid[1]));
        vcdp->fullBit(c+155,(vlTOPp->top__DOT__pipeline_1__DOT__valid[2]));
        vcdp->fullBit(c+156,(vlTOPp->top__DOT__pipeline_1__DOT__valid[3]));
        vcdp->fullBit(c+185,(vlTOPp->top__DOT__pipeline_1__DOT__stall[0]));
        vcdp->fullBit(c+186,(vlTOPp->top__DOT__pipeline_1__DOT__stall[1]));
        vcdp->fullBit(c+187,(vlTOPp->top__DOT__pipeline_1__DOT__stall[2]));
        vcdp->fullBit(c+188,(vlTOPp->top__DOT__pipeline_1__DOT__stall[3]));
        vcdp->fullBus(c+217,(vlTOPp->top__DOT__pipeline_1__DOT__address
                             [0U]),8);
        vcdp->fullBus(c+225,(vlTOPp->top__DOT__pipeline_1__DOT__id
                             [0U]),8);
        vcdp->fullBit(c+233,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                             [0U]));
        vcdp->fullBit(c+241,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                             [1U]));
        vcdp->fullBit(c+249,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+257,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+265,(vlTOPp->top__DOT__pipeline_1__DOT__address
                             [1U]),8);
        vcdp->fullBus(c+273,(vlTOPp->top__DOT__pipeline_1__DOT__id
                             [1U]),8);
        vcdp->fullBit(c+281,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                             [1U]));
        vcdp->fullBit(c+289,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                             [2U]));
        vcdp->fullBit(c+297,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+305,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+313,(vlTOPp->top__DOT__pipeline_1__DOT__address
                             [2U]),8);
        vcdp->fullBus(c+321,(vlTOPp->top__DOT__pipeline_1__DOT__id
                             [2U]),8);
        vcdp->fullBit(c+329,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                             [2U]));
        vcdp->fullBit(c+337,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                             [3U]));
        vcdp->fullBit(c+345,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+353,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+361,(vlTOPp->top__DOT__pipeline_2__DOT__address[0]),8);
        vcdp->fullBus(c+362,(vlTOPp->top__DOT__pipeline_2__DOT__address[1]),8);
        vcdp->fullBus(c+363,(vlTOPp->top__DOT__pipeline_2__DOT__address[2]),8);
        vcdp->fullBus(c+364,(vlTOPp->top__DOT__pipeline_2__DOT__address[3]),8);
        vcdp->fullBus(c+393,(vlTOPp->top__DOT__pipeline_2__DOT__id[0]),8);
        vcdp->fullBus(c+394,(vlTOPp->top__DOT__pipeline_2__DOT__id[1]),8);
        vcdp->fullBus(c+395,(vlTOPp->top__DOT__pipeline_2__DOT__id[2]),8);
        vcdp->fullBus(c+396,(vlTOPp->top__DOT__pipeline_2__DOT__id[3]),8);
        vcdp->fullBit(c+425,(vlTOPp->top__DOT__pipeline_2__DOT__valid[0]));
        vcdp->fullBit(c+426,(vlTOPp->top__DOT__pipeline_2__DOT__valid[1]));
        vcdp->fullBit(c+427,(vlTOPp->top__DOT__pipeline_2__DOT__valid[2]));
        vcdp->fullBit(c+428,(vlTOPp->top__DOT__pipeline_2__DOT__valid[3]));
        vcdp->fullBit(c+457,(vlTOPp->top__DOT__pipeline_2__DOT__stall[0]));
        vcdp->fullBit(c+458,(vlTOPp->top__DOT__pipeline_2__DOT__stall[1]));
        vcdp->fullBit(c+459,(vlTOPp->top__DOT__pipeline_2__DOT__stall[2]));
        vcdp->fullBit(c+460,(vlTOPp->top__DOT__pipeline_2__DOT__stall[3]));
        vcdp->fullBus(c+489,(vlTOPp->top__DOT__pipeline_2__DOT__address
                             [0U]),8);
        vcdp->fullBus(c+497,(vlTOPp->top__DOT__pipeline_2__DOT__id
                             [0U]),8);
        vcdp->fullBit(c+505,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                             [0U]));
        vcdp->fullBit(c+513,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                             [1U]));
        vcdp->fullBit(c+521,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+529,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+537,(vlTOPp->top__DOT__pipeline_2__DOT__address
                             [1U]),8);
        vcdp->fullBus(c+545,(vlTOPp->top__DOT__pipeline_2__DOT__id
                             [1U]),8);
        vcdp->fullBit(c+553,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                             [1U]));
        vcdp->fullBit(c+561,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                             [2U]));
        vcdp->fullBit(c+569,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+577,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+585,(vlTOPp->top__DOT__pipeline_2__DOT__address
                             [2U]),8);
        vcdp->fullBus(c+593,(vlTOPp->top__DOT__pipeline_2__DOT__id
                             [2U]),8);
        vcdp->fullBit(c+601,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                             [2U]));
        vcdp->fullBit(c+609,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                             [3U]));
        vcdp->fullBit(c+617,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en));
        vcdp->fullBit(c+625,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->fullBus(c+633,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                               ? vlTOPp->top__DOT__pipeline_2__DOT__address
                              [3U] : vlTOPp->top__DOT__pipeline_1__DOT__address
                              [3U])),8);
        vcdp->fullBus(c+641,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                               ? vlTOPp->top__DOT__pipeline_2__DOT__id
                              [3U] : vlTOPp->top__DOT__pipeline_1__DOT__id
                              [3U])),8);
        vcdp->fullBus(c+649,(vlTOPp->top__DOT__producer__DOT__reg_address_1),8);
        vcdp->fullBus(c+657,(vlTOPp->top__DOT__producer__DOT__reg_id_1),8);
        vcdp->fullBit(c+665,(vlTOPp->top__DOT__producer__DOT__reg_valid_1));
        vcdp->fullBus(c+673,(vlTOPp->top__DOT__producer__DOT__reg_address_2),8);
        vcdp->fullBus(c+681,(vlTOPp->top__DOT__producer__DOT__reg_id_2),8);
        vcdp->fullBit(c+689,(vlTOPp->top__DOT__producer__DOT__reg_valid_2));
        vcdp->fullBit(c+697,(vlTOPp->top__DOT__arbiter__DOT__reg_choice));
        vcdp->fullBus(c+705,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_external),32);
        vcdp->fullBus(c+713,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_external),8);
        vcdp->fullBit(c+721,(vlTOPp->top__DOT__shared_resource__DOT__reg_valid));
        vcdp->fullBit(c+729,(vlTOPp->top__DOT__shared_resource__DOT__reg_ready));
        vcdp->fullBit(c+737,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+745,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+753,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+761,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+769,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+777,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBit(c+785,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+793,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+801,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+809,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+817,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+825,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBit(c+833,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+841,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+849,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+857,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+865,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+873,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBit(c+881,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+889,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+897,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+905,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+913,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+921,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBit(c+929,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+937,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+945,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+953,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+961,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+969,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBit(c+977,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->fullBus(c+985,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->fullBus(c+993,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->fullBit(c+1001,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->fullBus(c+1009,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->fullBus(c+1017,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->fullBus(c+1025,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal),32);
        vcdp->fullBus(c+1033,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal),8);
        vcdp->fullBus(c+1041,(vlTOPp->top__DOT__shared_resource__DOT__counter),4);
        vcdp->fullBus(c+1049,(vlTOPp->top__DOT__consumer__DOT__data_reg),32);
        vcdp->fullBus(c+1057,(vlTOPp->top__DOT__consumer__DOT__id_reg),8);
        vcdp->fullBit(c+1065,(vlTOPp->top__DOT__consumer__DOT__valid_reg));
        vcdp->fullBit(c+1073,(vlTOPp->clk));
        vcdp->fullBit(c+1081,(vlTOPp->reset));
        vcdp->fullBus(c+1089,(3U),8);
        vcdp->fullBus(c+1097,(6U),8);
        vcdp->fullBus(c+1105,(9U),8);
    }
}
