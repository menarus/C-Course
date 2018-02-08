/*
Project			: 5-14 Student Line Up
Author			: Mohammad Al-Husseini
Description		: Determines which student should be the front and back of the line, alphabetically
Knowns			: No two students have the same name
				  Only first names will be entered
Inputs			: number of students - Int
				  student names - Char[]
Display			: First and Last Student
Validation		: 1-25 studets
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // keyboard buffer protection - setw
using namespace std;

int main()
{
	// Constant Name Size
	const int SIZE = 16;

	// Variables for Input
	int students;
	char name[SIZE];
	char first[SIZE];
	char last[SIZE];

	// Get the Number of Students
	cout << "Enter the number of students: ";
	cin >> students;

	// Validate Students
	while (students < 1 || students > 25)
	{
		cout << "\tInvalid - Enter between 1 and 25 students: ";
		cin >> students;
	}

	// Spacing
	cout << endl;

	// Get all of the Student's Names
	for (int i = 0; i < students; i++)
	{
		// Get Name
		cout << "Enter a student's name: ";
		cin >> setw(SIZE) >> name;

		// Set First Student to First and Last
		if (i == 0)
		{
			// Do not use the assignment operator
			// It will assign the memory address
			// Which means, as name changes
			// so too will first and last

			// Though you haven't learned to copy strings yet
			// You have all the tools to do it
			// Later we will use a function called strcpy
			for (int j = 0; j < SIZE; j++)
			{
				first[j] = name[j];
				last[j] = name[j];
			}
		}
		else
		{
			// Remember not to use relational operators for cstrings
			
			// Name comes first
			if (strcmp(name, first) < 0)
			{
				for (int j = 0; j < SIZE; j++)
				{
					first[j] = name[j];
				}
			}

			// Name comes last
			if (strcmp(name, last) > 0)
			{
				for (int j = 0; j < SIZE; j++)
				{
					last[j] = name[j];
				}
			}
		}
	}

	// Spacing
	cout << endl;

	// Display
	cout << first << " should be at the start of the line and " << last << " should be at the end.";

	return 0;
}