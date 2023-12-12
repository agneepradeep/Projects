module full_adder_using_multiplexer8x1;
  reg [2:0] s;
  wire sum,carry;
  reg [7:0] suminput = 8'b10010110;
  reg [7:0] carryinput = 8'b11101000;
  
  multiplexer8x1 m1(s,sum,suminput);
  multiplexer8x1 m2(s,carry,carryinput);
  
  initial
  begin
    s = 3'b000;
    #10 s = 3'b001;
    #10 s = 3'b010;
    #10 s = 3'b011;
    #10 s = 3'b100;
    #10 s = 3'b101;
    #10 s = 3'b110;
    #10 s = 3'b111;
    #10 $stop;
  end
endmodule
