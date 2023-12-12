module tff (t,clk,rst,q,qbar);
input t,clk,rst;
output q,qbar;
reg q;
wire qbar;
assign qbar = ~q;
always @ (posedge clk or posedge rst)
begin
if (rst)
q<=1'b0;
else if (t)
q <= ~q;
else
q <= q;
end
endmodule
