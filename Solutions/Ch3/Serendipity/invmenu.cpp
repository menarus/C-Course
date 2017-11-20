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

	return 0;
}