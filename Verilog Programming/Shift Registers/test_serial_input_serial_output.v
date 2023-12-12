module test_serial_input_serial_output;
  reg si,clk,rst;
  wire so;
  
  serial_input_serial_output siso(si,so,clk,rst);
  
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
