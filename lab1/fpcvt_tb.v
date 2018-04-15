`timescale 1ns / 1ps

module fpcvt_tb;

        // Inputs
        reg [11:0] D;

        // Outputs
        wire S;
        wire [2:0] E;
        wire [3:0] F;

        // Instantiate the Unit Under Test (UUT)
        fpcvt uut (
                .D(D), 
                .S(S), 
                .E(E), 
                .F(F)
        );

        initial begin
                // Initialize Inputs
                D = 0;

                // Wait 100 ns for global reset to finish
                #100;

                // Add stimulus here

	//simple testcase
        D = 12'b000000000001; #5;
    if ( (S == 1'b0) && (E == 3'b000) && (F == 4'b0000))     
    $display ("Result is correct1!");
    else begin 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00000000");
    end

	//simple positive testcase
        D = 12'b000000111100; #5;
    if ( (S == 1'b0) && (E == 3'b010) && (F == 4'b1111))     
    $display ("Result is correct2!");
    else begin 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00101111");
    end

//simple negative testcase
        D = 12'b100110111111; #5;
    if ( (S == 1'b1) && (E == 3'b111) && (F == 4'b1101))     
    $display ("Result is correct3!");
    else begin 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 11111101");
    end
	 
    //-2048 overflow
	 D = 12'b100000000000; #5;
    if ( (S == 1'b1) && (E == 3'b111) && (F == 4'b1111))
        $display ("Result is correct4!");
    else begin 
 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 11111111");
    end
	 
	 //2048 overflow
	 D = 12'b011111111111; #5;
    if ( (S == 1'b0) && (E == 3'b111) && (F == 4'b1111))
        $display ("Result is correct5!");
    else begin 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 01111111");
    end

    //125 overflow
    D = 12'b000001111101; #5;
    if ( (S == 1'b0) && (E == 3'b100) && (F == 4'b1000)) 
       $display ("Result is correct6!");
    else begin 

    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 01001000");
    end


        D = 12'b000001110000; #5;
    if ( (S == 1'b0) && (E == 3'b011) && (F == 4'b0111))
	   $display ("Result is correct7!");
    else begin 

    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00110111");
    end

    //Rounding

    D = 12'b000000101100; #5; 
    if ( (S == 1'b0) && (E == 3'b010) && (F == 4'b1101))
	   $display ("Result is correct8!");
    else begin 
 
    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00101101");
    end

        D = 12'b000000101101; #5;
    if ( (S == 1'b0) && (E == 3'b010) && (F == 4'b1101)) 
	 $display ("Result is correct9!");
    else begin 

    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00101101");
    end

    D = 12'b000000101110; #5;
    if ( (S == 1'b0) && (E == 3'b010) && (F == 4'b1100))  $display ("Result is correct10!");
    else begin 

    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00101100");
    end

    D = 12'b000000101111; #5;
    if ( (S == 1'b0) && (E == 3'b010) && (F == 4'b1100))  $display ("Result is correct11!");
    else begin 

    $display (" S is: %b",S);
    $display (" E is: %b",E);
    $display (" F is: %b",F);
	 $display (" Expects: 00101100");
    end

    end

endmodule
