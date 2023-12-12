module ring_counter_test;
wire [3:0]q;
reg clk,rst;
ring_counter r1(q,clk,rst);
always
#5 clk=~clk;
initial
begin
clk=0;rst=1;
#10 rst=0;
#200 $stop;
end
endmodule
