//A program to determine fine for overdue library books

/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/


#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate the fine based on days overdue
double calculateFine(int daysOverdue) {
    if (daysOverdue <= 7) {
        return daysOverdue * 20; // Ksh. 20 per day for up to 7 days
    } else if (daysOverdue <= 14) {
        return (7 * 20) + ((daysOverdue - 7) * 50); // Ksh. 50 per day for 8-14 days
    } else {
        return (7 * 20) + (7 * 50) + ((daysOverdue - 14) * 100); // Ksh. 100 per day for 15 days or more
    }
}

int main() {
    int bookID;
    int dueDate, returnDate;

    // Taking inputs from the user
    cout << "Enter the Book ID: ";
    cin >> bookID;

    cout << "Enter the Due Date (as an integer, e.g., 20220123 for January 23, 2022): ";
    cin >> dueDate;

    cout << "Enter the Return Date (as an integer, e.g., 20220130 for January 30, 2022): ";
    cin >> returnDate;

    // Assuming the dates are entered as the number of days since a reference date
    int daysOverdue = returnDate - dueDate;

    // Check if book is overdue
    if (daysOverdue > 0) {
        double fineAmount = calculateFine(daysOverdue);

        cout<< "\n--- Fine Details ---\n";
        cout << "Book ID: " << bookID << "\n";
        cout << "Due Date: " << dueDate << "\n";
        cout << "Return Date: " << returnDate << "\n";
        cout << "Days Overdue: " << daysOverdue << "\n";
        cout << std::fixed << std::setprecision(2);
        cout << "Fine Amount: Ksh. " << fineAmount << "\n";
    } else {
        cout << "No fine. The book is returned on time.\n";
    }

    return 0;
}