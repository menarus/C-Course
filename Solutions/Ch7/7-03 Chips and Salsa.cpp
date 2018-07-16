/*
Project			: 7-03 Chips and Salsa
Author			: Mohammad Al-Husseini
Description		: Keeps track of Salsa sales and reports the total numbers, and the highest and lowest selling.
Knowns			: Mild, Medium, Sweet, Hot, and Zesty Salsas
				  Use a parrallel 5 element array
Inputs			: Number of jars for each type of Salsa sold
Display			: The sales for each type, total sales, names of highest and lowest selling jars
Validation		: Non-negative jars sold
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

// Function Prototype for Highest or Lowest
int edgeSales(int[], int, bool); // Could do two seperate highest and lowest functions, but lets try something interesting

int main()
{
	// Salsa Arrays
	const int FLAVORS = 5;
	char name[FLAVORS][8] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int sales[FLAVORS];

	// Accumulator for Total Sales
	int total = 0;

	// Get User Input
	cout << "-Salsa Sales Information-" << endl << endl;

	for (int i = 0; i < FLAVORS; i++)
	{
		cout << "Enter the sales for " << name[i] << " Salsa: # ";
		cin >> sales[i];

		// Input Validation
		while (sales[i] < 0)
		{
			cout << endl << "-Error- Enter a non-negative amount: # ";
			cin >> sales[i];
		}

		// Accumulate
		total += sales[i];
	}

	// Display the Data
	cout << endl << endl << "-Salsa Sales Data-" << endl << endl;
	
	// All the Individual Salsa Flavor Sales
	for (int i = 0; i < FLAVORS; i++)
	{
		cout << name[i] << " Salsa: " << sales[i] << " Jars." << endl;
	}

	cout << endl << "Total Sales: " << total << " Jars." << endl;

	// Utilize edgeSales for Highest and Lowest Sales
	cout << "The flavor with the highest sales was: " << name[edgeSales(sales, FLAVORS, true)] << endl;
	cout << "The flavor with the lowest  sales was: " << name[edgeSales(sales, FLAVORS, false)];

	return 0;
}

// Function for Highest and Lowest Sales
int edgeSales(int sales[], int FLAVORS, bool highest)
{
	// The index for Sales
	int edge = 0;

	for (int i = 1; i < FLAVORS; i++)
	{
		// Conditional Statement to Check for the Highest or the Lowest Based on the Flag
		if (highest ? sales[i] > sales[edge] : sales[i] < sales[edge])
		{
			// Keep the Index of the Highest or Lowest Sales
			edge = i;
		}
	}

	// Return that Index
	return edge;
}