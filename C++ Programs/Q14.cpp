/*
4. In your main(), declare two Point objects that are initialized by the default constructor. 
Prompt user inputs as shown in the test case and save the user inputs with your overloaded >> operator. 
And display the x and y coordinates of the user inputs with your overloaded << operator as shown in the test case.
*/

#include <iostream>
using namespace std;
class Coordinate{
    protected:
        int X;
        int Y;
    public:
        Coordinate(){
            X = 0;
            Y = 0;
        }
        friend istream& operator >>(istream& cin,Coordinate& C1){
            cout<<"Enter x and y coordinates for, separated by a space:";
            cin>>C1.X>>C1.Y;
            return cin;
        };
        friend ostream& operator <<(ostream& cout,Coordinate& C1){
            cout<<"Point is at ("<<C1.X<<","<<C1.Y<<")"<<endl;
            return cout;
        }
};

int main(){
    Coordinate C1;
    cin >> C1;
    cout << C1;
}