module test_paralle_input_serial_output;
  wire so;
  	reg load,clk,rst;
  reg [3:0]in;
  parallel_input_serial_output piso(so,in,load,clk,rst);
  always
  #5 clk=~clk;
  initial
    begin
  load=1;clk=0;rst=1;
  in=4'b1001;
  #10 rst=0;
  #10 load=0;
  	#40 load=1;in=4'b0011;
  #10 load=0;
  #50 $stop;
  	end
endmodule
