//A program to calculate the volume of a cylinder.

/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/


#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double volumeOfCylinder(double radius, double height) {
    return PI * std::pow(radius, 2) * height;
}

int main() {
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    double volume = volumeOfCylinder(radius, height);

    cout << "The volume of the cylinder is: " << volume << std::endl;

    return 0;
}
