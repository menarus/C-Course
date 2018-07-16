/*
Project			: 7-17 Tic Tac Toe Game
Author			: Mohammad Al-Husseini
Description		: Allows two players to play tic tac toe, entering a row and column to replace a * with a X or O.
Givens			: 3 x 3  2D char array
				  Player 1 - X
				  Player 2 - O
				  Empty    - *
Inputs			: Row and Column
Display			: Board and if anyone has won
Validation		: Valid Move     (Can't replace a non *)
				  Valid Position (Inside the 3x3)
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> // cout and cin objects for command line output/input
using namespace std;

// Array Constants
const int ROW = 3;
const int COL = 3;

// Function Prototypes
void displayBoard(char[ROW][COL]);
void getMove(char[ROW][COL], int);
bool checkTie(char[ROW][COL]);
bool checkWin(char[ROW][COL], int);

int main()
{
	///////////////////////////////////////////////////////////////////////////////////////////////
	// Create and Initialize the Array ////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////

	char board[ROW][COL];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			board[i][j] = '*';
		}
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	// Run the Game ///////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////

	// Display Welcome
	cout << "Welcome to Tic-Tac-Toe!" << endl;

	// Display the Board
	displayBoard(board);

	// Player Variable
	int player = 2; // Start 2 for the Loop Condition

	// Game Loop
	while (checkTie(board) == false && checkWin(board, player) == false)
	{
		// Switch Players
		if (player == 1)
		{
			player = 2;
		}
		else
		{
			player = 1;
		}

		// Get the Input
		getMove(board, player);
	}

	// Display the Appropriate Message
	if (checkWin(board, 1))
	{
		cout << endl << "Congratulations Player 1! You won!";
	}
	else if (checkWin(board, 2))
	{
		cout << endl << "Congratulations Player2! You won!";
	}
	else
	{
		cout << endl << "The Game has Ended in a Tie.";
	}

	return 0;
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////
/   Description: Displays the current state of the board                                          /
/   Parameters : The board to be displayed - 2D Char Array                                        /
*//////////////////////////////////////////////////////////////////////////////////////////////////

void displayBoard(char board[ROW][COL])
{
	cout << "\n   -Current Board-" << endl << endl;

	for (int i = 0; i < ROW; i++)
	{
		cout << "\t";

		for (int j = 0; j < COL; j++)
		{
			cout << board[i][j] << " ";
		}

		cout << endl;
	}
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////
/   Description: Get the player's input and place their marker                                    /
/   Parameters : The board to be changed  - 2D Char Array                                         /
/                The changing player's ID - int (1 or 2)                                          /
*//////////////////////////////////////////////////////////////////////////////////////////////////

void getMove(char board[ROW][COL], int player)
{
	// Input Variables
	int row, col;

	// Marker Variable
	char marker;

	if (player == 1)
	{
		marker = 'X';
	}
	else
	{
		marker = 'O';
	}

	// Get the Input
	cout << "Player " << player << "- Enter a row and col: ";
	cin >> row >> col;

	// Validate
	if (row > 3 || row < 1 || col > 3 || col < 1 || board[row - 1][col - 1] != '*')
	{
		cout << endl << "-Invalid-\n Enter a row and col between 1-3, with an *, and seperated by a space: ";
		cin >> row >> col;
	}

	// Change the Board
	board[row - 1][col - 1] = marker;

	// Display the Board
	displayBoard(board);
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////
/   Description: Checks for the game ending in a tie condition                                    /
/   Parameters : The board to be changed  - 2D Char Array                                         /
/   Return     : True - Tie Exists		|		False - Game Continues                            /
*//////////////////////////////////////////////////////////////////////////////////////////////////

bool checkTie(char board[ROW][COL])
{
	// Check if board is full
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			// If an * still exists, there cannot be a tie
			if (board[i][j] == '*')
			{
				return false;
			}
		}
	}
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////
/   Description: Checks if the player won the game                                                /
/   Parameters : The board to be changed  - 2D Char Array                                         /
/                The player's ID - int (1 or 2)                                                   /
/   Return     : True - The Player Wins		|	False - Game Continues                            /
*//////////////////////////////////////////////////////////////////////////////////////////////////

bool checkWin(char board[ROW][COL], int player)
{
	// Marker Variable
	char marker;

	if (player == 1)
	{
		marker = 'X';
	}
	else
	{
		marker = 'O';
	}

	// Check for Horizontal Victory
	for (int i = 0; i < ROW; i++)
	{
		if (board[i][0] == marker && board[i][1] == marker && board[i][2] == marker)
		{
			return true;
		}
	}

	// Check for Vertical Victory
	for (int i = 0; i < COL; i++)
	{
		if (board[0][i] == marker && board[1][i] == marker && board[2][i] == marker)
		{
			return true;
		}
	}

	// Check for the \ Diagonal Victory
	if (board[0][0] == marker && board[1][1] == marker && board[2][2] == marker)
	{
		return true;
	}

	// Check for the / Diagonal Victory
	if (board[0][2] == marker && board[1][1] == marker && board[2][0] == marker)
	{
		return true;
	}

	// Otherwise, No Victory
	return false;
}