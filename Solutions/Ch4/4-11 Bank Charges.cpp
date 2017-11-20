/*
Project			: 4-11 Bank Charges
Author			: Mohammad Al-Husseini
Description		: Determines the charges for a bank account (for a month)
Knowns			: $10 per month charge
				  $15 if account is less than $400 prior to check fees
				  Check fees are as follows:
					$0.10 each for less than 20 checks
					$0.08 each for 20-39 checks
					$0.06 each for 40-59 checks
					$0.04 each for 60 or more checks
Inputs			: Begining Balance - Double
				  Number of Checks - Int
Display			: Service fees for the month - Double
Validation		: Non-negative checks
				  Display overdrawn if negative begining balance
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format output
using namespace std;

int main()
{
	// Constants for prices
	const int BALANCE_FEE = 15;
	const int MONTHLY_CHARGE = 10;

	// Flag variable for account less than 400
	int lowBalance = 0; // Not currently less than 400, so no fee

	// Variables for Input
	double balance;
	int checks;

	// Get User Input
	cout << "Please enter your balance: $";
	cin >> balance;

	cout << "Please enter the number of checks written: #";
	cin >> checks;

	// Verify number of checks
	if (checks < 0)
		return -1; // Quit the program

	cout << endl; // Spacing

	// Check Initial Balance
	if (balance < 400)
		lowBalance = BALANCE_FEE; // Include the fee

	if (balance < 0)
		cout << "-WARNING- Account is Overdrawn! -WARNING-" << endl << endl;

	// Determine Check Fees
	double checkFees;

	if (checks < 20)
		checkFees = 0.10 * checks;
	else if (checks < 40)
		checkFees = 0.08 * checks;
	else if (checks < 60)
		checkFees = 0.06 * checks;
	else
		checkFees = 0.04 * checks;

	// Calculate and Display the Total Fees
	cout << setprecision(2) << fixed << showpoint;
	cout << "The total fees for this month are: $" << MONTHLY_CHARGE + checkFees + lowBalance;

	return 0;
}