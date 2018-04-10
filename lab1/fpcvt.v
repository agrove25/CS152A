`timescale 1ns / 1ps

module fpcvt(D, S, E, F);

input [11:0] 	D;
output			S;
output [2:0]	E;
output [3:0] 	F;

reg [11:0]		sign_mag;
reg				S;

always @(D)
	S <= D[0];		

	


endmodule
