module pipo(q,in,load,clk,rst);
output [3:0]q;
input load,clk,rst;
input [3:0]in;
reg [3:0]q;
always @ (posedge clk or posedge rst)
begin
if(rst)
q<=4'b0;
else if(load)
q<=in;
else
q<=q;
end
endmodule
