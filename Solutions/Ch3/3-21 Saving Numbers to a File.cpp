/*
Project			: 3-21 Saving Numbers to a File
Author			: Mohammad Al-Husseini
Description		:
Knowns			:
Inputs			:
Display			:
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <fstream>  // file input and output
using namespace std;

// Old style definition for file name
#define fileName "numbers.dat"

// Program 1 that writes the file
/*
int main()
{
	// Variables for Input
	double n1, n2, n3, n4, n5;

	// Get User Input
	cout << "Enter 5 numbers seperated by a space: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	// Create and open the file
	ofstream outFile;
	outFile.open(fileName);

	// Write to file and display confirmation
	outFile << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " ";
		// Note: we use spaces to diliminate or seperate the numbers so that they aren't a single large number

	cout << "File Written.";

	// Close the file to save the data
	outFile.close();

	return 0;
}
*/

// Program 2 that reads the file

int main()
{
	// Variables for Input
	double n1, n2, n3, n4, n5;

	// Open the file
	ifstream inFile(fileName);

	// Read the data
	inFile >> n1 >> n2 >> n3 >> n4 >> n5;

	// Close the file because we're done
	inFile.close();

	// Display the file's contents
	cout << "The file contains the numbers: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", and " << n5 << ".";

	return 0;
}