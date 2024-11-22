#include <iostream>
#include <string>

using namespace std;

int main() {
    string accountType, accountLevel;
    double balance, interestRate = 0.0;

    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;
    cout << "Enter account balance: ";
    cin >> balance;

    if (accountType == "Personal" && accountLevel == "Standard" && balance >= 0) interestRate = 1.2;
    else if (accountType == "Personal" && accountLevel == "Gold") 
        interestRate = (balance >= 5000) ? 2.3 : (balance >= 1000) ? 1.9 : 0.0;
    else if (accountType == "Business" && accountLevel == "Standard" && balance >= 1500) interestRate = 1.7;
    else if (accountType == "Business" && accountLevel == "Platinum" && balance >= 10000) interestRate = 2.5;

    cout << (interestRate > 0 
        ? "Interest rate: " + to_string(interestRate) + "%" 
        : "Invalid account details.") << endl;

    return 0;
}
