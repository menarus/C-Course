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

	// Loop
	do
	{
		// Display Menu
		cout << " Serendipity Booksellers" << endl;
		cout << " Inventory Database" << endl << endl;

		cout << "  1. Look Up a Book" << endl;
		cout << "  2. Add a Book" << endl;
		cout << "  3. Edit a Book's Record" << endl;
		cout << "  4. Delete a Book" << endl;
		cout << "  5. Return to the Main Menu" << endl << endl;

		cout << "  Enter Your Choice: ";
		cin >> choice;

		// Validate Input
		while (static_cast<int>(choice) > 53 || static_cast<int>(choice) < 49) // ASCII Representations
		{
			cout << endl << " Invalid - Enter Your Choice (1-5): ";
			cin >> choice;
		}

		// Branch
		switch (choice)
		{
		case '1':
			cout << endl << " You selected: 1" << endl << endl;
			break;
		case '2':
			cout << endl << " You selected: 2" << endl << endl;
			break;
		case '3':
			cout << endl << " You selected: 3" << endl << endl;
			break;
		case '4':
			cout << endl << " You selected: 4" << endl << endl;
			break;
		}
	} while (choice != '5');

	return 0;
}