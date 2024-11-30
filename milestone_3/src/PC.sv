module PC(
	input logic i_clk,
	input logic i_rst_n,
	input logic stallF,
	input logic [31:0] nxt_pc,
	output logic [31:0] pcF
);

always @(posedge i_clk or negedge i_rst_n) begin
	if (!i_rst_n) pcF <= 0;
	else if (stallF) pcF <= pcF;
	else pcF <= nxt_pc;	
end

endmodule

