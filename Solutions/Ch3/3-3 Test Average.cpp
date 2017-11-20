/*
Project			: Test Average
Author			: Mohammad Al-Husseini
Description		: Averages five test scores.
Inputs			: Five test scores.
Display			: The average formatted in fixed-point with one decimal point of precision.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format the output
using namespace std;

int main()
{
	// Note that this problem is not concerned with remembering the individual scores
	// Because of this, we can reduce all the scores to two variables
	// One to accumulate the total and one to temporarily hold the user input
	double temp;
	double total = 0; // Must be initialized to 0 in order to accumulate

	// User Input
	cout << "Enter test score #1: ";
	cin >> temp;
	total = total + temp; // accumulate and then repeat

	cout << "Enter test score #2: ";
	cin >> temp;
	total += temp; // combined assignment operate simplifies the syntax greatly

	cout << "Enter test score #3: ";
	cin >> temp;
	total += temp;

	cout << "Enter test score #4: ";
	cin >> temp;
	total += temp;

	cout << "Enter test score #5: ";
	cin >> temp;
	total += temp;

	// Display Result
	cout << endl << "The average of the test scores is: "
		 << fixed << setprecision(1)
		 << total / 5;

	return 0;
}
