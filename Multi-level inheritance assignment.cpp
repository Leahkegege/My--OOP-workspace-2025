#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Reptile : public Animal {
public:
    void breathe() {
        cout << "This reptile breathes oxygen." << endl;
    }
};

// Derived class 2 (from Reptile)
class Crocodile : public Reptile {
public:
    void layEggs() {
        cout << "This crocodile lays eggs." << endl;
    }
};

int main() {
    Crocodile crocodile;

    // Multilevel inheritance in action
    crocodile.eat();       // Inherited from Animal
    crocodile.breathe();   // Inherited from Reptile
    crocodile.layEggs();   // Specific to Crocodile

    return 0;
}