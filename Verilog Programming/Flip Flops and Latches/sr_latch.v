module sr_latch(s,r,q,qbar);
  input s,r;
  output reg q;
  output wire qbar;
  
  assign qbar = ~q;
  
  always @(s,r)
  begin
    if(s == 1'b0 && r == 1'b0) q = q;
    else if(s == 1'b0 && r == 1'b1) q = 1'b0;
    else if(s == 1'b1 && r == 1'b0) q = 1'b1;
    else if(s == 1'b1 && r == 1'b1) q = 1'bx;
  end
  initial
  q = 1'b1;
endmodule
