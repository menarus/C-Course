/*
Project			: 4-8 Sorted Names
Author			: Mohammad Al-Husseini
Description		: Asks the user for three names and sorts them in ascending order.
Knowns			: Assume none of the names are the same
Inputs			: Three Names - Char array
Display			: Three Names in ascending order
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Variables/constants for user input
	const int SIZE = 31;
	char name1[SIZE], name2[SIZE], name3[SIZE];

	// Get User Input
	cout << "Enter the first name: ";
	cin.getline(name1, SIZE);

	cout << "Enter the second name: ";
	cin.getline(name2, SIZE);

	cout << "Enter the third name: ";
	cin.getline(name3, SIZE);

	// Sort and display names
	//
	// Name 1 comes before Name 2
	if (strcmp(name1, name2) < 0)
	{
		// Check if Name 2 comes before Name 3
		if (strcmp(name2, name3) < 0)
		{
			// They are already in order
			cout << name1 << ", " << name2 << ", and " << name3 << ".";
		}
		else
		{
			// Check if Name 3 comes before Name 1
			if (strcmp(name3, name1) < 0)
			{
				cout << name3 << ", " << name1 << ", and " << name2 << ".";
			}
			else
			{
				cout << name1 << ", " << name3 << ", and " << name2 << ".";
			}
		}
	}
	// Name 2 comes before Name 1
	else
	{
		// Check if Name 1 comes before Name 3
		if (strcmp(name1, name3) < 0)
		{
			cout << name2 << ", " << name1 << ", and " << name3 << ".";
		}
		else
		{
			// Check if Name 3 comes before Name 2
			if (strcmp(name3, name2) < 0)
			{
				cout << name3 << ", " << name2 << ", and " << name1 << ".";
			}
			else
			{
				cout << name2 << ", " << name3 << ", and " << name1 << ".";
			}
		}
	}

	return 0;
}
