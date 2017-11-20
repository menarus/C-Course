/*
Project			: Box Office
Author			: Mohammad Al-Husseini
Description		: Calculates the theater's gross and net box office profit for a night of a film.
Knowns			: Theater's gross is equal to twenty percent of the net box office.
				  The distributor is paid the remaining amount.
				  Adult ticket costs $6
				  Child ticket costs $3
Inputs			: Movie Name - String
				  Adult Tickets Sold - Int
				  Child Tickets Sold - Int
Display			: Report with the inputs, gross box office profit, net box office profit, 
				  and amount paid to the distributor.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // format the output
using namespace std;

int main()
{
	// Constants for known values
	const int A_PRICE = 6;
	const int C_PRICE = 3;
	const double DISTRIB = 0.2;

	// Constant for array size
		// Note: We are free to pick an arbitrary size, you want it to be large enough to hold
		//       the entire movie title, but not so large that it wastes memory.
	const int SIZE = 100; // Also a good idea to use this as a constant, such that if we need to change it
						  // we only need to change it in one location

	// Variables for Input
	char name[SIZE];
	int adult;
	int child;

	// User Input
	cout << "Enter the title of the movie: ";
	cin.getline(name, SIZE); // Read an entire line, including whitespace

	cout << "Enter the number of Adult tickets sold: ";
	cin >> adult;

	cout << "Enter the number of Child tickets sold: ";
	cin >> child;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; // clear the input from the console

	// Calculate
	double gross = A_PRICE * adult + C_PRICE * child; // No need for parenthesis if you take advantage of order of operations

	// Display
	cout << "Movie Name: \t\t\t\t"		 << name << endl; // utilize the tab escape character
	cout << "Adult Tickets Sold: \t\t\t" << adult << endl;
	cout << "Child Tickets Sold: \t\t\t" << child << endl;

	// Format the following three output numbers
	cout << fixed << setprecision(2) << showpoint;

	cout << "Gross Box Office Profit: \t\t$"	<< gross << endl;
	cout << "Net Box Office Profit: \t\t\t$"	<< gross * DISTRIB << endl;
	cout << "Amount Paid to Distributor: \t\t$" << gross * (1 - DISTRIB);

	return 0;
}
