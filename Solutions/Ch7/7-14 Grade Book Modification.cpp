/*
Project			: 7-14 Grade Book Modification
Author			: Mohammad Al-Husseini
Description		: Drops the lowest test score. Also changed studentScores to a 2D array.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format output
using namespace std;

int main()
{
	// Size Constants
	const int STUDENTS = 5;
	const int TESTS = 4;
	const int NAMESIZE = 21;

	// Create the Arrays
	char studentsNames[STUDENTS][NAMESIZE];
	char studentsGrades[STUDENTS]; // Letter Grade for Each Student
	double studentsScores[STUDENTS][TESTS];

	// Get User Input
	for (int i = 0; i < STUDENTS; i++)
	{
		cout << "Please enter Student #" << i + 1 << "'s name: ";
		cin >> setw(NAMESIZE) >> studentsNames[i]; // Recall that Multi-Dimensional Character arrays (only) can be treated as 1 less dimension

		// Temp Variable
		double totalScore = 0;

		// Nested Loop for Scores
		for (int j = 0; j < TESTS; j++)
		{
			cout << "\t\t Enter Test Score #" << j + 1 << ": ";
			cin >> studentsScores[i][j];

			// Validation
			while (studentsScores[i][j] > 100 || studentsScores[i][j] < 0)
			{
				cout << "-Invalid Score- Enter a score between 0-100: ";
				cin >> studentsScores[i][j];
			}

			totalScore += studentsScores[i][j];
		}

		// Drop the Lowest Score
		double lowest = studentsScores[i][0];

		for (int j = 1; j < TESTS; j++)
		{
			if (studentsScores[i][j] < lowest)
			{
				lowest = studentsScores[i][j];
			}
		}

		totalScore -= lowest;

		// Calculate Score
		if (totalScore / (TESTS - 1) >= 90)
		{
			studentsGrades[i] = 'A';
		}
		else if (totalScore / (TESTS - 1) >= 80)
		{
			studentsGrades[i] = 'B';
		}
		else if (totalScore / (TESTS - 1) >= 70)
		{
			studentsGrades[i] = 'C';
		}
		else if (totalScore / (TESTS - 1) >= 60)
		{
			studentsGrades[i] = 'D';
		}
		else
		{
			studentsGrades[i] = 'F';
		}

		// Output Formatting
		cout << endl;
	}

	// Display Letter Grades
	for (int i = 0; i < STUDENTS; i++)
	{
		cout << studentsNames[i] << " earned a(n) " << studentsGrades[i] << endl;
	}

	return 0;
}