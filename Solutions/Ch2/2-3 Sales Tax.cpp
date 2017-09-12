/*
Project			: Sales Tax
Author			: Mohammad Al-Husseini
Description		: Computes the total sales tax on a $52 purchase.
				  State sales tax is 4 percent and county is 2 percent.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Store the information we know
	int price = 52;
	
	double stateTaxRate  = 0.04;
	double countyTaxRate = 0.02;

	// Calculate the taxes
	double stateTax  = price * stateTaxRate;
	double countyTax = price * countyTaxRate;

	// Display the results
	cout << "For a purchase of $" << price << ": " << endl;
	cout << " State  Tax = $" << stateTax << endl;
	cout << " County Tax = $" << countyTax << endl << endl;
	cout << " Total  Tax = $" << stateTax + countyTax << endl;
	cout << " Total Cost = $" << stateTax + countyTax + price << endl;

	return 0;
}