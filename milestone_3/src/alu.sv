/* verilator lint_off UNUSED */
module alu(
	input  logic [31:0] i_operand_a,
	input  logic [31:0] i_operand_b,
	input  logic [3:0]  i_alu_op,
	output logic [31:0] o_alu_data
);

reg cout;
reg [31:0] sum;
ripple_adder ripple_adder(
	.a(i_operand_a),
	.b(~i_operand_b),
	.cin(1'b1),
	.sum(sum),
	.cout(cout)
);

always @(*) begin
	case(i_alu_op) 
		4'b0000: o_alu_data = i_operand_a + i_operand_b; 									// ADD
		4'b0001: o_alu_data = i_operand_a + ~i_operand_b + 1; 								// SUB
		4'b0010: begin
			if (i_operand_a[31] != i_operand_b[31]) o_alu_data = {31'b0,i_operand_a[31]};	// SLT
			else o_alu_data = {31'b0,sum[31]};												
		end			
		4'b0011: o_alu_data = {31'b0,!cout};												// SLTU
		4'b0100: o_alu_data = i_operand_a ^ i_operand_b; 									// XOR
		4'b0101: o_alu_data = i_operand_a | i_operand_b; 									// OR 
		4'b0110: o_alu_data = i_operand_a & i_operand_b; 									// AND 
		
		// Barrel-shifting
		4'b0111: begin																	// SLL
			o_alu_data = i_operand_a;																	
			if (i_operand_b[0]) o_alu_data = {o_alu_data[30:0], 1'b0}; 
			if (i_operand_b[1]) o_alu_data = {o_alu_data[29:0], 2'b0}; 
			if (i_operand_b[2]) o_alu_data = {o_alu_data[27:0], 4'b0};
			if (i_operand_b[3]) o_alu_data = {o_alu_data[23:0], 8'b0};
			if (i_operand_b[4]) o_alu_data = {o_alu_data[15:0], 16'b0};
		end					
		4'b1000: begin                                                                  // SRL
			o_alu_data = i_operand_a;	
			if (i_operand_b[0]) o_alu_data = {1'b0, o_alu_data[31:1]};
			if (i_operand_b[1]) o_alu_data = {2'b0, o_alu_data[31:2]}; 
			if (i_operand_b[2]) o_alu_data = {4'b0, o_alu_data[31:4]}; 
			if (i_operand_b[3]) o_alu_data = {8'b0, o_alu_data[31:8]};
			if (i_operand_b[4]) o_alu_data = {16'b0, o_alu_data[31:16]};
		end
		4'b1001: begin                                                                  // SRA
			o_alu_data = i_operand_a;
			if (i_operand_b[0]) o_alu_data = {i_operand_a[31], o_alu_data[31:1]};
			if (i_operand_b[1]) o_alu_data = {{2{i_operand_a[31]}}, o_alu_data[31:2]}; 
			if (i_operand_b[2]) o_alu_data = {{4{i_operand_a[31]}}, o_alu_data[31:4]}; 
			if (i_operand_b[3]) o_alu_data = {{8{i_operand_a[31]}}, o_alu_data[31:8]}; 
			if (i_operand_b[4]) o_alu_data = {{16{i_operand_a[31]}}, o_alu_data[31:16]};	
		end	
		4'b1010: o_alu_data = i_operand_b; 												// LUI
		default: o_alu_data = 32'bxx;
	endcase
end
endmodule
