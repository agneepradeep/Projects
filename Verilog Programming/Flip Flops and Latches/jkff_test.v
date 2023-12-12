module jkff_test;
reg j,k,clk,rst;
wire q,qbar;
jkff jk(j,k,clk,rst,q,qbar);
always
#5 clk=~clk;
initial
begin
j=0;k=0;clk=0;rst=1;
#10 rst=0;
#10 k=0;j=1;
#10 k=1;j=0;
#10 k=1;j=1;
#50 $stop;
end
endmodule
