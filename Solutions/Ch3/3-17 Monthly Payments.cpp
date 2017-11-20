/*
Project			: 3-17 Monthly Payments
Author			: Mohammad Al-Husseini
Description		: Calculates the payments and interest for a loan.
Knowns			: payment = l * (rate * (1 + rate)^n) / ((1 + rate)^n - 1)
Inputs			: Annual Interest Rate - Double
				  Number of Payments - Int
				  Amount of Loan - Double
Display			: Loan Amount - Double
				  Monthly Interest Rate - Double
				  Number of Payments - Int
				  Monthly Payment - Double
				  Amount Paid - Double
				  Interest Paid - Double
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // output formatting
using namespace std;

int main()
{
	// Variables for Input
	double rate, loan;
	int payments;

	// Get User Input
	cout << "Please enter the loan amount: $";
	cin >> loan;

	cout << "-       annual interest rate: %";
	cin >> rate;

	cout << "-         number of payments: #";
	cin >> payments;

	// Convert rate into annual rate for calculation
	rate /= 1200; // 12% = 0.12

	// Calculate Monthly Payment
	double payment = loan * (rate * pow(1 + rate, payments)) / (pow(1 + rate, payments) - 1);	

	// Format Output
	cout << fixed << showpoint << setprecision(2) << right;

	// Display
	const int SIZE = 9;

	cout << endl << "--------Loan Information Slip--------" << endl << endl;
	cout << "Loan Amount:           $" << setw(SIZE) << loan << endl;
	cout << "Monthly Interest Rate:  " << setw(SIZE - 1) << rate * 100 << "%" << endl;
	cout << "Number of Payments:     " << setw(SIZE) << payments << endl;
	cout << "Monthly Payment:       $" << setw(SIZE) << payment << endl;
	cout << "Amount Paid:           $" << setw(SIZE) << payment * payments << endl;
	cout << "Interest Paid:         $" << setw(SIZE) << payment * payments - loan;

	return 0;
}