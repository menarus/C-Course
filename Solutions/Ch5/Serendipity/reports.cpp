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
		case '5':
			cout << endl << " You selected: 5" << endl << endl;
			break;
		case '6':
			cout << endl << " You selected: 6" << endl << endl;
			break;
		}
	} while (choice != '7');

	return 0;
}