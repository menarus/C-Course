/*
Project			: Automobile Costs
Author			: Mohammad Al-Husseini
Description		: Calculates the total monthly and annual costs of automobile ownership.
Inputs			: loan - Double
				  insurance - Double
				  gas - Double
				  oil - Double
				  tires - Double
				  maintainance - Double
Display			: Monthly and Annual Cost - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	// Variables for Inputs
	double loan, insurance, gas, oil, tires, maintainance;

	// Get Input
	cout << "-----Cost Calculator-----" << endl << endl;
	cout << "Enter your monthly costs for the following information: " << endl;
	cout << "Loan           $"; cin >> loan; // Two statements in one line
	cout << "Insurance      $"; cin >> insurance; // This is generally not good practice
	cout << "Gas            $"; cin >> gas; // But illustrates that it is possible
	cout << "Oil            $"; cin >> oil;
	cout << "Tires          $"; cin >> tires;
	cout << "Maintainance   $"; cin >> maintainance;

	// Calculate
	double monthly = loan + insurance + gas + oil + tires + maintainance;

	// Display
	cout << endl << setprecision(2) << fixed << showpoint; // Set up multiple formatting

	cout << "Your monthly cost is: $" << monthly << endl;
	cout << "Your annual cost is:  $" << monthly * 12;

	return 0;
}