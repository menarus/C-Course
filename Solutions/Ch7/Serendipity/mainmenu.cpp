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
#include "globals.h"
using namespace std;

// Define Global Variables
const int numBooks = 20;
char bookTitle[numBooks][51];
char isbn[numBooks][14];
char author[numBooks][31];
char publisher[numBooks][31];
char dateAdded[numBooks][11];
int qtyOnHand[numBooks];
double wholesale[numBooks];
double retail[numBooks];

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