/*
Project			: 6-19 isPrime
Author			: Mohammad Al-Husseini
Description		: Determines if a number is prime.
Knowns			: A prime number is one that is divisible ONLY by itself and one.
Inputs			: Number - Int
Display			: Is or Is Not Prime
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

// Function Prototype
bool isPrime(int);

int main()
{
	// Input Variable
	int num;

	// Get User Input
	cout << "Enter a number: ";
	cin >> num;

	// Calculate and Display Prime
	cout << "The number is " << (isPrime(num) ? "" : "not ") << "prime.";

	// Equivalent to the Conditional Operator Above
	/*
	if (isPrime(num))
	{
		cout << "The number is prime.";
	}
	else
	{
		cout << "The number is not prime.";
	}
	*/

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// Function Definition ////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

bool isPrime(int num)
{
	// Check all the divisions 1-num Exclusive
	for (int i = 2; i < num; i++)
	{
		// If any have a 0 remainder, it is immediately not prime
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}