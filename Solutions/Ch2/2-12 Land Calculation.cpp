/*
Project			: Land Calculation
Author			: Mohammad Al-Husseini
Description		: Calculates the number of acres in a tract of land.
Known			: One Acre is 43,560 Square Feet.
				  This particular plot of land is 389,767 Square Feet.
Display			: The acreage of the land.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout object for command line output
using namespace std;

int main()
{
	// Variables for known values
	int acre = 43560;
	int plot = 389767;

	 // Display the results
	cout << "The tract of land measuring " << plot << " sq ft is approximately "
		 << plot / acre << " acres.";

	return 0;
}