/*
Project			: Total Purchase
Author			: Mohammad Al-Husseini
Description		: Computes the purchase of five items.
Known Values	: Prices are 12.95, 24.95, 6.95, 14.95, and 3.95
				  Sales tax is 6%
Display			: Each item's price, the subtotal, sales tax, and total.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Known Values
	double item1 = 12.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 14.95;
	double item5 = 3.95;

	double taxRate = 0.06;

	// Calculate
	double subtotal = item1 + item2 + item3 + item4 + item5;
	double tax		= subtotal * taxRate;

	// Display the results
	cout << "-----Receipt-----" << endl;
	cout << "Item #1 : $" << item1 << endl;
	cout << "Item #2 : $" << item2 << endl;
	cout << "Item #3 : $" << item3 << endl;
	cout << "Item #4 : $" << item4 << endl;
	cout << "Item #5 : $" << item5 << endl << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax     : $" << tax << endl;
	cout << "Total   : $" << subtotal + tax << endl;

	return 0;
}
