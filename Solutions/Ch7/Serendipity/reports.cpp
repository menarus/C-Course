/*
Project			: reports
Author			: Mohammad Al-Husseini
Description		: Displays the report menu for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
#include "reports.h"
using namespace std;

int reports()
{
	// Menu Variable
	char choice;

	// Loop
	do
	{
		// Display Menu
		cout << " Serendipity Booksellers" << endl;
		cout << " Reports" << endl << endl;

		cout << "  1. Inventory Listing" << endl;
		cout << "  2. Inventory Wholesale Value" << endl;
		cout << "  3. Inventory Retail Value" << endl;
		cout << "  4. Listing by Quantity" << endl;
		cout << "  5. Listing by Cost" << endl;
		cout << "  6. Listing by Age" << endl;
		cout << "  7. Return to the Main Menu" << endl << endl;

		cout << "  Enter Your Choice: ";
		cin >> choice;

		// Validate Input
		while (static_cast<int>(choice) > 55 || static_cast<int>(choice) < 49) // ASCII Representations
		{
			cout << endl << " Invalid - Enter Your Choice (1-7): " << endl << endl;
			cin >> choice;
		}

		// Branch
		switch (choice)
		{
		case '1':
			repListing();
			break;
		case '2':
			repWholesale();
			break;
		case '3':
			repRetail();
			break;
		case '4':
			repQty();
			break;
		case '5':
			repCost();
			break;
		case '6':
			repAge();
			break;
		}
	} while (choice != '7');

	return 0;
}

void repListing()
{
	cout << "You selected Inventory Listing.";
}

void repWholesale()
{
	cout << "You selected Inventory Wholesale Value.";
}

void repRetail()
{
	cout << "You selected Inventory Retail Value.";
}

void repQty()
{
	cout << "You selected Listing By Quantity.";
}

void repCost()
{
	cout << "You selected Listing By Cost.";
}

void repAge()
{
	cout << "You selected Listing By Age.";
}