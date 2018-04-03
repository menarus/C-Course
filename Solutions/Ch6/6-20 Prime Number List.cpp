/*
Project			: 6-20 Prime Number List
Author			: Mohammad Al-Husseini
Description		: Writes the prime numbers 1-100 Inclusive to a file.
Knowns			: A prime number is one that is divisible ONLY by itself and one.
Inputs			: Number - Int
Display			: Is or Is Not Prime
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <fstream>  // output file
using namespace std;

// Function Prototype
bool isPrime(int);

// File Name
#define fName "primeNumbers.txt"

int main()
{
	// File
	ofstream outFile(fName);

	// Calculate and Write to File
	for (int i = 1; i <= 100; i++)
	{
		if (isPrime(i))
		{
			outFile << i << endl;
		}
	}

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