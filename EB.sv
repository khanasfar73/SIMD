// Multiple Thread Execution Block

import OpCodes::opcode;
import OpCodes::INTU_CORES;
import OpCodes::NSIG;
import OpCodes::READ_PORTS_REGF;
import OpCodes::WRITE_PORTS_REGF;
import OpCodes::ADDR_BITS_REGF;

module EB (
    output wire [NSIG:0] Result_out [REGLD_PER_CLK],
    input wire [NSIG:0] Input_in [REGLD_PER_CLK],
    input opcode OP,
    input wire wr_en, feed_data, clk /* verilator clocker */
);

wire opcode INT_OP /* verilator lint_off UNUSED */;
wire [NSIG : 0] w_data [WRITE_PORTS_REGF], Load_data [WRITE_PORTS_REGF], alu_out_w[INTU_CORES];
wire [NSIG : 0] to_mem_w [READ_PORTS_REGF];
wire [ADDR_BITS_REGF - 1 : 0] w_addr[WRITE_PORTS_REGF], r_addr [READ_PORTS_REGF];

genvar i;
generate
    for (i = 0; i < INTU_CORES; i++) begin
        assign w_data[2*i] = (feed_data) ? Load_data[i] : alu_out_w[i];
        assign w_data[2*i+1] = (feed_data) ? Load_data[i] : 16'1;
    end
endgenerate

IDP idp(
    .INT_OP_o(INT_OP),
    .OP_in(OP),
    .w_addr_o(w_addr),
    .r_addr_o(r_addr),
    .clk(clk)
);

Regfile rf(
    .r_data(to_mem_w),
    .clk(clk),
    .wr_en(wr_en),
    .w_addr(w_addr), .r_addr(r_addr),
    .w_data(w_data)
);

LDST ldst1(
    .Load_o(Load_data),
    .Load_i(Input_in),
    .Store_o(Result_out),
    .Store_i(to_mem_w),
    .clk(clk)
);

// instantiating N number of INT CORES
generate
    for (i = 0; i < INTU_CORES; i++) begin
        INTU int_unit(
            .ALU_Out(alu_out_w[i]),
            .A(to_mem_w[2 * i]),
            .B(to_mem_w[2 * i + 1]),                                   // B[NBITS * i + NSIG : NBITS * i]
            .OP(INT_OP),
            .clk(clk)
            );
    end
endgenerate
endmodule