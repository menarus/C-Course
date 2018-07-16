/*
Project			: 7-05 Rain or Shine
Author			: Mohammad Al-Husseini
Description		: Keeps track of Weather Data (Rainy, Cloudy, Sunny) for a 3 month period of 30 days each.
Knowns			: Data in File - Chars ('R', 'C', 'S')
				  3 x 30 Array of Chars
				  June, July, and August
Inputs			: File
Display			: Number of Rainy, Cloud, and Sunny Days for Each Month - Int
				  Total Number of Rainy, Cloudy, and Sunny Days - Int
				  Month with the most Rain - C-String
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <fstream>  // Input File
using namespace std;

// File Name Constant
#define fName "RainOrShine.dat"

int main()
{
	// Data Array
	const int MONTHS = 3;
	const int DAYS = 30;
	char weather[MONTHS][DAYS];
	char months[MONTHS][7] = { "June" , "July", "August" };

	// Accumulators
	int sunny[MONTHS]  = { 0 };
	int rainy[MONTHS]  = { 0 }; // Inits all values to 0
	int cloudy[MONTHS] = { 0 };

	//////////////////////////////////////////////////////////////////////////////////////////////////
	// Read Data from the File into the Array ////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////

	// Create the File Object and Open the File
	ifstream inFile(fName);

	// Validate that the File was Opened
	if (!inFile)
	{
		cout << "Couldn't open the file. Exiting.";
		return -1;
	}

	// Read
	for (int i = 0; i < MONTHS; i++)
	{
		// Get all the Data
		for (int j = 0; j < DAYS; j++)
		{
			inFile >> weather[i][j];

			// Accumulate the Types of Days
			if (weather[i][j] == 'S')
			{
				sunny[i]++;
			}
			else if (weather[i][j] == 'R')
			{
				rainy[i]++;
			}
			else if (weather[i][j] == 'C')
			{
				cloudy[i]++;
			}
			else
			{
				cout << "Invalid Data Detected on Month " << i + 1 << " Day " << j + 1 << "." << endl;
			}

			// Note: You could have done the above if/elseif structure as just repeated ifs
			// But, you always want to be extra cautious, even if not required
		}
	}

	// Determine the Month with the Highest Rain
	int rainiest = 0;

	for (int i = 1; i < MONTHS; i++)
	{
		if (rainy[i] > rainy[rainiest])
		{
			rainiest = i;
		}
	}

	// Display

	// Month Data
	for (int i = 0; i < MONTHS; i++)
	{
		cout << months[i] << " had " << cloudy[i] << " cloudy days." << endl;
		cout << months[i] << " had " << rainy[i] << " rainy days." << endl;
		cout << months[i] << " had " << sunny[i] << " sunny days." << endl << endl;
	}

	// Total Data
	cout << "The total number of cloudy days was: " << cloudy[0] + cloudy[1] + cloudy[2] << endl;
	cout << "The total number of rainy  days was: " << rainy[0]  + rainy[1]  + rainy[2]  << endl;
	cout << "The total number of sunny  days was: " << sunny[0]  + sunny[1]  + sunny[2]  << endl << endl;
	cout << "The month with the highest amount of rain was: " << months[rainiest];

	return 0;
}