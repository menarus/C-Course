/*
Project			: 3-25 Word Game
Author			: Mohammad Al-Husseini
Description		: Creates a Mad Lib
Inputs			: Name, Age, City, College, Profession, Animal, Pet's Name
Display			: Mad Lib
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	const int SIZE = 31;

	// Variables for Input
	char name[SIZE];
	int age;
	char city[SIZE];
	char college[SIZE];
	char profession[SIZE];
	char animal[SIZE];
	char pet[SIZE];

	// Get User Input
	cout << "Enter a name: ";
	cin.getline(name, SIZE); // Want to account for white space

	cout << "Enter a number: ";
	cin >> age;
	
	cout << "Enter a city: ";
	cin.ignore(); // Ignore the whitespace left by age, so we can getline
	cin.getline(city, SIZE);

	cout << "Enter a college: ";
	cin.getline(college, SIZE);

	cout << "Enter a profession: ";
	cin.getline(profession, SIZE);

	cout << "Enter an animal: ";
	cin.getline(animal, SIZE);

	cout << "Enter a pet's name: ";
	cin.getline(pet, SIZE);

	// Display Result
	cout << endl << "There once was a person named " << name << " who lived in " << city << "." << endl;
	cout << "At the age of " << age << ", " << name << " went to college at " << college << "." << endl;
	cout << name << " graduated and went to work as a(n) " << profession << "." << endl;
	cout << "Then, " << name << " adopted a(n) " << animal << " named " << pet << "." << endl;
	cout << "They both lived happily ever after!";

	return 0;
}