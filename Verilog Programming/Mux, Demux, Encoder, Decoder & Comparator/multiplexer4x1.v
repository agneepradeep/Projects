module multiplexer4x1(s,y);
  input [1:0] s;
  output reg y;
  reg a = 1'b1;
  reg b = 1'b0;
  reg c = 1'b0;
  reg d = 1'b1;
  
  always @(s)
  begin
    if(s == 2'b00) y = a;
    else if(s == 2'b01) y = b;
    else if(s == 2'b10) y = c;
    else if(s == 2'b11) y = d;
  end
endmodule