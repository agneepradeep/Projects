module test_demultiplexer1x4;
  reg i = 1'b1;
  reg [1:0] s;
  wire [3:0] y;
  
  demultiplexer1x4 d1(i,s,y);
  initial
  begin
    s = 2'b00;
    #10 s = 2'b01;
    #10 s = 2'b10;
    #10 s = 2'b11;
    #10 $stop;
  end
endmodule
