/*
Project			: 5-13 The Greatest and Least of These
Author			: Mohammad Al-Husseini
Description		: The user enters a series of integers terminated with the sentinel -99
				  The program should display the largest and smallest values
Knowns			: Sentinel of -99
Inputs			: numbers - Int
Display			: max - Int
				  min - Int
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Sentinel
	const int QUIT = -99;

	// Variable for Input
	int num;

	// Variables for greatest and least
	int max;
	int min; // Do not initalize these because we don't know the range of numbers

	// Flag for max and min initialize
	bool first = true;

	// Get all the Numbers
	while (true) // Intentional infinite loop, because we'll break on the sentinel
	{
		// Get Input
		cout << "Enter an integer (" << QUIT << " to Quit): ";
		cin >> num;

		// Check for Sentinel first so that it doesn't affect max or min
		if (num == QUIT)
		{
			break;
		}

		// Initialize max and min to the first value
		if (first)
		{
			max = min = num;
			first = false; // Only happens for the first number
		}
		else
		{
			// Update max and min
			if (num > max)
			{
				max = num;
			}

			if (num < min)
			{
				min = num;
			}
		}
	}

	// Spacing
	cout << endl;

	// Make sure the sentinel wasn't the first number entered
	if (first)
	{
		cout << "You did not enter any numbers.";
	}
	else
	{
		cout << "The greatest number was: " << max << endl;
		cout << "The smallest number was: " << min;
	}

	return 0;
}