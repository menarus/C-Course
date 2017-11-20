/*
Project			: Currency
Author			: Mohammad Al-Husseini
Description		: Converts dollar values into yen and euro
Knowns			: 1 Dollar = 134.33 Yen
				  1 Dollar = 1.1644 Euro
Inputs			: Dollar Amount - Double
Display			: Yen - Double
				  Euro - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	// Constants for Knowns
	const double D2Y = 134.33; // Dollar to Yen
	const double D2E = 1.1644; // Dollar to Euro
		// Note: This program would be much more interesting if it connected to an online database
		//		 With up to date converstion information, this is sadly outdated

	// Variable for Input
	double dollars;

	// Get Input
	cout << "Enter a dollar amount to convert: $";
	cin >> dollars;

	// Calculate and Display
	cout << setprecision(2) << fixed << showpoint; // multiple output formatting

	cout << "This amount is equal to " << dollars * D2Y << " yen." << endl;
	cout << "This amount is equal to " << dollars * D2E << " euros." << endl;

	return 0;
}