#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	cout << "Enter the temperature in degrees: ";
	cin >> temperature;
	
	if (temperature < 32) {
		cout << "Bring a heavy jacket." << endl;
	} else if (temperature >=32 && temperature <= 50) {
		cout << "Bring a light jacket\n";
	} else {
		cout << "No jacket needed." << endl;
	}
	return 0;
}