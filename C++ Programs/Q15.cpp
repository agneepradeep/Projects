/*
1. Create a class string that reads the string and its length.
Write a program to overload the operator < and > to compare two strings.
if s1< s2 then print "String s1 is smaller than String s2", if s2< s1 then print "String s2 is smaller than String s1"
otherwise print "Both the Strings s1 and s2 are Equal".
*/

#include <iostream>
#include <string>
using namespace std;

class STRING{
    protected:
        string S;
    public:
        friend bool operator <(STRING S1,STRING S2);
        friend bool operator >(STRING S1,STRING S2);
        friend bool operator ==(STRING S1,STRING S2);
        STRING(string S){
            this->S = S;
        };
};
bool operator <(STRING S1,STRING S2){
    if (S1.S<S2.S){
        return true;
    }
    else{
        return false;
    }
}

bool operator >(STRING S1,STRING S2){
    if (S1.S>S2.S){
        return  true;
    }
    else{
        return false;
    }
}

bool operator ==(STRING S1,STRING S2){
    if (S1.S == S2.S){
        return  true;
    }
    else{
        return false;
    }
}

int main(){
    STRING A("Agneepradeep Verma");
    STRING B("Karan Sharma");

    STRING C("CPP Programming");
    STRING D("CPP Programming");

    if (A < B){
        cout<<"String A is Smaller than String B"<<endl;
    }
    if (A > B){
        cout<<"String A is Greater than String B"<<endl;
    }
    if (C == D){
        cout<<"String A and String B are equal"<<endl;
    }
    return 0;
}