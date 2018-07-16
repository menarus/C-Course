/*
Project			: 7-15 Lottery Application
Author			: Mohammad Al-Husseini
Description		: Generates a random lottery ticket and allows the user to enter numbers, then compares.
Givens			: lottery - 1D Array of 5 Ints
				  user    - 1D Array of 5 Ints
Knowns			: 5 Lottery Numbers - Int
				  Numbers 0-9       - Int
Inputs			: 5 Numbers
Display			: 5 Correct Numbers         - Int
				  Number of Matching Digits - Int
				  Message if all match      - CString
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <cstdlib>  // RNG
#include <time.h>   // Current Time for Seeding
using namespace std;

int main()
{
	// Array Constants
	const int SIZE = 5;

	// Arrays
	int lottery[SIZE];
	int user[SIZE];

	// Display Variable
	int missed = 0;

	// Seed the RNG with the current time
	srand(time(NULL));

	// Loop through the numbers
	for (int i = 0; i < SIZE; i++)
	{
		// Get Input
		cout << "Enter number #" << i + 1 << ": ";
		cin >> user[i];

		// Generate Lottery Ticket
		lottery[i] = rand() % 10; // 0-9

		// Compare Numbers
		if (user[i] != lottery[i])
		{
			missed++;
		}
	}

	// Display
	cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n-The Winning Numbers-" << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << " | " << lottery[i] << " | ";
	}

	cout << endl << endl << "-Your Numbers-" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << " | " << user[i] << " | ";
	}

	if (missed == 0)
	{
		cout << endl << endl << "Congratulations! You're the Grand Prize Winner!!!";
	}
	else
	{
		cout << endl << endl << "You got " << SIZE - missed << " numbers!";
	}

	return 0;
}