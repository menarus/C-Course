/*
Project			: Stadium Seating
Author			: Mohammad Al-Husseini
Description		: Calculates the income generated from selling seats at a softball event.
Knowns			: Class A seats cost $15
				  Class B seats cost $12
				  Class C seats cost $9
Inputs			: Number of Class A seats sold
				  Number of Class B seats sold
				  Number of Class C seats sold
Display			: Total income generated formatted in fixed-point, with 
				  two decimal places of precision, and always displaying the decimal point.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip> // formatting the output
using namespace std;

int main()
{
	// Constants based on known values
	const int aPrice = 15;
	const int bPrice = 12;
	const int cPrice = 9;

	// Variables to hold input
	int aSeats;
	int bSeats;
	int cSeats;

	// User Input
	cout << "Enter the number of Class A seats sold: #";
	cin >> aSeats;

	cout << "Enter the number of Class B seats sold: #";
	cin >> bSeats;

	cout << "Enter the number of Class C seats sold: #";
	cin >> cSeats;

	// Calculate and Display
	cout << endl << "The income generated from seat sales is: $"
		 << setprecision(2) << fixed << showpoint // format the output
		 << ((aSeats * aPrice) + (bSeats * bPrice) + (cSeats * cPrice));

	return 0;
}