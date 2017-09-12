/*
Project			: Circuit Board Price
Author			: Mohammad Al-Husseini
Description		: Calculates the selling price of a circuit board.
Known			: Manufactoring Cost is $12.67
				  Markup is 40%
Display			: The wholesale price of the board.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Variables for known values
	double cost = 12.67;
	double markup = 0.4;

	// Display the results
	cout << "The price of the board is: $" << cost * (1 + markup);

	return 0;
}