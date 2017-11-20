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

	return 0;
}