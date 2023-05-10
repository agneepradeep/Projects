/*5. Use hierarchical inheritance to implement a student database that will be composed of classes 
Student, UnderGraduate, and PostGraduate.
•	The base class ‘Student’ will have a data member Name, Id, and Age. Getstu() and
Putstu() methods will ask the user to enter the details of the student and display the
same.
•	 In a derived class, UnderGraduate will have the data member UGCourses to specify the
number of courses offered. GetUGCourses() and PetUGCourses() methods will ask
the user to enter the number of courses and display the same.
•	 In derived class, PostGraduate will have the data member PGCourses to specify the
number of courses offered. GetPGCourses() and PetPGCourses() methods will ask the
user to enter the number of courses and display the same.  (MODULE 6  - MODERATE)
*/

#include <iostream>
#include <string>
using namespace std;
class Student;
class UnderGraduate;
class PostGraduate;
class Student{
    protected:
        int Id;
        string Name;
    public:
        void Get_Info(){
            cout<<"Student Id :";
            cin>>Id;
            cout<<"Student Name :";
            cin.ignore();
            getline(cin,Name);
        }
        void Print_Info(){
            cout<<endl<<"Id :"<<Id<<endl;
            cout<<"Name :"<<Name<<endl;
        }
};
class UnderGraduate :protected Student{
    protected:
        int UGCourse;
    public:
        void GetUG(){
            Get_Info();
            cout<<"No of UG Courses Offered :";
            cin>>UGCourse;
        }
        void PutUG(){
            Print_Info();
            cout<<"UG Courses :"<<UGCourse<<endl;
        }
};
class PostGraduate :protected Student{
    protected:
        int PGCourse;
    public:
        void GetPG(){
            Get_Info();
            cout<<"No of PG Courses Offered :";
            cin>>PGCourse;
        }
        void PutPG(){
            Print_Info();
            cout<<"PG Courses :"<<PGCourse<<endl;
        }
};
int main(){
    UnderGraduate U;
    U.GetUG();
    U.PutUG();
    PostGraduate P;
    P.GetPG();
    P.PutPG();
    return 0;
}