/*7) Write a class named "Person" with a constructor that takes in a name and age as arguments. 
The constructor should initialize the object's name and age properties. 
Write a test case to verify that the constructor works correctly.*/

#include <iostream>
#include <string>
using namespace std;
 
class Person {
    protected:
        string Name;
        int Age;
    public:
        Person(string Name,int Age){
            this->Name = Name;
            this->Age = Age;
        }
        void PrintInfo(){
            cout<<endl<<"Candidate Name :"<<Name<<endl;
            cout<<"Candidate Age :"<<Age<<endl;
        }
};

int main(){
    Person P1("Agneepradeep Verma",20);
    Person P2("Abhishek Kumar",19);
    P1.PrintInfo();
    P2.PrintInfo();
    return 0;
}