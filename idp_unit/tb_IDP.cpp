#include <iostream>
#include "verilated.h"
#include "IDP.h"
#include "tb_IDP.hpp"

using namespace std;
using namespace helper;

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	IDP *tb = new IDP;

	tb->eval();

	for (auto test : R)
	{
		tb->clk = 0;
		tb->Inst_in = test.I.Inst_in;
		tb->WarpID_in = test.I.WarpID_in;
		tb->thread_mask_in = test.I.thread_mask_in;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		bool bPassed = true;

		for (size_t i = 0; i < 8; i++)
		{
			if (tb->rd_addr_o[i] != test.expected_w_addr_o[i])
			{
				printFailed(test.expected_w_addr_o[i], tb->rd_addr_o[i], "R Type[w_addr(", i);
				bPassed = false;
			}
		}

		for (size_t i = 0; i < 4; i++)
		{
			if (tb->rs1_addr_o[i] != test.expected_rs1_addr_o[i])
			{
				printFailed(test.expected_rs1_addr_o[i], tb->rs1_addr_o[i], "R Type[rs1(", i);
				bPassed = false;
			}

			if (tb->rs2_addr_o[i] != test.expected_rs2_addr_o[i])
			{
				printFailed(test.expected_rs2_addr_o[i], tb->rs2_addr_o[i], "R Type[rs2(", i);
				bPassed = false;
			}

			if (tb->alu_select_o[i] != test.exp_alu_select_o[3 - i])
			{
				printFailed(test.exp_alu_select_o[i], tb->alu_select_o[3 - i], "R Type[alu_select(", i);
				bPassed = false;
			}
		}

		if (tb->f3_o != test.exp_f3_o)
		{
			printFailed(test.exp_f3_o, tb->f3_o, "R Type[funct3]");
			bPassed = false;
		}

		if (tb->f2_o != test.exp_f2_o)
		{
			printFailed(test.exp_f2_o, tb->f2_o, "R Type[funct2]");
			bPassed = false;
		}

		if (tb->f5_o != test.exp_f5_o)
		{
			printFailed(test.exp_f5_o, tb->f5_o, "R Type[funct5]");
			bPassed = false;
		}

		printPassed(bPassed, "R Instruction");
	}

	for (auto test : Store)
	{
		tb->clk = 0;
		tb->Inst_in = test.I.Inst_in;
		tb->WarpID_in = test.I.WarpID_in;
		tb->thread_mask_in = test.I.thread_mask_in;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		bool bPassed = true;
		for (size_t i = 0; i < 4; i++)
		{
			if (tb->rs1_addr_o[i] != test.exp_rs1_addr_o[i])
			{
				printFailed(test.exp_rs1_addr_o[i], tb->rs1_addr_o[i], "Load(rs1[", i);
				bPassed = false;
			}

			if (tb->rs2_addr_o[i] != test.exp_rs2_addr_o[i])
			{
				printFailed(test.exp_rs2_addr_o[i], tb->rs2_addr_o[i], "Load(rs2[", i);
				bPassed = false;
			}
		}

		printPassed(bPassed, "Store Instruction");
	}

	for (auto test : Load)
	{
		tb->clk = 0;
		tb->Inst_in = test.I.Inst_in;
		tb->WarpID_in = test.I.WarpID_in;
		tb->thread_mask_in = test.I.thread_mask_in;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		bool bPassed = true;
		for (size_t i = 0; i < 4; i++)
		{
			if (tb->rs1_addr_o[i] != test.exp_rs1_addr_o[i])
			{
				printFailed(test.exp_rs1_addr_o[i], tb->rs1_addr_o[i], "Load(rs1[", i);
				bPassed = false;
			}
		}

		for (size_t i = 0; i < 8; i++)
		{
			if (tb->rd_addr_o[i] != test.exp_rd_addr_o[i])
			{
				printFailed(test.exp_rs1_addr_o[i], tb->rs1_addr_o[i], "Load(rd1[", i);
				bPassed = false;
			}
		}

		if (tb->mem_offset_o != test.exp_mem_offset_o)
		{
			printFailed(test.exp_mem_offset_o, tb->mem_offset_o, "Load [mem_offset]");
			bPassed = false;
		}

		printPassed(bPassed, "Load Instruction");
	}

	for (auto test : U)
	{
		tb->clk = 0;
		tb->Inst_in = test.I.Inst_in;
		tb->WarpID_in = test.I.WarpID_in;
		tb->thread_mask_in = test.I.thread_mask_in;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		bool bPassed = true;
		printPassed(bPassed, "U instruction");
	}

	for (auto test : FPLoad)
	{
		tb->clk = 0;
		tb->Inst_in = test.I.Inst_in;
		tb->WarpID_in = test.I.WarpID_in;
		tb->thread_mask_in = test.I.thread_mask_in;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		bool bPassed = true;
		if (tb->stride_o != test.exp_stride_o)
		{
			printFailed(test.exp_stride_o, tb->stride_o, "[stride]");
			bPassed = false;
		}

		printPassed(bPassed, "FP Load Instruction");
	}

	delete tb;
	exit(0);
}
