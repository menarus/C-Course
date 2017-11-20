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
	char choice; // Safer to make this a char, than an int
				 // If the user enters a non-int into an int variable
				 // The program will break

	// Display Menu
	cout << " Serendipity Booksellers" << endl;
	cout << " Main Menu" << endl << endl;

	cout << "  1. Cashier Module"				<< endl;
	cout << "  2. Inventory Database Module"	<< endl;
	cout << "  3. Report Module"				<< endl;
	cout << "  4. Exit"							<< endl << endl;

	cout << "  Enter Your Choice: ";
	cin  >> choice;

	// Validate Input
	if (static_cast<int>(choice) > 52 || static_cast<int>(choice) < 49) // ASCII Representations
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
	}

	return 0;
}