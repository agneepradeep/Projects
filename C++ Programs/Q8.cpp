/*5) A car rental company wants to keep track of its fleet of cars. Each car has a make, model, year, and rental price. 
The company wants to be able to calculate the total rental price of all its cars and also find the car with the highest rental price. 
Design a program using OOPs and the "this" pointer to implement this scenario. 
Create a new car object and verify that all the attributes are set correctly using the "this" pointer.  */

#include <iostream>
#include <string>
using namespace std;

class Car{
    protected:
        string Brand;
        string Model;
        int Year;
        float RentalPrice;
    public:
        Car(string Brand,string Model,int Year,float RentalPrice){
            this->Brand = Brand;
            this->Model = Model;
            this->Year = Year;
            this->RentalPrice = RentalPrice;
        }
        friend void RentalPriceCalcSum(Car,Car,Car);
};

void RentalPriceCalcSum(Car C1,Car C2,Car C3){
    int TotalRentalPrice;
    TotalRentalPrice = C1.RentalPrice + C2.RentalPrice + C3.RentalPrice;
    if ((C1.RentalPrice > C2.RentalPrice)&&(C1.RentalPrice > C3.RentalPrice)){
        cout<<endl<<"Car Brand :"<<C1.Brand<<endl;
        cout<<"Car Model :"<<C1.Model<<endl;
        cout<<"Car Year :"<<C1.Year<<endl;
        cout<<"Highest Rental Price :"<<C1.RentalPrice<<endl; 
    }
    else if ((C2.RentalPrice > C1.RentalPrice)&&(C2.RentalPrice > C3.RentalPrice)){
        cout<<endl<<"Car Brand :"<<C2.Brand<<endl;
        cout<<"Car Model :"<<C2.Model<<endl;
        cout<<"Car Year :"<<C2.Year<<endl;
        cout<<"Highest Rental Price :"<<C2.RentalPrice<<endl; 
    }
    else{
        cout<<endl<<"Car Brand :"<<C3.Brand<<endl;
        cout<<"Car Model :"<<C3.Model<<endl;
        cout<<"Car Year :"<<C3.Year<<endl;
        cout<<"Highest Rental Price :"<<C3.RentalPrice<<endl; 
    }
    cout<<"Total Rental Price of all Car(Same Brand):"<<TotalRentalPrice<<endl;
}

int main(){
    Car A1("Mercedez-Benz","AMG-12",2014,10100.00);
    Car A2("Mercedez-Benz","ETQ-15",2018,24850.00);
    Car A3("Mercedez-Benz","MLW-17",2023,36550.00);
    RentalPriceCalcSum(A1,A2,A3);
    return 0;
}