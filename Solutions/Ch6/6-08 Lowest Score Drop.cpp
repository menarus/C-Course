/*
Project			: 6-08 Lowest Score Drop
Author			: Mohammad Al-Husseini
Description		: Calculates the average of a group of test scores after dropping the lowest one.
Knowns			: Five Test Scores - Int
Inputs			: Test Scores - Int
Display			: The Average of the Four Highest Test Scores
Validation		: Test Scores Between 0 and 100 Inclusive
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // output formatting
using namespace std;

// Function Prototypes
void getScore   (int&);
void calcAverage(int, int, int, int, int);
int  findLowest (int, int, int, int, int);

int main()
{
	// Input Variables
	int score1, score2, score3, score4, score5;

	// Get the Scores
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	// Calculate the Average
	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// Function Definitions ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

void getScore(int& score)
{
	// Score Counter
	static int scoreNum = 1;

	// Get the User Input
	cout << "Please enter score #" << scoreNum << ": ";
	cin >> score;

	// Validate User Input
	while (score < 0 || score > 100)
	{
		cout << " -Invalid- Please enter a score between 0 and 100: ";
		cin >> score;
	}

	// Increment Score Counter
	scoreNum++;
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	// Calculate the Average
	int lowest = findLowest(score1, score2, score3, score4, score5);
	double average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;

	// Format and Display the Output
	cout << setprecision(1) << fixed;
	cout << endl; // Spacing Between the User Input
	cout << "The lowest test score was: " << lowest << endl;
	cout << "The test score average is: " << average;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	// Start with the First Score
	int lowest = score1;

	// Be Sure to Do These as Seperate If Statements and Not Else Ifs
	if (score2 < lowest)
	{
		lowest = score2;
	}

	if (score3 < lowest)
	{
		lowest = score3;
	}

	if (score4 < lowest)
	{
		lowest = score4;
	}

	if (score5 < lowest)
	{
		lowest = score5;
	}

	return lowest;
}