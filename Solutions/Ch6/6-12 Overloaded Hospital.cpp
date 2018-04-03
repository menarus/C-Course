/*
Project			: 6-12 Overloaded Hospital
Author			: Mohammad Al-Husseini
Description		: Calculates hospital fees for in-patients and out-patients using an overloaded function.
Inputs			: Medication Charges - Double
				  Service Charges    - Double
				  Number of Days     - Int
				  Daily Charges      - Double
Display			: The Total Charges  - Double
Validation		: Inputs Must be Non-Negative
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // output formatting
using namespace std;

double totalFee(double, double, int, double); // In-Patient
double totalFee(double, double); // Out-Patient
void displayMenu();

int main()
{
	// Input Variables
	char choice;
	double medication, service, days, rate;

	// Handle the Menu
	displayMenu();
	cin >> choice;

	// Validate Choice
	while (choice != '1' && choice != '2')
	{
		cout << endl << "-Invalid Selection-" << endl << endl;
		displayMenu();
		cin >> choice;
	}

	// Get the Input
	cout << endl; // Spacing Between Menu Input
	cout << "Enter the medication fees: $";
	cin >> medication;

	cout << "Enter the service fees: $";
	cin >> service;

	// Format the Output
	cout << setprecision(2) << fixed << showpoint;

	// Check for In-Patient
	if (choice == '1')
	{
		cout << "Enter the number of days stayed: #";
		cin >> days;

		cout << "Enter the daily rate fee: $";
		cin >> rate;

		cout << endl << "The total charges are: $" << totalFee(medication, service, days, rate);
	}
	else // Out-Patient
	{
		cout << endl << "The total charges are: $" << totalFee(medication, service);
	}

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// Function Definitions ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

double totalFee(double meds, double serv, int day, double rate)
{
	return meds + serv + day * rate;
}

double totalFee(double meds, double serv)
{
	return meds + serv;
}

void displayMenu()
{
	cout << "-Hospital Service Menu-" << endl;
	cout << "1. In-Patient" << endl;
	cout << "2. Out-Patient" << endl;
	cout << "Enter your choice: ";
}