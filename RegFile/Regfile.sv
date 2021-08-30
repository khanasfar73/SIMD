import OpCodes::NSIG;
import OpCodes::ADDR_BITS_REGF;
import OpCodes::READ_PORTS_REGF;
import OpCodes::WRITE_PORTS_REGF;

module Regfile(
    output wire [NSIG : 0] r_data [READ_PORTS_REGF],
    input wire [ADDR_BITS_REGF - 1 : 0] w_addr[WRITE_PORTS_REGF], r_addr [READ_PORTS_REGF], // 4 bit address
    input wire [NSIG : 0] w_data [WRITE_PORTS_REGF],
    input wire wr_en, clk /* verilator clocker */
);

reg [NSIG : 0] reg_array [2**ADDR_BITS_REGF - 1 : 0]; // 16 registers

/*
initial begin
    reg_array[0] = 69;
    reg_array[1] = 3;
    reg_array[2] = 0;
    reg_array[3] = 0;
    reg_array[4] = 4;
    reg_array[5] = 5;
    reg_array[6] = 0;
    reg_array[7] = 0;
    reg_array[8] = 8;
    reg_array[9] = 9;
    reg_array[10] = 0;
    reg_array[11] = 0;
    reg_array[12] = 12;
    reg_array[13] = 13;
    reg_array[14] = 0;
    reg_array[15] = 0;
end
//*/

always_ff @(negedge clk) begin
    if (wr_en) begin
        for (integer j = 0; j < WRITE_PORTS_REGF; j++) begin
            reg_array[w_addr[j]] <= w_data[j];
        end
    end

    for (shortint i=0; i<16; i++) begin
        $display("$RegFile ========> R%1d: %2d", i, reg_array[4'(i)]);
    end
    /*
    for (integer i=0 ; i<8; i++) begin
        $display("$RegFile R_ADDR: %2d, R_DATA: %2d", r_addr[3'(i)], r_data[3'(i)]);
    end
    for (shortint i = 0; i<4; i++) begin
        $display("$RegFile W_ADDR: %2d, W_DATA: %2d", w_addr[3'(i)], w_data[3'(i)]);
    end
    //*/
end

generate
genvar i;
for (i = 0; i < READ_PORTS_REGF; i++) begin
    assign r_data[i] = reg_array[r_addr[i]];
end
endgenerate
endmodule
