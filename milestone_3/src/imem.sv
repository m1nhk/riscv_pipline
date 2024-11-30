/* verilator lint_off UNUSED */
module imem (
    input  logic [31:0] pc,
    input  logic i_rst_n,
    output logic [31:0] instr
);

// Memory for Instructions (8KB) (2048 instructions)
reg [31:0] inst_mem [0:2047];

always_comb begin
    if (!i_rst_n) instr = 32'b0;
    else instr = inst_mem[pc[12:2]]; 
end

initial begin
	$readmemh("mem.dump", inst_mem);
end

endmodule
