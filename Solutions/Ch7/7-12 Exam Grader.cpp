/*
Project			: 7-12 Exam Grader
Author			: Mohammad Al-Husseini
Description		: Grades the answers in StudentAnswers.txt based on the answers in CorrectAnswers.txt.
Knowns			: Percentage Correct = Correct Answers / Total Questions
				  20 Answers
				  A, B, C, or D Answers
Inputs			: Correct Answers - ifstream
				  Student Answers - ifstream
Display			: List of Missed Question, with the provided answer and correct answer
				  Total number of questions missed
				  Percentage of Correct Answers
				  If Percentage is >= 70%, Indicate the student passed
					Else, Indicate the student failed
Validation		: File Opened
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <fstream>  // file input
#include <iomanip>  // output formatting
using namespace std;

// File Name Constants
#define CORRECTFILE "CorrectAnswers.txt"
#define STUDENTFILE "StudentAnswers.txt"

int main()
{
	///////////////////////////////////////////////////////////////////////////////////////////////
	// Create and Validate the Files //////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	ifstream correctAnswersFile(CORRECTFILE);

	// Validate File Opened
	if (!correctAnswersFile)
	{
		cout << "-Error- Opening " << CORRECTFILE << ".";
		return -1;
	}

	ifstream studentAnswersFile(STUDENTFILE);

	// Validate File Opened
	if (!studentAnswersFile)
	{
		cout << "-Error- Opening " << STUDENTFILE << ".";
		return -1;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////
	// Create and Fill the Arrays /////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////

	// Array Size Constant
	const int QUESTIONS = 20;

	// Create the Array
	char correctAnswers[QUESTIONS];
	char studentAnswers[QUESTIONS];

	// Read from File into Arrays
	for (int i = 0; i < QUESTIONS; i++)
	{
		correctAnswersFile >> correctAnswers[i];
		studentAnswersFile >> studentAnswers[i];
	}

	// Close the Files
	correctAnswersFile.close();
	studentAnswersFile.close();

	///////////////////////////////////////////////////////////////////////////////////////////////
	// Grade the Test /////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////

	// Calculation Variables
	int totalMissed = 0;
	double percentageCorrect;

	// Flag for Output Formatting
	bool firstMissed = true;

	// Loop and Grade
	for (int i = 0; i < QUESTIONS; i++)
	{
		// Check for a Miss
		if (studentAnswers[i] != correctAnswers[i])
		{
			// Print a Header
			if (firstMissed)
			{
				cout << "-Missed Questions-" << endl << endl;
				firstMissed = false;
			}

			cout << setw(2) << setfill('0') << i + 1 << ". Student Answer = " << studentAnswers[i] << ". Correct Answer = " << correctAnswers[i] << endl;
			totalMissed++;
		}
	}

	// Calculate and Display Percentage Correct and Pass/Fail
	percentageCorrect = (QUESTIONS - totalMissed) / static_cast<double>(QUESTIONS);

	// Conditional Spacing for Output Formatting
	if (totalMissed != 0)
	{
		cout << endl;
	}

	cout << "You scored " << setprecision(3) << percentageCorrect * 100 << "% correctly." << endl;

	if (percentageCorrect >= 0.7)
	{
		cout << "Congratulations, you passed!" << endl;
	}
	else
	{
		cout << "Sorry, you failed." << endl;
	}

	return 0;
}