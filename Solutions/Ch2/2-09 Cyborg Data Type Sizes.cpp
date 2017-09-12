/*
Project			: Cyborg Data Type Sizes
Author			: Mohammad Al-Husseini
Description		: Determines the size of various data types on a given system, in bytes.
Display			: The size, in bytes, of the data types char, int, float, and double.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Display the results
	cout << "The various data types occupy the following amounts of data: " << endl;
	cout << "Character: " << sizeof(char)   << " byte(s)." << endl;
	cout << "Integer  : " << sizeof(int)    << " byte(s)." << endl;
	cout << "Float    : " << sizeof(float)  << " byte(s)." << endl;
	cout << "Double   : " << sizeof(double) << " byte(s)." << endl;

	return 0;
}
