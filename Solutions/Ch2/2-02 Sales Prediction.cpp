/*
Project			: Sales Prediction
Author			: Mohammad Al-Husseini
Description		: A division generates 62 percent of the company's total sales.
				  If the company generates $4.6 million, estimate what the division generated.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Known values
	int totalSales = 4600000;
	double percent = 0.62; // could be expressed as an integer, but it would need to be stored as 62 and you'd have to divide your calculation result by 100

	// Calculation
	double divisionSales = totalSales * percent;

	// Display result
	cout << "The East Coast sales division will generate approximately $" << divisionSales << " if the company has made $" << totalSales << ".";
	
	// Note that divisionSales will be expressed in e-notation, but totalSales is not despite having the same number of digits.

	return 0;
}
