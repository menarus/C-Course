/*
Project			: 5-23 Savings Account Balance Modification
Author			: Mohammad Al-Husseini
Description		: Calculates the balance of a savings account
Knowns			: Monthly Interest = Annual Interest / 12
				  Monthly Balance = Balance * Monthly Interest + Balance
Inputs			: annual interest rate - Double
				  starting balance - Double
				  age of the account in months - Int
				  monthly deposit - Double
				  monthly withdrawl - Double
Display			: Ending Balance - Double
				  Total Deposit Amount - Double
				  Total Withdrawl Amount - Double
				  Total Interest Earned - Double
				  Saves the Report to a File
Validation		: Non-Negative Deposit
				  Non-Negative Withdrawl
				  Exit whenever balance is negative
				  Optional: Non-Negative Starting Values
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // output formatting
#include <fstream>  // output report to file
using namespace std;

// Constant File Name
#define FILE "Account.txt"

int main()
{
	// Variables for Input
	double rate;
	double balance;
	int age;
	double deposit;
	double withdrawl;

	// Accumulators
	double total_deposit = 0;
	double total_withdrawl = 0;
	double total_interest = 0;

	// Get Starting Input
	cout << "Enter your annual interest rate (ex. 1.5): %";
	cin >> rate;

	// Validate Interest
	while (rate < 0)
	{
		cout << "   Invalid - Enter a non-negative rate: %";
		cin >> rate;
	}

	cout << "Enter your starting balance: $";
	cin >> balance;

	// Validate Balance
	while (balance < 0)
	{
		cout << "   Invalid - Enter a non-negative balance: $";
		cin >> balance;
	}

	cout << "Enter the age (in months) of your account: #";
	cin >> age;

	// Validate Age
	while (age < 0)
	{
		cout << "   Invalid - Enter a non-negative age: #";
		cin >> age;
	}

	// Convert Rate to Monthly for Calculation
	rate /= 120;

	// Spacing
	cout << endl;

	// Monthly Balance Changes
	for (int i = 1; i <= age; i++)
	{
		// Get Monthly Input
		cout << "-Month #" << i << "-" << endl;

		cout << "Enter your total deposit: $";
		cin >> deposit;

		// Validate Deposit
		while (deposit < 0)
		{
			cout << "   Invalid - Enter a non-negative deposit: $";
			cin >> deposit;
		}

		// Accumulate Deposits
		balance += deposit;
		total_deposit += deposit;

		cout << "Enter your total withdrawl: $";
		cin >> withdrawl;

		// Validate Withdrawl
		while (withdrawl < 0)
		{
			cout << "   Invalid - Enter a non-negative withdrawl: $";
			cin >> withdrawl;
		}

		// Accumulate Withdrawls
		balance -= withdrawl;
		total_withdrawl += withdrawl;

		// Check for Overdraw
		if (balance < withdrawl)
		{
			cout << endl << "Warning. Account Overdrawn and Closed. Exiting." << endl;
			break;
		}

		// Compound Interest
		double interest = balance * rate;
		total_interest += interest;
		balance += interest;

		// Spacing
		cout << endl;
	}

	// Open File
	ofstream outFile(FILE);

	if (!outFile)
	{
		cout << "Error Opening File.";
	}
	else
	{
		// Display
		cout << "Data written to file. Exiting.";

		// Write
		outFile << setprecision(2) << fixed << showpoint;
		outFile << "Ending Balance:   $" << balance << endl;
		outFile << "Total Deposits:   $" << total_deposit << endl;
		outFile << "Total Withdrawls: $" << total_withdrawl << endl;
		outFile << "Total Interest:   $" << total_interest << endl;
	}

	return 0;
}