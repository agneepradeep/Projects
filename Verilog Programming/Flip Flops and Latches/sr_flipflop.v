module sr_flipflop(s,r,clk,rst,q,qbar);
  input s,r,clk,rst;
  output reg q;
  output wire qbar;
  
  assign qbar = ~q;
  
  always @(posedge clk or posedge rst)
  begin
    if(rst)
      q = 1'b0;
    else if({s,r} == 2'b00)
      q = q;
    else if({s,r} == 2'b01)
      q = 1'b0; 
    else if({s,r} == 2'b10)
      q = 1'b1;
    else if({s,r} == 2'b11)
      q = 1'bx; 
  end
endmodule
