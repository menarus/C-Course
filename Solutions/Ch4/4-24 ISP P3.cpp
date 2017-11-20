/*
Project			: 4-24 Internet Service Provider Part 3
Author			: Mohammad Al-Husseini
Description		: Displays how much money could be saved by changing to a higher package.
				  Enhanced Validation
Knowns			: Package A
				  ~ 10 hours of access for $9.95  with $2 per hour additional
				  Package B
				  ~ 20 hours of access for $14.95 with $1 per hour additional
				  Package C
				  ~ Unlimited access for $19.95
Inputs			: Package - char
				  Hours - double
				  Month - char array
Display			: Total Amount Due - Double
				  How much money could be saved - Double
Validation		: Month			Hours
				  January		744
				  February		672
				  March			744
				  April			720
				  May			744
				  June			720
				  August		744
				  September		720
				  October		744
				  November		720
				  December		744
Valid Menu Option
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format output
using namespace std;

int main()
{
	// Constants for Pricing
	const double APRICE = 9.95;
	const int AHOURS = 10;
	const int ARATE = 2;
	const double BPRICE = 14.95;
	const int BHOURS = 20;
	const int BRATE = 1; // Seems unnecessary, but what if they change the price?
	const double CPRICE = 19.95;

	// Variable for Menu
	char choice;

	// Display Menu
	cout << "-ISP Monthly Calculator-" << endl;
	cout << " Package A:" << endl;
	cout << " \t" << AHOURS << " Hours for $" << APRICE << endl;
	cout << " \t$" << ARATE << " Per Additional Hour" << endl << endl;
	cout << " Package B:" << endl;
	cout << " \t" << BHOURS << " Hours for $" << BPRICE << endl;
	cout << " \t$" << BRATE << " Per Additional Hour" << endl << endl;
	cout << " Package C:" << endl;
	cout << " \tUnlimited Hours for " << CPRICE << endl;
	cout << "___________________________________" << endl << endl;

	// Get Choice
	cout << "Enter your choice (A, B, or C): ";
	cin >> choice;

	// Determine valid choice before we ask for hours
	if (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' && choice != 'C' && choice != 'c')
	{
		cout << endl << "Invalid Menu Choice.\nExiting.";
		return -1;
	}

	// Get hours and month if not option C
	double hours;
	char month[10];

	if (choice != 'C' && choice != 'c')
	{
		cout << "Please enter the month: ";
		cin >> setw(10) >> month; // Only up to 9 characters (September)

		cout << "Please enter the number of hours: ";
		cin >> hours;

		// Validate Hours. This does not account for leap years
		if (!strcmp(month, "January") || !strcmp(month, "March") || !strcmp(month, "May") || !strcmp(month, "July") || !strcmp(month, "August") || !strcmp(month, "October") || !strcmp(month, "December"))
		{
			if (hours > 744)
			{
				cout << endl << "Hours exceede possibility.\nExiting.";
				return -2;
			}
		}
		else if (!strcmp(month, "July") || !strcmp(month, "August") || !strcmp(month, "October") || !strcmp(month, "December"))
		{
			if(hours > 720)
			{
				cout << endl << "Hours exceede possibility.\nExiting.";
				return -2;
			}
		}
		else if (!strcmp(month, "February"))
		{
			if (hours > 672)
			{
				cout << endl << "Hours exceede possibility.\nExiting.";
				return -2;
			}
		}
		else
		{
			cout << endl << "Invalid Month.\nExiting.";
			return -3;
		}
	}

	cout << endl << setprecision(2) << fixed << showpoint; // Format Output

														   // Calculate and Display Bill
	switch (choice)
	{
	case 'A': // utilize fallthrough
	case 'a':

		// Determine if they've exceeded hours
		if (hours > AHOURS)
		{
			double bill = APRICE + (hours - AHOURS) * ARATE;
			cout << "Your bill is: $" << bill << "." << endl;

			// Determine the better package
			double bprice = BPRICE + (hours - BHOURS) * BRATE;

			if (bill > CPRICE && bprice > CPRICE)
				cout << "You could save $" << bill - CPRICE << " by switching to Package C!";
			// Save because of hours
			else if (bill > bprice && hours > BHOURS)
				cout << "You could save $" << bill - bprice << " by switching to Package B!";
			// Save because of flat price
			else if (bill > BPRICE)
				cout << "You could save $" << bill - BPRICE << " by switching to Package B!";
		}
		else
			cout << "Your bill is: $" << APRICE << ".";

		break;

	case 'B':
	case 'b':

		// Determine if they've exceeded hours
		if (hours > BHOURS)
		{
			double bill = BPRICE + (hours - BHOURS) * BRATE;
			cout << "Your bill is: $" << bill << "." << endl;

			// Display Savings
			if (bill > CPRICE)
				cout << "You could save $" << bill - CPRICE << " by switching to Package C!";
		}
		else
			cout << "Your bill is: $" << BPRICE << ".";

		break;

	case 'C':
	case 'c':
		cout << "Your bill is: $" << CPRICE << ".";
		// No need for a break, becasue we are at the end of the switch
		// No need for a default case, because of the first if statement
	}

	return 0;
}