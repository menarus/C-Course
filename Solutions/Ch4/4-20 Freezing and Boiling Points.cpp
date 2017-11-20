/*
Project			: 4-20 Freezing and Boiling Points
Author			: Mohammad Al-Husseini
Description		: Asks the user to enter a temperature and shows which substances will freeze or boil.
Knowns			: Substance			Freeze	Boil
				  Ethyl Alcohol		-173	172
				  Mercury			-38		676
				  Oxygen			-362	-306
				  Water				32		212
				  Note: Degrees Farenheit
Inputs			: Temperature - Double
Display			: The substances that are freezing or boiling at the given temperature.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Variable for User Input
	double temp;

	// Get User Input
	cout << "-Freezing or Boiling?-" << endl;
	cout << "______________________" << endl;
	cout << "Enter a temperature in degrees Farenheit: ";
	cin >> temp;
	cout << endl; // Formatting

	// Determine which substances are freezing or boiling
	// Utilize a multiple if statement structure
	// This will allow more than one message to be printed

	// Freezing
	if (temp <= -173) // Could say < -172, but temp is a double, so what about -172.9?
		cout << "Ethyl Alcohol is freezing." << endl;
	if (temp <= -38)
		cout << "Mercury is freezing." << endl;
	if (temp <= -362)
		cout << "Oxygen is freezing." << endl;
	if (temp <= 32)
		cout << "Water is freezing." << endl;

	// Boiling
	if (temp >= 172)
		cout << "Ethyl Alcohol is boiling." << endl;
	if (temp >= 676)
		cout << "Mercury is boiling." << endl;
	if (temp >= -306)
		cout << "Oxygen is boiling." << endl;
	if (temp >= 212)
		cout << "Water is boiling." << endl;

	return 0;
}