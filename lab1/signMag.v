`timescale 1ns / 1ps

module signMag(
	signBit,
	D_in,
	signMag_out
   );

	output reg signBit;
	input      [11:0] D_in;
	output reg [11:0] signMag_out;
	
	always @ (*) begin
		signBit = D_in[11];
		
		if (D_in[11] == 0) begin
			signMag_out = D_in;
		end else begin
			signMag_out = ~D_in + 1'b1;
		end
	end

endmodule