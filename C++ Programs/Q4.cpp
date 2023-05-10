/*4. Write a C++ program to read and print employee salary details using multilevel
inheritance.
a. Create a class named employee to get and print the employee details like employee number, name, and designation.
b. Create a derived class named salary which derives the class employee in private mode, to get the employee complete information including employee number, name, designation, basic pay, hra, da, pf and to display the complete employee information including the net pay.
c. Create a derived class bank_details which derives the class salary in private mode to get the complete employee details including his bank name, and account number, and to display the complete employee details like empno, name, designation, bp, hra, da, pf, net pay, account number.
d. Create an appropriate main method for the same.                            (MODULE 6  - MODERATE)
*/

#include <iostream>
#include <string>
using namespace std;
class Employee;
class Salary;
class Bank_Details;
class Employee{
    protected:
        int Id;
        string Name;
        string Designation;
    public:
        void Get_Info(){
            cout<<"ID :";
            cin>>Id;
            cout<<"Name :";
            cin.ignore();
            getline(cin,Name);
            cout<<"Designation :";
            cin.ignore();
            getline(cin,Designation);
        }
        void Print_Info(){
            cout<<endl<<"Id :"<<Id<<endl;
            cout<<"Name :"<<Name<<endl;
            cout<<"Designation :"<<Designation<<endl;
        }
};
class Salary : private Employee{
    protected:
        int House_Rent_Allowance,Dearness_Allowance,Provident_Fund,Basic_Pay;
    public:
        void Get_Salary_Info(){
            cout<<"Salary :";
            cin>>Basic_Pay;
            House_Rent_Allowance = Basic_Pay*0.1;
            Dearness_Allowance = Basic_Pay*0.15;
            Provident_Fund = Basic_Pay*0.12;
        }
        void Print_Salary_Info(){
            cout<<"Salary :"<<Basic_Pay<<endl;
            cout<<"HRA :"<<House_Rent_Allowance<<endl;
            cout<<"DA :"<<Dearness_Allowance<<endl;
            cout<<"PF :"<<Provident_Fund<<endl;
            cout<<"Gross Salary :"<<(Basic_Pay + House_Rent_Allowance + Dearness_Allowance)<<endl;
            cout<<"Net Salary :"<<(Basic_Pay + House_Rent_Allowance + Dearness_Allowance - Provident_Fund)<<endl;
        }
        friend Bank_Details;
};
class Bank_Details : private Salary{
    protected:
        int Account_Number;
        string Bank_Name;
    public:
        void Get_Overall_Info(){
            Get_Info();
            Get_Salary_Info();
            cout<<"Account Number :";
            cin>>Account_Number;
            cout<<"Bank Name :";
            cin.ignore();
            getline(cin,Bank_Name);
        }
        void Print_Overall_Info(){
            Print_Info();
            Print_Salary_Info();
            cout<<"Account Number :"<<Account_Number<<endl;
            cout<<"Bank Name :"<<Bank_Name<<endl;
        }
};
int main(){
    Bank_Details B;
    B.Get_Overall_Info();;
    B.Print_Overall_Info();
    return 0;
}