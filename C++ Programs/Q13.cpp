/*3. Write a Program to read an odd number N,
overload the Prefix ++ increment operator and Prefix -- decrement operator.*/

#include <iostream>
using namespace std;

class ODD{
    public:
        int i;
        ODD(int i){
            this->i = i;
        }
        int operator ++(){
            this->i = this->i + 1;
            return i;
        }
        int operator --(){
            this->i = this->i - 1;
            return i;
        }
};

int main(){
    ODD O1(5);
    cout<<"Prefix Increment :"<<(++O1)<<endl;
    cout<<"Prefix Decrement :"<<(--O1)<<endl;
    return 0;
}