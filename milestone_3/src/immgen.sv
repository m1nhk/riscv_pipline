module immgen(
	input  logic [31:0] instr,
	output logic [31:0] imm
);

logic [6:0] opcode;

assign opcode = instr[6:0];

always @(*) begin
	case (opcode)	
		7'b0010011: imm = {{21{instr[31]}},instr[30:25],instr[24:21],instr[20]}; 					// I TYPE
		7'b1100011: imm = {{20{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0}; 				// B TYPE
		7'b0100011: imm = {{21{instr[31]}},instr[30:25],instr[11:8],instr[7]};  					// S TYPE
		7'b0000011: imm = {{21{instr[31]}},instr[30:25],instr[24:21],instr[20]}; 					// LOAD_TYPE
		7'b0110111: imm = {instr[31],instr[30:20],instr[19:12],{12{1'b0}}}; 			 			// LUI
		7'b0010111: imm = {instr[31],instr[30:20],instr[19:12],{12{1'b0}}}; 						// AUIPC
		7'b1100111: imm = {{21{instr[31]}},instr[30:25],instr[24:21],instr[20]}; 					// JALR
		7'b1101111: imm = {{12{instr[31]}},instr[19:12],instr[20],instr[30:25],instr[24:21],1'b0};	// JAL
		7'b0110011:	imm = 0;																		// R TYPE
		default   : imm = 0;
	endcase
end

endmodule
