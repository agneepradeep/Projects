module down_count(q,clk,rst);
  output [3:0] q;
  input clk,rst;
  reg [3:0] q;
  
  always @(posedge clk or posedge rst)
  begin
    if(rst)
      q = 4'b1111;
    else
      q = q-1;
  end
endmodule
