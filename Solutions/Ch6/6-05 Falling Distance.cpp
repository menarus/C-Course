/*
Project			: 6-5 Falling Distance
Author			: Mohammad Al-Husseini
Description		: Calculates the distance an object on Earth falls within a given time.
Knowns			: d = 0.5 g t t
				: g = 9.8
Inputs			: None - Handled by loop 1-10 seconds
Display			: The distance in meters an object has fallen between 1-10 seconds.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // setw
using namespace std;

// Function Prototypes
double fallingDistance(int);

int main()
{
	// Table Header
	cout << "Second\tDistance" << endl;

	// Loop 1-10 and Display the Distance
	for (int i = 1; i < 11; i++)
	{
		cout << setw(6) << i << "\t" << setw(6) << fallingDistance(i) << " m" << endl;
	}

	return 0;
}

double fallingDistance(int seconds) // Should be double seconds, but isn't specified or necessary for this implementation
{
	// Earth's Gravitational Acceleration M/S2
	const double g = 9.8;

	return 0.5 * g * seconds * seconds;
}