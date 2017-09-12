/*
Project			: Distance per Tank of Gas
Author			: Mohammad Al-Husseini
Description		: Calculates the distance a car can travel on a single tank of gas over town and highway.
Known			: 20 Gallon Tank
			  21.5 MPG Town
			  26.8 MPG Highway
Display			: The number of miles in town and highway.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Variables for known values
	int    tank    = 20;   // gallon
	double town    = 21.5; // mpg
	double highway = 26.8; // mpg

	// Display the results
	cout << "On a single tank of gas the vehicle may travel: " << endl;
	cout << "Town   : " << tank * town    << " miles." << endl;
	cout << "Highway: " << tank * highway << " miles." << endl;

	return 0;
}
