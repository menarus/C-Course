/*
Project			: How Much Insurance?
Author			: Mohammad Al-Husseini
Description		: Calculates how much one should insure real estate for.
Knowns			: Property should be insured for 80% of its replacement cost - Double
Inputs			: The value of the property - Double
Display			: The minimum ammount of insurance - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	// Constant for Knowns
	const double rate = 0.8;

	// Variable for Input
	double value;

	// Get Input
	cout << "Enter the value of your property: $";
	cin >> value;

	// Calculate and Display
	cout << "The minimum amount you should be insured for is $"
		 << setprecision(2) << fixed << showpoint
		 << value * rate << ".";

	return 0;
}
