/*
Project			: Miles per Gallon
Author			: Mohammad Al-Husseini
Description		: Allows the user to enter information about a car and calculates the MPG.
Inputs			: Car gas tank capacity
				  Number of miles the car can be driven on a single tank
Display			: The MPG.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Variables to store user input
	double miles; // Uncertain whether or not the data will be a whole value, so it is safe to assume double
	double gallons; // There is also no need to initialize these values, because they will be overwritten with user input.

	// Prompt the user and collect the input
	cout << "Enter the number of miles the vehicle can travel on a single tank: ";
	cin >> miles; // Program pauses for user input

	cout << "Enter the number of gallons the vehicle's tank holds: ";
	cin >> gallons;

	// Calculate and display the results
	cout << endl << "The vehicle gets, on average, " << miles / gallons << " miles per gallon.";

	return 0;
}
