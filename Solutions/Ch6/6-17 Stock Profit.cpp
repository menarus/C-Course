/*
Project			: 6-17 Stock Profit
Author			: Mohammad Al-Husseini
Description		: Calculates profit/loss from stock transation.
Knowns			: Profit = ((NS * SP) - SC) - ((NS * PP) + PC)
Inputs			: Number of Shares		- Int
				  Sales Price			- Double
				  Sales Commission		- Double
				  Purchase Price		- Double
				  Purchase Commission	- Double
Display			: The Profit or Loss
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
	int ns;
	double sp, sc, pp, pc;

	// Get User Input
	cout << "Enter the number of shares purchased: #";
	cin >> ns;

	cout << "Enter the price per share purchased:  $";
	cin >> pp;

	cout << "Enter the purchase commission fee:    $";
	cin >> pc;

	cout << "Enter the price per share sold:       $";
	cin >> sp;

	cout << "Enter the sales commission fee:       $";
	cin >> sc;

	// Calculate and Display
	cout << setprecision(2) << fixed << showpoint << endl;
	double result = calcStock(ns, sp, sc, pp, pc);
	
	if (result < 0)
	{
		cout << "Your loss was: $" << abs(result); // Could also multiply by -1
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