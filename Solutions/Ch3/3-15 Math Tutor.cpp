/*
Project			: 3-15 Math Tutor
Author			: Mohammad Al-Husseini
Description		: Display two random numbers to be added, wait for the user to press a key
				  and then display the result of the calculation
Knowns			: 2x Random Numbers - Int
Inputs			: Any key to continue - Char
Display			: 2x Radnom Numbers - Int
				  Result of Addition - Int
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

	// Seed the random number
	unsigned seed = time(0); // 0 indicates current time at run-time
	srand(seed);

	// Generate the random numbers
	num1 = rand();
	num2 = rand();

	// Display the numbers
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "__________";

	// Wait for user input
	char w;
	cin.get(w);

	// Display the answer
	cout << "  " << num1 + num2;

	return 0;
}