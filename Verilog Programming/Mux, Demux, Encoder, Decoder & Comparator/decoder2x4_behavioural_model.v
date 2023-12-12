module decoder2x4_behavioural_model(enable,a,b,q);
  input enable,a,b;
  output reg [3:0]q;
  always @(a or b or enable)
  begin
    if(enable == 0)
      q = 4'b0000;
    else
      begin
        if(a == 0 && b == 0)
          q = 4'b0001;
        else if(a == 0 && b == 1)
          q = 4'b0010;
        else if(a == 1 && b == 0)
          q = 4'b0100;
        else if(a == 1 && b == 1)
          q = 4'b1000;
      end
  end
endmodule
