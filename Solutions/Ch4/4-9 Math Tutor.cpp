/*
Project			: 4-9 Math Tutor
Author			: Mohammad Al-Husseini
Description		: Displays two random numbers to be added then waits for the user to solve it.
				  The user can type their result in and the program tells them if they are correct.
Knowns			: 2x Random Numbers - Int
Inputs			: Answer - Int
Display			: 2x Radnom Numbers - Int
				  Answer - Int
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <cstdlib>  // random numbers
#include <ctime>    // time to seed the random numbers
using namespace std;

int main()
{
	// Create variables to hold the random numbers
	int num1, num2;

	// Variable for User Input
	int result;

	// Seed the random number
	unsigned seed = time(0); // 0 indicates current time at run-time
	srand(seed);

	// Generate the random numbers
	num1 = rand();
	num2 = rand();

	// Display the numbers
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "__________" << endl;
	cout << "  ";

	// Wait for user input
	cin >> result;

	// Determine if answer was correct
	if (result == num1 + num2)
		cout << "Congratulations! That is correct, good job!";
	else
		cout << "  " << num1 + num2;

	return 0;
}