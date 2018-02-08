/*
Project			: mainmenu
Author			: Mohammad Al-Husseini
Description		: Displays the main menu for the Serendipity Project.
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
		cout << " Main Menu" << endl << endl;

		cout << "  1. Cashier Module" << endl;
		cout << "  2. Inventory Database Module" << endl;
		cout << "  3. Report Module" << endl;
		cout << "  4. Exit" << endl << endl;

		cout << "  Enter Your Choice: ";
		cin >> choice;

		// Validate Input
		while (static_cast<int>(choice) > 52 || static_cast<int>(choice) < 49) // ASCII Representations
		{
			cout << endl << " Invalid - Enter Your Choice (1-4): ";
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
		}
	} while (choice != '4');

	return 0;
}