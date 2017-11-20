/*
Project			: invmenu
Author			: Mohammad Al-Husseini
Description		: Displays the inventory menu for the Serendipity Project.
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
	cout << " Inventory Database" << endl << endl;

	cout << "  1. Look Up a Book"			<< endl;
	cout << "  2. Add a Book"				<< endl;
	cout << "  3. Edit a Book's Record"		<< endl;
	cout << "  4. Delete a Book"			<< endl;
	cout << "  5. Return to the Main Menu"	<< endl << endl;

	cout << "  Enter your choice: ";
	cin  >> choice;

	// Validate Input
	if (static_cast<int>(choice) > 53 || static_cast<int>(choice) < 49) // ASCII Representations
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
	}

	return 0;
}