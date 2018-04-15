`timescale 1ns / 1ps

module fpcvt(D, S, E, F);

input [11:0] 	D;
output 			S;
output [2:0]	E;
output [3:0] 	F;

integer i;

reg [11:0]		sign_mag;
reg 				S;
reg [2:0]		E;
reg [3:0]		F;
reg				break_always;

always @(D) begin
	// initialize values
	E <= 3'b000;
	F <= 4'b0000;
	
	break_always <= 1'b0;
	S <= D[11];
	

	if (D[11] == 1'b1) begin							// Negative Integers
		for (i = 0; i < 11; i = i+1) begin
			sign_mag[i] <= ~D[i];
		end
		
		sign_mag <= sign_mag + 1;
		if (D[11] == 1'b1) begin						// Negative Overflow Edge Case (-2048)
			E <= 3'b111;
			F <= 4'b1111;
			break_always <= 1'b1;
		end
		
		sign_mag[11] <= 1'b1;
	end else begin								// Positive Integers
		sign_mag <= D;
	end
	
	
	
	
	
		
	
	
	
	
end
	
	
	
	

	


endmodule

