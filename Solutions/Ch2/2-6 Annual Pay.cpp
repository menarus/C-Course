/*
Project			: Annual Pay
Author			: Mohammad Al-Husseini
Description		: Computes an employee's anual pay.
Known Values	: Paid every two weeks.
Paid 26 times a year. (Same as previous peice of information)
Earns 1,700 per pay peroid.
Display			: Total annual pay.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Known Values
	int payAmount = 1700; // Should normally be a floating point variable, but is integer in this case
	int payPeroids = 26;

	// Calculate the pay
	int annualPay = payAmount * payPeroids; // Would also normally be floating point

											// Display the results
	cout << "The total annual pay for an employee making $1,700 per pay peroid is: $" << annualPay;

	return 0;
}