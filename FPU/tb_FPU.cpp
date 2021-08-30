#include "verilated.h"
#include "tb_FPU.hpp"

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    FPU *tb = new FPU;

    tb->A = 0;
    tb->B = 0;
    tb->C = 0;
    tb->eval();

    for (auto test : all_cases)
    {
        tb->A = test.A;
        tb->B = test.B;
        tb->C = test.C;
        tb->OP = test.OP;

        tb->clk = 0;
        tb->eval();

        tb->clk = 1;
        tb->eval();

        tb->clk = 0;
        tb->eval();

        if (tb->FPU_Out == test.expected_output)
        {
            printf("%s: Passed\n", test.name);
        }
        else
        {
            printf("%s: Failed (expected: %4X, but was %4X)\n", test.name, test.expected_output,
                   tb->FPU_Out);
            printBits(sizeof(tb->FPU_Out), &tb->FPU_Out);
        }
    }
    delete tb;
    exit(0);
}

// 0    10000001    00000000000000000000010