//A program to determine eligibility of voters using age
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;

    // Prompt user to enter their name
    cout << "Enter your name: ";
    getline(cin, name); // Read the entire line including spaces

    // Prompt user to enter their age
    cout << "Enter your age: ";
    cin >> age; // Read the age as an integer

    // Check if the user is eligible to vote
    if (age >= 18) {
        cout << "Hello, " << name << "! You are eligible to vote." << endl;
    } else {
        cout << "Sorry, " << name << ". You are not eligible to vote." << endl;
    }

    return 0; // Indicate successful execution
}