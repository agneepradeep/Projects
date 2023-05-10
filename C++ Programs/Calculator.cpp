#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator{
    public:
        void Add(int A,int B){
            cout<<"Addition Result :"<<(A+B)<<endl;
        }
        void Substract(int A,int B){
            cout<<"Substraction Result :"<<(A-B)<<endl;
        }
        void Multiply(int A,int B){
            cout<<"Multiplication Result :"<<(A*B)<<endl;
        }
        void Divide(int A,int B){
            cout<<"Divide Result :"<<float(A)/B<<endl;
        }
};
class ScientificCalculator{
    public:
        void Power(int A,int B){
            cout<<"Exponent Result :"<<int(pow(float(A),float(B)))<<endl;
        }
        void TrigoFunction(float A){
            cout<<"Sin() :"<<sin(A)<<endl;
            cout<<"Cos() :"<<cos(A)<<endl;
            cout<<"Tan() :"<<tan(A)<<endl;
        }
        void Log(int Num){
            cout<<"Logarithm(Base-e) Value :"<<log(Num)<<endl;
            cout<<"Logarithm(Base-10) Value :"<<log10(Num)<<endl;
            cout<<"Logarithm(Base-2) Value :"<<log2(Num)<<endl;
        }
        void SquareRoot(int A){
            cout<<"Square Root Value :"<<float(sqrt(float(A)))<<endl;
        }
};
class HybridCalculator : public SimpleCalculator,public ScientificCalculator{};

int main(){
    HybridCalculator H;
    H.Add(1,2);
    H.Power(6,3);
    H.Divide(2,12);
    H.Log(20);
    H.TrigoFunction(3.14159265359/6);
    return 0;
}
