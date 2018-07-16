/*
Project			: 7-07 Lowercase to Uppercase Converter
Author			: Mohammad Al-Husseini
Description		: Converts a C-String into all uppercase.
Knowns			: lowercase letters are ASCII 97-122
				  subtract 32 from this range to make them uppercase
Inputs			: C-String - char array
Display			: Uppercase C-String - char array
Validation		: Shouldn't change non-lowercase letters
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Input Array
	const int SIZE = 101;
	char string[SIZE];

	// Get Input
	cout << "Enter a string of at most 100 characters." << endl << endl;
	cin.getline(string, SIZE);

	// Convert to Uppercase
	// Loop through each character of the string
	for (int i = 0; i < SIZE; i++)
	{
		// Check for the lowercase range, because we don't want to change any other characters
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] -= 32;
		}
	}

	// Display the New String
	cout << endl << "Your new string follows." << endl << endl;
	cout << string;

	return 0;
}