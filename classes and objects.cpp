//A program to show the use of classes and objects
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/


 #include <iostream>
#include <string>
using namespace std;

class Car {
public:
    // Public data members
    string brand;
    string model;
    float price;
    int mileage;

    // Constructor to initialize data members
    Car(string b, string m, float p, int mil) : brand(b), model(m), price(p), mileage(mil) {}

    // Member function to display car details
    void display() {
        cout << "Brand: " << brand << "\n"
             << "Model: " << model << "\n"
             << "Price: $" << price << "\n"
			 << "Mileage: " << mileage << " miles" << std::endl;
    }

    // Member function to drive the car
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage: " << mileage << " miles" << std::endl;
    }
};

int main() {
    // Create a Car object with given details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display the car's details
    myCar.display();

    // Simulate driving the car for 150 miles
    cout << "\nDriving the car for 150 miles..." << std::endl;
    myCar.drive(150);

    // Simulate driving the car for 300 miles
    cout << "\nDriving the car for 300 miles..." << std::endl;
    myCar.drive(300);

    return 0;
}