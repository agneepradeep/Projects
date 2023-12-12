module test_multiplexer4x1;
  reg [1:0] s;
  wire y;
  
  multiplexer4x1 m1(s,y);
  initial
  begin
    s = 2'b00;
    #10 s = 2'b01;
    #10 s = 2'b10;
    #10 s = 2'b11;
    #10 $stop;
  end
endmodule