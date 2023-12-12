module test_serial_input_parallel_output;
  reg si,clk,rst;
  wire [3:0]q;
  
  serial_input_paralel_output sipo(si,q,clk,rst);
  
  always
  #5 clk = ~clk;
  initial begin
    si = 1;clk = 0;rst = 1;
    #10 rst = 0;
    #10 si = 1;
    #10 si = 0;
    #10 si = 0;
    #10 si = 1;
    #10 si = 1;
    #50 $stop;
  end
endmodule