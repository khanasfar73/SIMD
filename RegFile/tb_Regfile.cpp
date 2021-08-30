#include "verilated.h"
#include "tb_Regfile.hpp"

using namespace std;

TestCase all_cases[16];

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Regfile *tb = new Regfile;
	tb->eval();

	for (int i = 0; i < 16; i++)
	{
		all_cases[i].name = "WRITE";
		all_cases[i].wr_en = 0b1;
		all_cases[i].addr = i;
		all_cases[i].w_data = i;
	}

	int addr_val = 1;
	bool bPassed = true;

	for (auto test : all_cases)
	{
		// write test
		tb->wr_en = test.wr_en;
		tb->w_addr[addr_val] = test.addr;
		tb->r_addr[addr_val] = test.addr;
		tb->w_data[addr_val] = test.w_data;

		tb->clk = 0;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		if (tb->r_data[addr_val] == test.w_data)
			continue;
		else
		{
			bPassed = false;
			printf("%s: Failed (expected: %4X, but was %4X)\n", test.name, test.w_data, tb->r_data);
		}
	}
	if (bPassed)
		printf("%s: Passed\n", all_cases->name);

	for (int i = 0; i < 16; i++)
	{
		all_cases[i].name = "READ";
		all_cases[i].wr_en = 0b0;
		all_cases[i].addr = i;
		all_cases[i].w_data = i;
	}

	bPassed = true;
	for (auto test : all_cases)
	{
		// read test
		tb->wr_en = test.wr_en;
		tb->w_addr[addr_val] = test.addr;
		tb->r_addr[addr_val] = test.addr;
		tb->w_data[addr_val] = test.w_data;

		tb->clk = 0;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		if (tb->r_data[addr_val] == test.w_data)
			continue;
		else
		{
			bPassed = false;
			cout << hex << "Failed: " << test.name << " expected: " << test.w_data
				 << ", but was " << tb->r_data << dec << endl;
		}
	}

	if (bPassed)
		cout << bold << green << "Passed : " << def << reset << all_cases->name << "\n";

	delete tb;
	exit(0);
}

// verilator -Wall --trace -cc ../OpCodes.sv reg_file.sv -prefix Reg_file --exe test_regfile.cpp -CFLAGS "-std=c++11" --build