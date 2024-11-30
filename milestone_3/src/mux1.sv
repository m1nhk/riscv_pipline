module mux1(
	input logic [31:0] alu_data,
    input logic [31:0] pc_four,
	input logic br_sel,
	output logic [31:0] nxt_pc 
);

assign nxt_pc = br_sel ? alu_data : pc_four;

endmodule
