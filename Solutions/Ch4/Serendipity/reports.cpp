/*
Project			: reports
Author			: Mohammad Al-Husseini
Description		: Displays the report menu for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Menu Variable
	char choice;

	// Display Menu
	cout << " Serendipity Booksellers" << endl;
	cout << " Reports" << endl << endl;

	cout << "  1. Inventory Listing"		 << endl;
	cout << "  2. Inventory Wholesale Value" << endl;
	cout << "  3. Inventory Retail Value"	 << endl;
	cout << "  4. Listing by Quantity"		 << endl;
	cout << "  5. Listing by Cost"			 << endl;
	cout << "  6. Listing by Age"			 << endl;
	cout << "  7. Return to the Main Menu"	 << endl << endl;

	cout << "  Enter your choice: ";
	cin  >> choice;

	// Validate Input
	if (static_cast<int>(choice) > 55 || static_cast<int>(choice) < 49) // ASCII Representations
	{
		cout << endl << " Invalid Selection." << endl << endl;
		return -1;
	}

	// Branch
	switch (choice)
	{
	case '1':
		cout << " You selected: 1";
		break;
	case '2':
		cout << " You selected: 2";
		break;
	case '3':
		cout << " You selected: 3";
		break;
	case '4':
		cout << " You selected: 4";
		break;
	case '5':
		cout << " You selected: 5";
		break;
	case '6':
		cout << " You selected: 6";
		break;
	case '7':
		cout << " You selected: 7";
		break;
	}

	return 0;
}