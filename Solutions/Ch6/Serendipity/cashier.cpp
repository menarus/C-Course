/*
Project			: cashier
Author			: Mohammad Al-Husseini
Description		: Displays the cashier menu/receipt for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
#include <iomanip>  // format input/output
using namespace std;

int cashier()
{
	// Constants for Array Sizes
	const int DSIZE = 11;
	const int ISIZE = 14;
	const int TSIZE = 31;

	// Extra size variables
	const int QSIZE = 3;
	const int PSIZE = 9;

	// Variables for Input
	char date[DSIZE];
	char isbn[ISIZE];
	char title[TSIZE];

	int quant;
	double price;

	char repeat = 'Y';

	// Variables for Calculations
	const double STAX = 0.06;
	double tax;
	double subtotal;
	double total;

	// Loop
	do
	{
		// Get User Input
		cout << " Please Enter Today's Date (MM/DD/YY): ";
		cin >> date;

		cout << " Quantity of the book being purchased: ";
		cin >> quant;

		cout << " ISBN of the book being purchased    : ";
		cin >> isbn;

		cout << " Title of the book being purchased   : ";
		cin.ignore();
		cin.getline(title, TSIZE);

		cout << " Price of the book being purchased   : ";
		cin >> price;

		// Calculate
		subtotal = quant * price;
		tax = subtotal * STAX;
		total = subtotal + tax;

		// Formatting
		cout << setprecision(2) << fixed << left;

		// Screen Output
		cout << endl << endl
			<< " Serendipity Booksellers\n\n";
		cout << " Date: " << date << endl << endl;
		cout << " " << setw(QSIZE + 1) << "Qty" << setw(ISIZE + 1) << "ISBN" << setw(TSIZE + 1) << "Title" << setw(PSIZE + 1) << "Price" << setw(PSIZE + 1) << "Total" << endl;
		cout << " _____________________________________________________________________\n";
		cout << " " << setw(QSIZE + 1) << quant << setw(ISIZE + 1) << isbn << setw(TSIZE + 1) << title << "$" << setw(PSIZE - 1) << price << "$" << setw(PSIZE - 1) << price * quant << endl << endl;
		cout << setw(QSIZE + ISIZE + 2) << "" << setw(TSIZE + PSIZE + 2) << " Subtotal:" << "$" << right << setw(PSIZE - 1) << subtotal << left << endl;
		cout << setw(QSIZE + ISIZE + 2) << "" << setw(TSIZE + PSIZE + 2) << " Tax:" << "$" << right << setw(PSIZE - 1) << tax << left << endl;
		cout << setw(QSIZE + ISIZE + 2) << "" << setw(TSIZE + PSIZE + 2) << " Total:" << "$" << right << setw(PSIZE - 1) << total << left << endl << endl;
		cout << " Thank You for Shopping at Serendipity!" << endl << endl;

		// Repeat
		cout << "Would you like to process another transation (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	return 0;
}