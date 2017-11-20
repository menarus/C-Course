/*
Project			: 4-25 Freezing and Boiling Points File Input
Author			: Mohammad Al-Husseini
Description		: Gets a temperature from a file and shows which substances will freeze or boil.
Knowns			: Substance			Freeze	Boil
				  Ethyl Alcohol		-173	172
				  Mercury			-38		676
				  Oxygen			-362	-306
				  Water				32		212
				  Note: Degrees Farenheit
Inputs			: Temperature - Double
Display			: The substances that are freezing or boiling at the given temperature.
Validation		: File Exists
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <fstream>  // file input
using namespace std;

// Constant for file name
#define fileName "temp.dat"

int main()
{
	// Variable and Object for Input
	double temp;
	ifstream inputFile;

	// Open and Verify
	inputFile.open(fileName);

	if (!inputFile)
	{
		cout << "Could not open file successfully." << endl;
		cout << "Exiting Program.";
		return -1; // bad file read
	}

	// Get Input
	cout << "-Freezing or Boiling?-" << endl;
	cout << "______________________" << endl;
	inputFile >> temp;
	cout << "The temperature is: " << temp << endl << endl;

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