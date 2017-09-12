/*
Project			: Sum of Two Numbers
Author			: Mohammad Al-Husseini
Description		: Stores the integers 62 and 99 in variables.
			      Then store the result of their addition into a variable named total.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Store our known values
	int num1 = 62;
	int num2 = 99;

	// Calculate the result
	int total = num1 + num2;

	// Display the result
	cout << "The sum of " << num1 << " and " << num2 << " is " << total << ".";
	return 0;
}
