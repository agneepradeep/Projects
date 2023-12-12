module test_d_flipflop;
  reg d,clk,rst;
  wire q, qbar;
  
  d_flipflop d1(d,clk,rst,q,qbar);
  
  always
  #5 clk = ~clk;
  initial
  begin
    d = 1;clk = 0;rst = 1;
    #10 rst = 0;
    #10 d = 0;
    #10 d = 1;
    #10 $stop;
  end
endmodule
