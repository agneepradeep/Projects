/*Write a code with Student as a base class, Mark as an intermediate class and Result as a
derived class.
•	The base class named Student with data members id, and name, and getstu() and
putstu() are the methods to read and display the id and name.
•	The intermediate class named Marks with data members m1, m2, m3 and getmarks()
and putmarks() are the methods to read and display the marks.
•	The derived class named Result with total, and average as a data member and show() as
•	the method to display the total and average marks.                          (MODULE 6 - EASY) 
*/

#include <iostream>
#include <string>
using namespace std;
class Student{
    protected:
        int Id;
        string Name;
    public:
        void Get_Student_Info(){
            cout<<"Student ID :";
            cin>>Id;
            cin.ignore();
            cout<<"Student Name :";
            getline(cin,Name);
            cout<<endl;
        }
        void Put_Student_Info(){
            cout<<"Student ID :"<<Id<<endl;
            cout<<"Student Name :"<<Name<<endl;
        }
};
class Marks{
    protected:
        int M1,M2,M3;
    public:
        void Get_Marks(){
            cout<<"Type 3 Subject Marks :"<<endl;
            cout<<"Subject - 1 :";
            cin>>M1;
            cout<<"Subject - 2 :";
            cin>>M2;
            cout<<"Subject - 3 :";
            cin>>M3;
            cout<<endl;
        }
        void Put_Marks(){
            cout<<"Subject - 1 Marks :"<<M1<<endl;
            cout<<"Subject - 2 Marks :"<<M2<<endl;
            cout<<"Subject - 3 Marks :"<<M3<<endl;
        }
};
class Result:public Student,public Marks{
    protected:
        int Total,Average;
    public:
        void Show(){
            Total = (M1 + M2 + M3);
            Average = Total/3.0;
            Put_Student_Info();
            Put_Marks();
            cout<<"Total Marks Acheived :"<<Total<<endl;
            cout<<"Average Marks Per Subject :"<<Average<<endl;
        }
};
int main(){
    Result S1;
    S1.Get_Student_Info();
    S1.Get_Marks();
    S1.Show();
    return 0;
}
