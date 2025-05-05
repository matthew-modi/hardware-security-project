// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdummy__Syms.h"


void Vdummy::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdummy__Syms* __restrict vlSymsp = static_cast<Vdummy__Syms*>(userp);
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdummy::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdummy__Syms* __restrict vlSymsp = static_cast<Vdummy__Syms*>(userp);
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgCData(oldp+2,(vlTOPp->count),4);
    }
}

void Vdummy::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdummy__Syms* __restrict vlSymsp = static_cast<Vdummy__Syms*>(userp);
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
