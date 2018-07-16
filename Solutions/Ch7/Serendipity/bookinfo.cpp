/*
Project			: bookinfo
Author			: Mohammad Al-Husseini
Description		: Displays the book information menu for the Serendipity Project.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int bookinfo(char isbn[14], char title[51], char author[31], char publisher[31], char date[11], int qty, double wholeSale, double retail)
{
	cout << " Serendipity Booksellers" << endl;
	cout << " Book Information" << endl << endl;

	cout << "  ISBN: " << isbn << endl;
	cout << "  Title: " << title << endl;
	cout << "  Author: " << author << endl;
	cout << "  Publisher: " << publisher << endl;
	cout << "  Date Added: " << date << endl;
	cout << "  Quantity-On-Hand: " << qty << endl;
	cout << "  Wholesale Cost: $" << wholeSale << endl;
	cout << "  Retail Price: $" << retail;

	return 0;
}