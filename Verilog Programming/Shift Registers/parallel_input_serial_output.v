module parallel_input_serial_output(so,in,load,clk,rst);
output so;
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
q<={1'b0,q[3:1]};
end
assign so=q[0];
endmodule

