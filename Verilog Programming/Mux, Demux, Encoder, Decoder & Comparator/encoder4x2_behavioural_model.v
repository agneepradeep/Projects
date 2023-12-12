module encoder4x2_behavioural_model(enable,i,q);
  input [3:0] i,enable;
  output reg [1:0] q;
  
  always @(enable,i)
  begin
    if(enable == 1'b0)
      q = 2'bxx;
    else
      begin
        if(i == 4'b0001) q = 2'b00;
        else if(i == 4'b0010) q = 2'b01;
        else if(i == 4'b0100) q = 2'b10;
        else if(i == 4'b1000) q = 2'b11;
      end
  end
endmodule