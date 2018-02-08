/*
Project			: 5 - 2 ASCII Characters
Author			: Mohammad Al-Husseini
Description		: Displays the characters for ASCII codes 0-127
Display			: 16 characters on each line
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

int main()
{
	for (int i = 0; i < 128; i+= 16)
	{
		// Good, but we need to display 16 on each line, when incrementing i by 1
		//cout << "ASCII Code #" << i << ": " << static_cast<char>(i) << endl;

		for (int j = 0; j < 16; j++)
		{
			cout << static_cast<char>(i + j);
		}

		cout << endl;
	}

	return 0;
}
