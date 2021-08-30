#!/bin/bash

#rm -r obj_dir

MODULES='OpCodes.sv INTU/INTU.sv RegFile/Regfile.sv idp_unit/IDP.sv ldst/LDST.sv ldst/Load.sv ldst/Store.sv'
TOP=EB

verilator -Wall --trace -cc $MODULES $TOP.sv -prefix $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++20" --build -j 6
$1
./obj_dir/$TOP
