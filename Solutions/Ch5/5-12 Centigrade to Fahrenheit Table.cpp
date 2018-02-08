/*
Project			: 5-12 Centigrade to Fahrenheit Table Modification
Author			: Mohammad Al-Husseini
Description		: Converts centigrade temperatures to Fahrenheit.
Knowns			: F = 9/5 C + 32
Display			: 0-20C to F
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format output
using namespace std;

int main()
{
	for (int i = 0; i <= 20; i++)
	{
		// Calculate and Display
		cout << setw(2) << i
			<< static_cast<char>(248) << "C is "
			<< setprecision(1) << fixed
			<< (9 / 5.0) * i + 32
			<< static_cast<char>(248) << "F." << endl;
	}

	return 0;
}