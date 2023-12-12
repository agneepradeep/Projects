module full_substractor_using_demultiplexer1x8;
  reg i = 1'b1;
  reg [2:0] s;
  wire [7:0] y;
  wire difference,borrow;
  
  demultiplexer8x1 d1(i,s,y);
  assign difference = y[1] | y[2] | y[4] | y[7];
  assign borrow = y[1] | y[2] | y[3] | y[7];
  
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
