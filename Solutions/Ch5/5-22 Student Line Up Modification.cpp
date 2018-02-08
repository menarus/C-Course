/*
Project			: 5-22 Student Line Up Modification
Author			: Mohammad Al-Husseini
Description		: Determines which student should be the front and back of the line, alphabetically
Knowns			: No two students have the same name
				  Only first names will be entered
Inputs			: student names - Char[]
				  Reads data from file
Display			: First and Last Student
Validation		: 1-25 studets
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // keyboard buffer protection - setw
#include <fstream>  // input file
using namespace std;

#define NAME "LineUp.dat"

int main()
{
	// Constant Name Size
	const int SIZE = 16;

	// Variables for Input
	char name[SIZE];
	char first[SIZE];
	char last[SIZE];

	// Open File
	ifstream inputFile(NAME);

	if (!inputFile)
	{
		cout << "Error Opening File. Exiting.";
		return -1;
	}

	// Flag for first name
	bool init = true;

	// Get all of the Student's Names
	while(inputFile >> name)
	{
		// Set First Student to First and Last
		if (init)
		{
			for (int j = 0; j < SIZE; j++)
			{
				first[j] = name[j];
				last[j] = name[j];
			}

			init = false;
		}
		else
		{
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

	// Display
	if (init)
	{
		cout << "There were no names in the file.";
	}
	else
	{
		cout << first << " should be at the start of the line and " << last << " should be at the end.";
	}

	return 0;
}