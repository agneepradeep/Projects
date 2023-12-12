module full_substractor_using_multiplexer8x1;
  reg [2:0] s;
  wire difference,borrow;
  reg [7:0] differenceinput = 8'b10010110;
  reg [7:0] borrowinput = 8'b10001110;
  
  multiplexer8x1 m1(s,difference,differenceinput);
  multiplexer8x1 m2(s,borrow,borrowinput);
  
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
