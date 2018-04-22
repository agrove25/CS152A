`timescale 1ns / 1ps

module rounding(
   exponent_in,
	significand_in,
	fifth_bit_in,
	exponent_out,
	significand_out
	);

	input [2:0] exponent_in;
	input [3:0] significand_in;
	input fifth_bit_in;
	output reg [2:0] exponent_out;
	output reg [3:0] significand_out;
	
	always @ (*) begin
		if (fifth_bit_in == 1'b1) begin
			if (significand_in == 4'b1111) begin
				if (exponent_in == 3'b111) begin
					exponent_out    = exponent_in;
					significand_out = significand_in;
				end else begin
					exponent_out    = exponent_in + 1'b1;
					significand_out = 4'b1000;
				end
			end else begin
				exponent_out = exponent_in;
				significand_out = significand_in + 1'b1;
			end
		end else begin
			exponent_out    = exponent_in;
			significand_out = significand_in;
		end
	end

endmodule