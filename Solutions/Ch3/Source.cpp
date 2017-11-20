/*
Project			: Average Rainfall
Author			: Mohammad Al-Husseini
Description		: Calculates the average rainfall for three months.
Inputs			: Name of the Month and the Rainfall for that Month, for three months
Display			: Similar to: "The average rainfall for June, July, and August is 6.72 inches."
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format the output
using namespace std;

int main()
{
	// Variables for input
	char month1[10]; // Character array to store the string
	char month2[10]; // Recall that it must have enough indexies to hold the largest word plus one
	char month3[10]; // to account for the null terminator. (September is the longest with 9)

	double rain1;
	double rain2;
	double rain3;

	// User Input
	cout << "Enter the first month: ";
	cin >> setw(10) >> month1; //prevent buffer overrun
	cout << "Enter the rainfall (inches) for " << month1 << ": ";
	cin >> rain1;

	cout << endl << "Enter the second month: ";
	cin >> setw(10) >> month2;
	cout << "Enter the rainfall (inches) for " << month2 << ": ";
	cin >> rain2;

	cout << endl << "Enter the third month: ";
	cin >> setw(10) >> month3;
	cout << "Enter the rainfall (inches) for " << month3 << ": ";
	cin >> rain3;

	// Calculate and Display
	cout << endl << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is "
		 << fixed << setprecision(2) << showpoint
		 << (rain1 + rain2 + rain3) / 3 << " inches.";

	return 0;
}