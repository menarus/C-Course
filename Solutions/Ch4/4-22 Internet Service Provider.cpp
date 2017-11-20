/*
Project			: 4-22 Internet Service Provider
Author			: Mohammad Al-Husseini
Description		: Calculates a customer's bill based on their package.
Knowns			: Package A
				  ~ 10 hours of access for $9.95  with $2 per hour additional
				  Package B
				  ~ 20 hours of access for $14.95 with $1 per hour additional
				  Package C
				  ~ Unlimited access for $19.95
Inputs			: Package - char
				  Hours - double
Display			: Total Amount Due - Double
Validation		: Hours > 744 for the month
				  Valid Menu Option
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format output
using namespace std;

int main()
{
	// Variable for Menu
	char choice;

	// Display Menu
	cout << "-ISP Monthly Calculator-" << endl;
	cout << " Package A:" << endl;
	cout << " \t10 Hours for $9.95" << endl;
	cout << " \t$2 Per Additional Hour" << endl << endl;
	cout << " Package B:" << endl;
	cout << " \t20 Hours for $14.95" << endl;
	cout << " \t$1 Per Additional Hour" << endl << endl;
	cout << " Package C:" << endl;
	cout << " \tUnlimited Hours for $19.95" << endl;
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

	// Get Hours if not option C
	double hours;

	if (choice != 'C' && choice != 'c')
	{
		cout << "Please enter the number of hours: ";
		cin >> hours;

		// Validate Hours
		if (hours > 744)
		{
			cout << endl << "Hours exceede possibility.\nExiting.";
			return -2;
		}
	}

	cout << endl << setprecision(2) << fixed << showpoint; // Format Output

	// Calculate and Display Bill
	switch (choice)
	{
		case 'A': // utilize fallthrough
		case 'a':
			// Determine if they've exceeded hours
			if (hours > 10)
				cout << "Your bill is: $" << 9.95 + (hours - 10) * 2 << ".";
			else
				cout << "Your bill is: $9.95.";
			break;

		case 'B':
		case 'b':
			// Determine if they've exceeded hours
			if (hours > 20)
				cout << "Your bill is: $" << 14.95 + hours - 20 << ".";
			else
				cout << "Your bill is: $14.95.";
			break;

		case 'C':
		case 'c':
			cout << "Your bill is: $19.95.";
		// No need for a break, becasue we are at the end of the switch
		// No need for a default case, because of the first if statement
	}

	return 0;
}