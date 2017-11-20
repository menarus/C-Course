/*
Project			: How Many Calories?
Author			: Mohammad Al-Husseini
Description		: Calculates how many calories someone has consumed based on given serving sizes.
Knowns			: Bag holds 40 cookies - Int
				  Bag contains 10 servings - Int
				  A serving is equivalent to 300 calories - Int
Inputs			: How many cookies were consumed - Double
Display			: How many calories were consumed - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Constants for Knowns
	const int CPS = 4; // Cookies Per Serving -> 40 / 10
	const int CAL = 300;

	// Variables for Inputs
	double cookies; // Could eat half a cookie

	// Get Input
	cout << "Enter how many cookies you ate: ";
	cin >> cookies;

	// Calculate and Display
	cout << "You consumed " << (cookies / CPS) * CAL << " calories.";

		/* Note: Much of the known information was irrelevant. However, we may want to use some of it.
		         For example, perhaps they shouldn't be able to enter more than 40 cookies because that
				 is how much a bag holds. We will learn to do input validation in future chapters.
		*/

	return 0;
}