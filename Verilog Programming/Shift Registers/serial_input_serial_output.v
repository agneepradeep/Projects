module serial_input_serial_output(si,so,clk,rst);
  input si,clk,rst;
  output wire so;
  reg [3:0]q;
  
  always @(posedge clk or posedge rst)
  begin
    if(rst)
      q = 4'b0000;
    else
      q = {si,q[3:1]};
  end
  assign so = q[0];
endmodule