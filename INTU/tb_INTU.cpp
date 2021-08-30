#include "verilated.h"
#include "tb_INTU.hpp"

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    INTU *int_unit = new INTU;

    int_unit->A = 0;
    int_unit->B = 0;
    int_unit->eval();

    for (auto test : all_cases)
    {
        int_unit->A = test.A;
        int_unit->B = test.B;
        int_unit->OP = test.OP;

        int_unit->clk = 0;
        int_unit->eval();

        int_unit->clk = 1;
        int_unit->eval();

        int_unit->clk = 0;
        int_unit->eval();
        if (int_unit->ALU_Out == test.expected_output)
        {
            printf("%s: Passed\n", test.name);
        }
        else
        {
            printf("%s: Failed (expected: %4X, but was %4X)\n", test.name, test.expected_output,
                   int_unit->ALU_Out);
        }
    }

    delete int_unit;
    exit(0);
}

// verilator -Wall --trace -cc ../OpCodes.sv INTU.sv -prefix INTU --exe test.cpp -CFLAGS "-std=c++11" --build