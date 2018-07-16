/*
Project			: 7-13 Grade Book
Author			: Mohammad Al-Husseini
Description		: Grades 5 students over 4 tests and assigns a letter grade.
Givens			: 2D Char Array for the Students' Names
				  1D Char Array for the Students' Letter Grades
				  5x 1D Double Arrays for the Students Scores
Knowns			: 5 Students
				  4 Tests Each
				  90-100 A, 80-89 B, 70-79 C, 60-69 D, 0-59 F
Inputs			: 5 Student Names - CStrings
				  4 Test Scores - Double
Display			: Each Student's Average Test Score - Double
				  Each Student's Letter Grade - Char
Validation		: Test Scores 0 - 100
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

	double student1Scores[TESTS];
	double student2Scores[TESTS];
	double student3Scores[TESTS];
	double student4Scores[TESTS];
	double student5Scores[TESTS];
		// NOTE: Would likely be better as a two dimensional array, but the problem specifies 5 single element Arrays

	// Get User Input
	for (int i = 0; i < STUDENTS; i++)
	{
		cout << "Please enter Student #" << i + 1 << "'s name: ";
		cin >> setw(NAMESIZE) >> studentsNames[i]; // Recall that Multi-Dimensional Character arrays (only) can be treated as 1 less dimension

		/* If studentScores were a 2-D array, we could do all the input as follows
			// Nested Loop for Scores
			for (int j = 0; j < TESTS; j++)
			{
				cout << "/t/t Enter Test Score #" << j + 1 << ": ";
				cin >> studentScores[i][j];
			}
		*/

		// Temp Variable
		double totalScore = 0;

		// Nested Loop for Scores
		for (int j = 0; j < TESTS; j++)
		{
			cout << "\t Enter Test Score #" << j + 1 << ": ";

			// Validation
			double tempScore;
			cin >> tempScore;

			while (tempScore > 100 || tempScore < 0)
			{
				cout << "-Invalid Score- Enter a score between 0-100: ";
				cin >> tempScore;
			}

			switch (i)
			{
				case 0:
					student1Scores[j] = tempScore;
					break;
				case 1:
					student2Scores[j] = tempScore;
					break;
				case 2:
					student3Scores[j] = tempScore;
					break;
				case 3:
					student4Scores[j] = tempScore;
					break;
				case 4:
					student5Scores[j] = tempScore;
					break;
			}

			totalScore += tempScore;
		}

		// Calculate Score
		if (totalScore / TESTS >= 90)
		{
			studentsGrades[i] = 'A';
		}
		else if (totalScore / TESTS >= 80)
		{
			studentsGrades[i] = 'B';
		}
		else if (totalScore / TESTS >= 70)
		{
			studentsGrades[i] = 'C';
		}
		else if (totalScore / TESTS >= 60)
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