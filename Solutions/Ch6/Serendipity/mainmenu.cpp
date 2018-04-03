/*
Project			: mainmenu
Author			: Mohammad Al-Husseini
Description		: Displays the main menu for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
#include "cashier.h"
#include "bookinfo.h"
#include "invmenu.h"
#include "reports.h"
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
			cashier();
			break;
		case '2':
			invmenu();
			break;
		case '3':
			reports();
			break;
		}
	} while (choice != '4');

	return 0;
}