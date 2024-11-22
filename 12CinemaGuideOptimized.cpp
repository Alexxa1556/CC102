#include <iostream>

using namespace std;

int main () {
	int age;
	double money;
	bool parent;
	cout << "Enter age: ";
	cin >> age;
	if (age < 13) {
		cout << "With Parent? ";
		cin >> parent;
		cout << (Parent? "PG & G" : "G") <<endl;	
    } else if (age < 16) {
        cout << "With Parent? ";
        cin >> parent;
        cout << (parent? "R, PG & G" : "PG & G") << endl;
    } else {
        cout << "G, PG & R." << endl;
    }
    cout << "Enter money: ";
    cin >> money;
		cout << "Not enough money." << endl;
    else if (money < 10.5)
        cout << "Can go to matinee show." << endl;
    else
        cout << "Can go to evening & matinee show" << endl;
		
    return 0;
}
