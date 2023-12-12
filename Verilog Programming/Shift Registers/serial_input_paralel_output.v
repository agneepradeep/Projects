module serial_input_paralel_output(si,q,clk,rst);
  output [3:0] q;
  input si,clk,rst;
  reg [3:0] q;
  
  always @ (posedge clk or posedge rst)
  begin
  if(rst)
    q<=4'b0;
  else
    q<={si,q[3:1]};
  end
endmodule
