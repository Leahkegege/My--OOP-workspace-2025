#include <iostream>
using namespace std;

// Parent class
class Shape {
public:
    virtual void draw() { // Virtual function
        cout << "Drawing a shape..." << endl;
    }
};

// Derived class 1
class Triangle : public Shape {
public:
    void draw(){ // Polymorphism: overriding base method
        cout << "Drawing a triangle..." << endl;
    }
};

// Derived class 2
class Oval : public Shape {
public:
    void draw(){
        cout << "Drawing an oval..." << endl;
    }
};

int main() {
    Shape* shape; // Pointer to the base class
    Triangle triangle;
    Oval oval;

    // Polymorphism in action
    shape = &triangle;
    shape->draw(); // Calls Circle's implementation

    shape = &oval;    shape->draw(); // Calls Rectangle's implementation

    return 0;
}