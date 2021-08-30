// Swarm(warp) scheduler

module Swarm
(
    output O,
    input wire clk /* verilator clocker */
);

always_ff @( posedge clk ) begin : Swarm
    $display("[$display] swarm");
end

assign O = 1;

endmodule
