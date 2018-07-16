/*
Project			: 7-08 Proper Words
Author			: Mohammad Al-Husseini
Description		: Capitalizes the first letter of each word in a string.
Inputs			: The c-string to be capitalized - char array
Display			: The string - char array
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

// Function Prototype
void proper(char[], int);

int main()
{
	// String Input
	const int SIZE = 101;
	char string[SIZE];

	// Get Input
	cout << "Enter your string below." << endl << endl;
	cin.getline(string, SIZE);

	// Convert
	proper(string, SIZE);

	// Display
	cout << endl << "The modified string is below." << endl << endl;
	cout << string;

	return 0;
}

void proper(char string[], int SIZE)
{
	// Flag Variable for Spaces
	bool space = true;

	// Loop through the Characters
	for (int i = 0; i < SIZE; i++)
	{
		// Convert to Uppercase if it is the First Letter and Lowercase
		if (space && string[i] >= 97 && string[i] <= 122)
		{
			string[i] -= 32;
		}

		// Check for a Space (ASCII 32)
		if (string[i] == 32)
		{
			space = true;
		}
		else
		{
			space = false;
		}
	}
}