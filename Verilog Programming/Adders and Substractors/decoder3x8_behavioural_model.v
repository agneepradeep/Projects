module decoder3x8_behavioural_model(enable,a,b,c,q);
  input enable,a,b,c;
  output reg [7:0] q;
  
  always @(enable,a,b,c)
  begin
    if(enable == 0)
      q = 8'b00000000;
    else
      begin
        if(a  == 0 && b == 0 && c == 0) q = 8'b00000001;
        else if(a == 0 && b == 0 && c == 1) q = 8'b00000010;
        else if(a == 0 && b == 1 && c == 0) q = 8'b00000100;
        else if(a == 0 && b == 1 && c == 1) q = 8'b00001000;
        else if(a == 1 && b == 0 && c == 0) q = 8'b00010000;
        else if(a == 1 && b == 0 && c == 1) q = 8'b00100000;
        else if(a == 1 && b == 1 && c == 0) q = 8'b01000000;
        else if(a == 1 && b == 1 && c == 1) q = 8'b10000000;
      end
  end
endmodule
