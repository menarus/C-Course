/*
Project			: 5-9 Hotel Occupancy
Author			: Mohammad Al-Husseini
Description		: Asks the user how many floors a hotel has
				  Iterates for each floor asking how many total rooms and occupied rooms
				  Displays total rooms, occupied rooms, unoccupied rooms, and percent occupied
Knowns			: 13th Floor is skipped
Inputs			: Number of Floors - Int
				  Rooms on Floor - Int
				  Occupied Rooms on Floor - Int
Display			: Total Rooms - Int
				  Occupied Rooms - Int
				  Unoccupied Rooms - Int
				  Percent Occupied - Double
Validation		: Number of Floors Not Less Than 1
				  Rooms on Floor Not Less Than 10
				  Optional: Occupied Rooms on Floor Not Greater Than Rooms on Floor
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
#include <iomanip>  // format percentage
using namespace std;

int main()
{
	// Variables for Input
	int floors;

	int floor_rooms;
	int floor_occupied;

	// Accumulators
	int total_rooms = 0;
	int total_occupied = 0;

	// Get Input
	cout << "Enter the number of floors in the hotel: ";
	cin >> floors;

	// Validate Floors
	while (floors < 1)
	{
		// Get Input
		cout << "\tInvalid - Enter at least 1 floor: ";
		cin >> floors;
	}

	// Loop through each floor
	for (int i = 1; i <= floors; i++) // Begin on Floor 1
	{
		// Spacing
		cout << endl;

		// Skip Floor 13
		if (i == 13)
		{
			cout << "Skipping Floor 13" << endl;
			continue;
		}

		// Get Input
		cout << "Floor #" << i << " - Enter the total number of rooms on this floor: ";
		cin >> floor_rooms;

		// Validate Floor Rooms
		while (floor_rooms < 10)
		{
			// Get Input
			cout << "\tInvalid - Enter at least 10 rooms: ";
			cin >> floor_rooms;
		}

		// Accumulate Total Rooms
		total_rooms += floor_rooms;

		// Get Input
		cout << "Floor #" << i << " - Enter the number of occupied rooms on this floor: ";
		cin >> floor_occupied;

		// Optional: Validate Occupied Rooms
		while (floor_occupied > floor_rooms)
		{
			// Get Input
			cout << "\tInvalid - There are only " << floor_rooms << " rooms on this floor." << endl;
			cout << "\t          Enter the number of occupied rooms on this floor: ";
			cin >> floor_occupied;
		}

		// Accumulate Occupied Rooms
		total_occupied += floor_occupied;
	}

	// Calculate and Display
	cout << endl;
	cout << "Total rooms: " << total_rooms << endl;
	cout << "Total occupied rooms: " << total_occupied << endl;
	cout << "Total unoccupied rooms: " << total_rooms - total_occupied << endl;
	cout << "Percent of rooms occupied: " << setprecision(2) << fixed << static_cast<double>(total_occupied) / total_rooms * 100 << "%" << endl;

	return 0;
}
