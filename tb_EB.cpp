#include "verilated.h"
#include "tb_EB.h"

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    EB *tb = new EB;

    tb->eval();

    for (auto test : all_cases)
    {

        tb->wr_en = test.wr_en;
        tb->feed_data = test.feed_data;
        for (size_t i = 0; i < 8; i++)
            tb->Input_in[i] = test.Input_in[i];
        tb->OP = test.OP;

        tb->clk = 0;
        tb->eval();

        tb->clk = 1;
        tb->eval();

        tb->clk = 0;
        tb->eval();

        comp_array(test.name, tb->Result_out, test.expected_output);
    }

    delete tb;
    exit(0);
}
// verilator -Wall --trace -cc OpCodes.sv m2to1.sv INTU/INTU.sv RegFile/reg_file.sv tb.sv -prefix tb --exe test_tb.cpp -CFLAGS "-std=c++11" --build