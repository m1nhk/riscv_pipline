module adder_four(
	input logic [31:0] pc,
	output logic [31:0] pc_nxtF
);

assign pc_nxtF = pc + 4;

endmodule
