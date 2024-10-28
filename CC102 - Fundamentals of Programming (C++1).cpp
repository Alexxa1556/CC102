#include <iostream>

using namespace std;

int main ()
{
	double sugarPriceUSD,ricePricePound,sardinesPricePound;
	double coffeePriceUSD, milkPriceUSD;
	double ricePricePound,sardinasPricePound;
	double sugarQty, riceQty,sardinesQty,coffeeQty,milkQty;
	int USDtoPhp, POUNDtoPhp;
	
	cout << "Enter the price of sugar"
	cin >> sugarPriceUSD;
	cout << "Enter quanity of sugar";
	cin >> sugarQty;
	
	cout << "Enter the price of rice";
	cin >> ricePricePound;
	cout << "Enter quanity of rice";
	cin >> riceQty;
	
	cout << "Enter the price of sardines";
	cin >> sardinesPricePound;
	cout << "Enter quanity of sardines";
	cin << sardinesQty;
	
	cout << "Enter the price of coffee";
	cin >> coffeePriceUSD;
	cout << "Enter quantity of coffee";
	cin >> coffeeQty;
	
	cout << "Enter the price of milk";
	cin << milkPriceUSD;
	cout << "Enter quantity of milk";
	cin >> milkQty;

	cout << "Conversion Rates" <<endl;
	cout << "USD to PHP: ";
	cin >> USDtoPHP;
	cout <<"Pound to php: ";
	cin >> POUNDtoPhp;

	double totalSugarCost = sugarPrice * sugarQty * USDtoPhp;
	double totalRiceCost = ricePricePound * riceQty * POUNDtoPhp;
	double totalSardinesCost = sardinesPricePound * sardinesQty * POUNDtoPhp;
	double totalCoffeeCost = coffeePriceUSD * coffeeQty * USDtoPhp;
	double totalMilkCost = milkPriceUSD * milkQty * USDtoPhp;
	
	
	return 0;
	
}
