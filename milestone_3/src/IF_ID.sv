module IF_ID (
    input logic i_clk, i_rst_n, 
    input logic [31:0] instr,
    input logic [31:0] pcF, pc_nxtF,
    input logic stallD, flushD,

    output logic [31:0] pcD, pc_nxtD,
    output logic [31:0] instrD
);

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if (!i_rst_n || flushD) begin
        pcD <= 0;
        pc_nxtD <= 0;
        instrD <= 0;
    end else if (stallD) begin
        pcD <= pcD;
        pc_nxtD <= pc_nxtD;
        instrD <= instrD;
    end else begin
        pcD <= pcF;
        pc_nxtD <= pc_nxtF;
        instrD <= instr;
    end
end
    
endmodule
