/*
Project			: How Many Widgets?
Author			: Mohammad Al-Husseini
Description		: Calculates how many widgets may be stacked on a pallet by weight.
Knowns			: Widgets weight 9.2 lbs
Inputs			: Weight of the Pallet - Double
				  Weight of the Pallet with Widgets - Double
Display			: How many widgets can be placed on the pallet staying under the given weight - Int
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	// Known Constants
	const double W_WEIGHT = 9.2; // lbs

	// Variables for Input
	double pallet, widgets; // multiple variable declaration statement

	// Get User Input
	cout << "Enter the weight of the pallet (lbs): ";
	cin >> pallet;

	cout << "Enter the maximum weight for the pallet and widgets (lbs): ";
	cin >> widgets;

	// Calculate and Display
	cout << "You may place " << static_cast<int>((widgets - pallet) / W_WEIGHT) << " widget(s) on the pallet.";
		// Note: We static cast the result of the calculation as an integer to remove the remainder, since you cannot have part of a widget
		//       You could try something similar with fixed and setprecision(0) but the result will round and this method is more efficent/simple

	return 0;
}