//A program to show the use of inheritance
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

// Derived class
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    // Constructor
    LibraryMember(string n, int id, int borrowed) {
        name = n;
        memberID = id;
        booksBorrowed = borrowed;
    }
    int getMemberID() {
        return memberID;
    }
    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Another derived class
class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    // Constructor
    PremiumMember(string n, int id, int borrowed, double fee) 
    : LibraryMember(n, id, borrowed) {
        membershipFee = fee;
    }
    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating objects
    LibraryMember member("Sarange Kegege", 100, 3);
    PremiumMember premium("Grace Nyaboke", 202,5 , 50.0);

    // Displaying details
    cout << "Library Member: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;

    cout << "\nPremium Member: " << premium.getName() << endl;
    cout << "Member ID: " << premium.getMemberID() << endl;
    cout << "Books Borrowed: " << premium.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << premium.getMembershipFee() << endl;

    return 0;
}