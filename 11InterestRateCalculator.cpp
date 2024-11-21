#include <iostream>

#include <string>

using namespace std;

int main() {
    // Declare variables
    string accountType, accountLevel;
    double balance, interestRate = 0.0;

    // User input
    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;
    cout << "Enter account balance: ";
    cin >> balance;

    // Determine interest rate based on conditions
    if (accountType == "Personal") {
        if (accountLevel == "Standard" && balance >= 0) {
            interestRate = 1.2;
        } else if (accountLevel == "Gold") {
            if (balance >= 1000 && balance < 5000) {
                interestRate = 1.9;
            } else if (balance >= 5000) {
                interestRate = 2.3;
            }
        }
    } else if (accountType == "Business") {
        if (accountLevel == "Standard" && balance >= 1500) {
            interestRate = 1.7;
        } else if (accountLevel == "Platinum" && balance >= 10000) {
            interestRate = 2.5;
        }
    }

    // Display result
    if (interestRate > 0) {
        cout << "The interest rate for your account is: " << interestRate << "%" << endl;
    } else {
        cout << "No interest rate applies to your account based on the provided details." << endl;
    }

    return 0;
}