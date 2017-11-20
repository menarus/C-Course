/*
Project			: 4-17 Geometry Calculator
Author			: Mohammad Al-Husseini
Description		: Menu driven, allows the user to calculate the area of a circle, rectangle, and triangle.
Knowns			: area_circle = pi * r^2
				  area_rectangle = length * width
				  area_triangle = base * height * 0.5
Inputs			: choice - char

				  radius - double

				  length - double
				  width - double

				  base - double
				  height - double
Display			: Menu
				  Area
Validation		: choice must be between 1-4
				  Non-negative measurements
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format output
using namespace std;

int main()
{
	// Constant for PI
	const double PI = 3.14159;

	// Menu Variable
	char choice;

	// Display Menu and Get Choice
	cout << "Geometry Calculator" << endl << endl;
	cout << "\t1. Calculate the Area of a Circle" << endl;
	cout << "\t2. Calculate the Area of a Rectangle" << endl;
	cout << "\t3. Calculate the Area of a Triangle" << endl;
	cout << "\t4. Quit" << endl << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	// Format Output
	cout << setprecision(2) << fixed;

	// Decide which Menu Option
	switch (choice)
	{
		case '1':

			// Get Circle Measurements
			double radius;

			cout << endl << "Circle" << endl;
			cout << "Enter the radius: ";
			cin >> radius;

			// Validate Radius
			if (radius < 0)
			{
				cout << "Measurements must be non-negative!";
				break; // We could use return here, but it will go to the one below
			}
			
			cout << "The area of the circle is: " << PI * pow(radius, 2);
			break;

		case '2':

			// Get Rectangle Measurements
			double length, width;

			cout << endl << "Rectangle" << endl;
			cout << "Enter the length and width seperated by a space: ";
			cin >> length >> width;

			// Validate Length and Width
			if (length < 0 || width < 0)
			{
				cout << "Measurements must be non-negative!";
				break;
			}

			cout << "The area of the rectangle is: " << length * width;
			break;

		case '3':

			// Get the Triangle Measurements
			double height, base;

			cout << endl << "Triangle" << endl;
			cout << "Enter the base and height seperated by a space: ";
			cin >> base >> height;

			// Validate Base and Height
			if (base < 0 || height < 0)
			{
				cout << "Measurements must be non-negative!";
				break;
			}

			cout << "The area of the triangle is: " << 0.5 * base * height;
			break;

		case '4':

			// Quit
			cout << endl << "Exiting Program.";
			break;

		default:

			// Wrong Input
			cout << endl << "Invalid Choice. You must enter 1-4.";
			break;
	}

	return 0;
}