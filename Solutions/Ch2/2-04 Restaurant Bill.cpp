/*
Project			: Restaurant Bill
Author			: Mohammad Al-Husseini
Description		: Computes the tax and tip on a restaurant bill.
Known Values	: Meal Charge is $44.50
				  Tax Rate is 6.75%
				  Tip Rate is 15% after tax
Display			: Meal Cost, Tax Amount, Tip Amount, and Total Bill
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Known Values
	double mealPrice = 44.50;
	double taxRate   = 0.0675;
	double tipRate   = 0.15;

	// Calculate the charges
	double tax = mealPrice * taxRate;
	double tip = (mealPrice + tax) * tipRate;

	// Display the results
	cout << "-----Receipt-----" << endl;
	cout << "Meal  : $" << mealPrice << endl;
	cout << "Tax   : $" << tax << endl;
	cout << "Tip   : $" << tip << endl;
	cout << "Total : $" << mealPrice + tax + tip;

	// Note that the decimals are not to two places, as money should be. 
	// You will learn to format these values soon.

	return 0;
}
