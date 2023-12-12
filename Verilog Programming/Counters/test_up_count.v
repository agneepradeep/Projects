module test_up_count;
  wire [3:0] q;
  reg clk,rst;
  up_count u1(q,clk,rst);
  always
  #5 clk = ~clk;
  
  initial
  begin
    clk = 0;rst = 1;
    #10 rst = 0;
    
    #150 $stop;
  end
endmodule
