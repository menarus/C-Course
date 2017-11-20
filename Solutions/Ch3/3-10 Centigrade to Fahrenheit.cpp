/*
Project			: Centigrade to Fahrenheit
Author			: Mohammad Al-Husseini
Description		: Converts centigrade temperatures to Fahrenheit.
Knowns			: F = 9/5 C + 32
Inputs			: Centigrade temp - Double
Display			: Fahrenheit temp - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	// Variable for Input
	double temp;

	// Get Input
	cout << "Enter a temperature in degrees centigrade: ";
	cin >> temp;

	// Calculate and Display
	cout << "The temperature in degrees fahrenheit is: "
		<< setprecision(1) << fixed
		<< (9 / 5.0) * temp + 32;
		/* Note: 5.0 is very important
				 had we done 9 / 5, the result would be an integer
				 which would drop the remainer and the formula would become
				 temp + 32, since the result of integer division of 9 / 5 is 1
				 so we force either the 9 or 5 to be double by adding the .0
				 thus making the result a double and maintaining the remainder
		*/

	return 0;
}
