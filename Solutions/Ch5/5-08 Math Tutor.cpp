/*
Project			: 5-8 Math Tutor
Author			: Mohammad Al-Husseini
Description		: Modifies previous math tutor to display a repeating menu allowing for
				  addition, subtraction, multiplication, and division
Knowns			: 2x Random Numbers - Int
Inputs			: Answer - Int
				  Menu	 - Char
Display			: 2x Random Numbers - Int
				  Menu
				  Answer - Int
Validation		: Menu Choice
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <cstdlib>  // random numbers
#include <ctime>    // time to seed the random numbers
using namespace std;

int main()
{
	// Create variables to hold the random numbers
	int num1, num2;

	// Variable for User Input
	int result;

	// Seed the random number
	unsigned seed = time(0); // 0 indicates current time at run-time
	srand(seed);

	// Menu Loop Structure
	char choice; // Char for better validation
				 // Remember to check for chars, not ints!

	do
	{
		cout << "-Math Tutor-"		<< endl;
		cout << "1. Addition"		<< endl;
		cout << "2. Subtraction"	<< endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division"		<< endl;
		cout << "5. Exit"			<< endl << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;

		// Validate Input
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5')
		{
			cout << "Invalid Choice - Enter (1-5): ";
			cin >> choice;
		}

		// Generate the random numbers
		num1 = rand();
		num2 = rand();

		// Determine Problem Based on Choice
		switch (choice)
		{
			case '1':

				// Display the numbers
				cout << "  " << num1 << endl;
				cout << "+ " << num2 << endl;
				cout << "__________" << endl;
				cout << "  ";

				// Wait for user input
				cin >> result;

				// Determine if answer was correct
				if (result == num1 + num2)
					cout << endl << "Congratulations! That is correct, good job!" << endl << endl;
				else
					cout << "  " << num1 + num2 << " is the correct answer." << endl << endl;

				break;

			case '2':

				// Display the numbers
				cout << "  " << num1 << endl;
				cout << "- " << num2 << endl;
				cout << "__________" << endl;
				cout << "  ";

				// Wait for user input
				cin >> result;

				// Determine if answer was correct
				if (result == num1 - num2)
					cout << endl << "Congratulations! That is correct, good job!" << endl << endl;
				else
					cout << "  " << num1 + num2 << " is the correct answer." << endl << endl;

				break;

			case '3':

				// Display the numbers
				cout << "  " << num1 << endl;
				cout << "x " << num2 << endl;
				cout << "__________" << endl;
				cout << "  ";

				// Wait for user input
				cin >> result;

				// Determine if answer was correct
				if (result == num1 * num2)
					cout << endl << "Congratulations! That is correct, good job!" << endl << endl;
				else
					cout << "  " << num1 + num2 << " is the correct answer." << endl << endl;

				break;

			case '4':

				// Display the numbers
				cout << "  " << num1 << endl;
				cout << static_cast<char>(246) << " " << num2 << endl;
				cout << "__________" << endl;
				cout << "  ";

				// Wait for user input
				cin >> result;

				// Determine if answer was correct
				if (result == num1 / num2)
					cout << endl << "Congratulations! That is correct, good job!" << endl << endl;
				else
					cout << "  " << num1 + num2 << " is the correct answer." << endl << endl;

				break;
		}

	} while (choice != '5');

	// No longer need a breakpoint, because of the menu (only exits on 5)
	return 0;
}
