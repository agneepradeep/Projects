/*Create a structure called employee that holds information like Employee Id and name
Create another structure called address which holds information like Door_Number,
Street_Name,City,and Pincode. Declare the Address structure inside the Employee Sturture.
Develop a C program to input basic salary of 50 employees and calculate their gross salary
according to the given conditions. Print the complete employee information and gross salary
[addition of DA HRA and basic salary] up to 2 decimal places. DA and HRA calculation is given
below:
da = basic_salary *(DA/100)
hra = basic_salary *(HRA/100)
Given the following HRA and DA percentages:
Basic Salary <= 10000 : HRA = 20% and DA = 80%
Basic Salary between 10000 to 20000 : HRA  = 25%, DA = 90%
Basic Salary >= 20000 :HRA = 30% and DA = 95%*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee{
    int Id;
    char Name[20];
    int Salary;
    int Gross_Salary;
    struct Address{
        int Pincode;
        char City[15];
        char Street_Name[15];
        int Door_Number;
    };
};
int main(){
    struct Employee E1;
    printf("%d",sizeof(E1));
    /*-------------------------------------------*/
    printf("Employee ID :");
    scanf("%d",&E1.Id);
    printf("Employee Name :");
    fflush(stdin);
    fgets(E1.Name,20,stdin);
    printf("Employee Salary :");
    scanf("%d",&E1.Salary);
    printf("Pincode :");
    fflush(stdin);
    scanf("%d",&E1.Pincode);
    printf("City Name :");
    fflush(stdin);
    fgets(E1.City,15,stdin);
    printf("Street Name :");
    fflush(stdin);
    fgets(E1.Street_Name,15,stdin);
    printf("Door Number :");
    fflush(stdin);
    scanf("%d",&E1.Door_Number);
    /*----------------------------------------------*/
    if (E1.Salary <= 10000){
        E1.Gross_Salary = E1.Salary + E1.Salary * 0.2 + E1.Salary * 0.8;
    }
    else if ((E1.Salary > 10000)&&(E1.Salary < 20000)){
        E1.Gross_Salary = E1.Salary + E1.Salary * 0.25 + E1.Salary * 0.9;
    }
    else if (E1.Salary >= 20000){
        E1.Gross_Salary = E1.Salary + E1.Salary * 0.3 + E1.Salary * 0.95;
    }
    /*-----------------------------------------------*/
    printf("ID :%d\n",E1.Id);
    printf("Name :%s\n",E1.Name);
    printf("Gross Salary :%d\n",E1.Gross_Salary);
    printf("Pincode :%d\n",E1.Pincode);
    printf("City Name :%s\n",E1.City);
    printf("Street Name :%d\n",E1.Street_Name);
    printf("Door Number :%d\n",E1.Door_Number);
    return 0;
}