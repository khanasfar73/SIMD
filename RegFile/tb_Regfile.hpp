#ifndef TB_REGFILE_H
#define TB_REGFILE_H

#include "obj_dir/Regfile.h"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/TermColor.hpp"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/helper.hpp"

struct TestCase
{
	const char *name;
	uint8_t wr_en; // 1 bit
	uint8_t addr;
	uint16_t w_data;
};

#endif
/* TB_REGFILE_H */