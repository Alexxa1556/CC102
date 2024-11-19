#include <iostream>

using namespace std;

int main()
{
	int age;
	double money;
	biil withParent;

	cout << "Enter age: ";
	cin >> age;
	cout << "Enter amount of money: ";
	cin >> money;
	cout << "Are you with a aparent? (1 for yes, 0 for no): ";
	cin >> withParent;

    if (age < 13) {
        if (withParent) {
            cout << "Can go to G & PG show" << endl;
        } else {
            cout << "Can go to G show" << endl;
        }
    } else if (age < 16) {
        if (withParent) {
            cout << "Can go to G, PG & R show" << endl;
        } else {
            cout << "Can go to G & PG show" << endl;
        }
    } else {
        cout << "Can go to G, PG & R show" << endl;
    }

    if (money < 7.50) {
        cout << "Not enough money" << endl;
    } else {
        if (money < 10.50) {
            cout << "Can go to the matinee show" << endl;
        } else {
            cout << "Can go to the evening & matinee show" << endl;
        }
	    
    return 0;
}
