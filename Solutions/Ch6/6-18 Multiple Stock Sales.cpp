/*
Project			: 6-18 Multiple Stock Sales
Author			: Mohammad Al-Husseini
Description		: Calculates profit/loss for multiple stock transations.
Knowns			: Profit = ((NS * SP) - SC) - ((NS * PP) + PC)
Inputs			: Number of Transactions - Int
				  Number of Shares		 - Int
			  	  Sales Price			 - Double
				  Sales Commission		 - Double
				  Purchase Price		 - Double
				  Purchase Commission	 - Double
Display			: The Total Profit or Loss
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // output formatting
using namespace std;

// Function Prototype
double calcStock(int, double, double, double, double);

int main()
{
	// Input Variables
	int ns, nt;
	double sp, sc, pp, pc;

	// Accumulator
	double result = 0;

	// Get User Input
	cout << "Enter the number of stock transations: #";
	cin >> nt;

	for (int i = 1; i <= nt; i++)
	{
		cout << endl << "Transaction #" << i << endl << endl;

		cout << "Enter the number of shares purchased:  #";
		cin >> ns;

		cout << "Enter the price per share purchased:   $";
		cin >> pp;

		cout << "Enter the purchase commission fee:     $";
		cin >> pc;

		cout << "Enter the price per share sold:        $";
		cin >> sp;

		cout << "Enter the sales commission fee:        $";
		cin >> sc;

		result += calcStock(ns, sp, sc, pp, pc);
	}

	// Display
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "Transaction Total" << endl << endl;
	
	if (result < 0)
	{
		cout << "Your loss was: $" << result * -1;
	}
	else
	{
		cout << "Your profit was: $" << result;
	}

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// Function Definition ////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

double calcStock(int NS, double SP, double SC, double PP, double PC)
{
	return ((NS * SP) - SC) - ((NS * PP) + PC);
}