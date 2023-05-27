/*Write a program that uses an inline function to calculate the area of a circle. 
The function should take in the radius as a parameter and return the area.
Test the function with the different values.*/
#include <iostream>
using namespace std;

inline double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
