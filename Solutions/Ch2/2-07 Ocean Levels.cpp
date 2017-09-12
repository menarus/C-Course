/*
Project			: Ocean Levels
Author			: Mohammad Al-Husseini
Description		: Estimates the level of the ocean as it rises over the years.
Known Values	: Levels rise 1.5 millimeters per year
Display			: How much higher the ocean will be in 5, 7, and 10 years.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Known Values
	double rateOfIncrease = 1.5; // millimeter (mm)

	// Calculate and Display the results
	cout << "If the ocean continues to rise " << rateOfIncrease << " millimeters (mm) per year then: " << endl;
	cout << " In 5  years the ocean will be "  << rateOfIncrease * 5  << " mm higher." << endl;
	cout << " In 7  years the ocean will be "  << rateOfIncrease * 7  << " mm higher." << endl;
	cout << " In 10 years the ocean will be "  << rateOfIncrease * 10 << " mm higher." << endl;

	// With better formating, which you will learn in the next chapter, you can make the print lines more consistantly spaced.

	return 0;
}
