#!/bin/bash

#rm -r obj_dir

MODULES='../OpCodes.sv'
LDST='Load.sv Store.sv'
TOP=LDST

verilator -Wall --trace -cc $MODULES $LDST $TOP.sv -prefix $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++20" --build -j 6
$1
./obj_dir/$TOP
