//A program showing encapsulation.
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/
   
#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolder;
        double balance;

    public:
        // Setter method for balance
        void setBalance(double bal) {
            balance = bal;
        }

        // Getter method for balance
        double getBalance() {
            return balance;
        }

        // Setter method for account holder
        void setAccountHolder(string h) {
            accountHolder = h;
        }

        // Getter method for account holder
        string getAccountHolder() {
            return accountHolder;
        }
};

int main() {
    BankAccount b1;
    b1.setBalance(70000);
    b1.setAccountHolder("Lisa Brown");

    cout << "Account Balance: $" << b1.getBalance() << endl;
    cout << "Account Holder: " << b1.getAccountHolder() << endl;

    return 0;
}
