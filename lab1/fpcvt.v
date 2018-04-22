`timescale 1ns / 1ps

module fpcvt (
	D , // 12 bit vector input of the FPCVT
	S , // Sign bit as output
	E , // 3 bit Exponent
	F   // 4 bit Significand
	);  // End of port list

	input  [11:0] D;
	output S;
	output [2:0] E;
	output [3:0] F;
	
	wire [11:0] D_signMag;
	wire [2:0]  E_temp;
	wire [3:0]  F_temp;
	wire fifth_bit_temp;
	
	signMag u1(
		.signBit     (S),
		.D_in  		 (D),
		.signMag_out (D_signMag)
		);
	
	countLeadingZeros_andExtract u2 (
		.D_in        (D_signMag),
		.exponent    (E_temp),
		.significand (F_temp),
		.fifth_bit   (fifth_bit_temp)
		);
		
	rounding u3 (
		.exponent_in     (E_temp),
		.significand_in  (F_temp),
		.fifth_bit_in    (fifth_bit_temp),
		.exponent_out    (E),
		.significand_out (F)
		);

endmodule