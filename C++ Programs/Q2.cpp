/*Create a parent class named ‘Courier’ with the following:
1.	Data members CourierID, Name_of_Courier.
2.	Method named PrintBill() to accept the Base_fare of type double as parameter and display the CourierID, Name_of_Courier ,
    and Shipping_Cost, where Shipping_Cost = Base_fare + 30.
•	Create a subclass names ‘Internatial_services’ which inherits from the Courier class. The class include the following:
1.	Data members Destination, Weight.
2.	Method named FinalBill()to print the CourierID, Name_of_Courier, Destination, Weight and Total_ ShippingCost, 
    where Total_ShippingCost = Base_fare * Weight. Print the message “More Sale” when Total_ShippingCost is more than 100, otherwise print the message “Less Sale”.
    (MODULE 6  - EASY)
*/

#include <iostream>
#include <string>
using namespace std;
class Courier{
    protected:
        int Id;
        string Name;
        double Base_fare;
    public:
        void GetBill(){
            cout<<"Courier Id :";
            cin>>Id;
            cout<<"Courier Name :";
            cin.ignore();
            getline(cin,Name);
            cout<<"Base Fare :";
            cin>>Base_fare;
        }
        void PrintBill(){
            cout<<endl;
            cout<<"Courier ID :"<<Id<<endl;
            cout<<"Courier Name :"<<Name<<endl;
            cout<<"Shipping Cost :"<<(Base_fare + 30)<<endl;
        }
};
class International_services : public Courier{
    protected:
        int Weight;
        int Total_Shipping_Cost;
    public:
        void GetFinalBill(){
            cout<<"Product Weight(KG) :";
            cin>>Weight;
            Total_Shipping_Cost = Base_fare*Weight;
        }
        void FinalBill(){
            PrintBill();
            cout<<"Total Shipping Cost :"<<Total_Shipping_Cost<<endl;
            if (Total_Shipping_Cost > 100){
                cout<<"More Sale"<<endl;
            }
            else{
                cout<<"Less Sale"<<endl;
            }
        }
};
int main(){
    International_services I;
    I.GetBill();
    I.GetFinalBill();
    I.FinalBill();
    return 0;
}
