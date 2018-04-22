`timescale 1ns / 1ps

module countLeadingZeros_andExtract(
	D_in,
	exponent,
	significand,
	fifth_bit
   );

	input      [11:0] D_in;
	output reg [2:0] exponent;
	output reg [3:0] significand;
	output reg fifth_bit;
	
	always @ (*) begin
		if (D_in[11] == 1) begin
			exponent    = 3'b111;
			significand = 4'b1111;
			fifth_bit   = 1'b1;
		end else if (D_in[10] == 1) begin
			exponent    = 3'b111;
			significand = D_in[10:7];
			fifth_bit   = D_in[6];
		end else if (D_in[9]  == 1) begin
			exponent    = 3'b110;
			significand = D_in[9:6];
			fifth_bit   = D_in[5];
		end else if (D_in[8]  == 1) begin
			exponent    = 3'b101;
			significand = D_in[8:5];
			fifth_bit   = D_in[4];
		end else if (D_in[7]  == 1) begin
			exponent    = 3'b100;
			significand = D_in[7:4];
			fifth_bit   = D_in[3];
		end else if (D_in[6]  == 1) begin
			exponent    = 3'b011;
			significand = D_in[6:3];
			fifth_bit   = D_in[2];
		end else if (D_in[5]  == 1) begin
			exponent    = 3'b010;
			significand = D_in[5:2];
			fifth_bit   = D_in[1];
		end else if (D_in[4]  == 1) begin
			exponent    = 3'b001;
			significand = D_in[4:1];
			fifth_bit   = D_in[0];
		end else begin
			exponent    = 3'b000;
			significand = D_in[3:0];
			fifth_bit   = 1'b0;
		end
	end

endmodule