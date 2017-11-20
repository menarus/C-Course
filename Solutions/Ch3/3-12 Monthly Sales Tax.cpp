/*
Project			: 3-12 Monthly Sales Tax
Author			: Mohammad Al-Husseini
Description		: Determine the sales information for a given month.
Knowns			: state tax = 4%
				  county tax = 4%
Inputs			: Month - Char
				  Year - Int
				  Total Sales - Double
Display			: County Sales Tax - Double
				  State Sales Tax - Double
				  Total Sales Tax - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	// Constants
	const double state = 0.04;
	const double county = 0.02;

	// Variables for Input
	double total;
	int year;
	char month[12];

	// Get Input
	cout << "Enter the month: ";
	cin >> month;

	cout << "Enter the year: ";
	cin >> year;

	cout << "Enter the total collected: $";
	cin >> total;

	// Calculate and Display
	cout << endl << month << " " << year << endl;
	cout << "---------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2); // format the output
	cout << "Total Collected:\t$"	<< total						<< endl;
	cout << "Sales:\t\t\t$"			<< total * (1 - state - county) << endl;
	cout << "County Sales Tax:\t$"	<< total * county				<< endl;
	cout << "State Sales Tax:\t$"	<< total * state				<< endl;
	cout << "Total Sales Tax:\t$"	<< total * (county + state)		<< endl;

	return 0;
}