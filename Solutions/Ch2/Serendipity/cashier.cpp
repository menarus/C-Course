/*
Project			: cashier
Author			: Mohammad Al-Husseini
Description		: Displays the cashier menu/receipt for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	cout << " Serendipity Booksellers" << endl << endl;

	cout << " Date: " << endl << endl;

	cout << " Qty     ISBN          Title                    Price     Total" << endl;
	cout << " ______________________________________________________________" << endl << endl << endl;


	cout << "                       Subtotal: " << endl;
	cout << "                       Tax:      "	<< endl;
	cout << "                       Total:    "	<< endl << endl;

	cout << " Thank You for Shopping at Serendipity!";

	return 0;
}