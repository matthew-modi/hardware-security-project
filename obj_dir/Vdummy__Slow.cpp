// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdummy.h for the primary calling header

#include "Vdummy.h"
#include "Vdummy__Syms.h"

//==========

VL_CTOR_IMP(Vdummy) {
    Vdummy__Syms* __restrict vlSymsp = __VlSymsp = new Vdummy__Syms(this, name());
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdummy::__Vconfigure(Vdummy__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdummy::~Vdummy() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdummy::_eval_initial(Vdummy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdummy::_eval_initial\n"); );
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vdummy::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdummy::final\n"); );
    // Variables
    Vdummy__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdummy::_eval_settle(Vdummy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdummy::_eval_settle\n"); );
    Vdummy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdummy::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdummy::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    count = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
