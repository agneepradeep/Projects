module test_multiplexer8x1;
  reg [2:0] s;
  reg [7:0] i = 8'b10111001;
  wire y;
  
  multiplexer8x1 m1(s,y,i);
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
