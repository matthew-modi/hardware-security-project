#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main() {
    Verilated::traceEverOn(true);
    Vdummy* dut = new Vdummy;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("dump.vcd");

    dut->rst = 1;

    for (int i = 0; i < 100; ++i) {
        dut->clk = i & 1;
        if (i == 4) dut->rst = 0; // release reset
        dut->eval();
        tfp->dump(i);
    }

    tfp->close();
    delete dut;
    return 0;
}
