//A program to show the use of structures//
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/

#include <iostream>
using namespace std;

// Defining the Customer structure

struct Customer {
    string name;
    double accountBalance;
    string lastTransaction;
};

// Function to display customer details

void displayCustomer(const Customer& c) {
    cout << "Customer Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
    cout << "----------------------------" << endl;
}

int main() {
    Customer customer1, customer2;

    // Input details for the first customer
   
    cout << "Enter details for the first customer:\n";
    cout << "Name: ";
    getline(cin, customer1.name);
    cout << "Account Balance: ";
    cin >> customer1.accountBalance;
    cin.ignore(); // To clear the newline character left in the buffer
    cout << "Last Transaction: ";
    getline(cin, customer1.lastTransaction);

    // Input details for the second customer
   
    cout << "\nEnter details for the second customer:\n";
    cout << "Name: ";
    getline(cin, customer2.name);
    cout << "Account Balance: ";
    cin >> customer2.accountBalance;
    cin.ignore();
    cout << "Last Transaction: ";
    getline(cin, customer2.lastTransaction);

    // Display the customer details
   
    cout << "\nDisplaying Customer Details:\n";
    displayCustomer(customer1);
    displayCustomer(customer2);

    return 0;
}

