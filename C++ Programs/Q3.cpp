/*Create two classes DM and DB. 
DM stores the distance in meters and centimetres and DB Stores the distance in feet and inches.
Write a program to read the values for the class objects and 
Add one object DM with another object DB. Note: use a friend function to carry out the addition operation.
The resultant object is stored in DM and displayed it.
1 feet = 30 centimetres
1 inch =2.54 centimetres
1 meter = 100 centimetres     (MODULE 6  - EASY)
*/

#include <iostream>
using namespace std;
class DM;
class DB;
class DM{
    private:
        float Meter;
        float Centimeter;
        float TotalDistance;
    public:
        DM(float A,float B){
            Meter = A;
            Centimeter = B;
        }
        friend void AddDistance(DM,DB);
};
class DB{
    private:
        float Feet;
        float Inches;
    public:
    DB(float A,float B){
        Feet = A;
        Inches = B;
    }
        friend void AddDistance(DM,DB);
};

void AddDistance(DM A,DB B){
    A.TotalDistance = A.Meter + (A.Centimeter)*0.01 + (B.Feet)*0.3048 + (B.Inches)*0.0254;
    cout<<"Total Distance in meter :"<<A.TotalDistance<<endl;
}
int main(){
    DM d(12,34);
    DB c(12,4);
    AddDistance(d,c);
    return 0;
}