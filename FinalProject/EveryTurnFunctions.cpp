#include "ComputerChoices.h"
#include "UserChoices.h"

//Check to see if either the computer or user has won
int winCheck(char * gameBoard, char& playerIcon, char& computerIcon) {
	//Return of 0 means player wins, 1 means computer wins, -1 is no win
	
	//Check each row - if all values are the same, see if they match the player or computer icon
	//Return the appropriate value (0 or 1) depending on who has all 3 spaces
	for (int i = 0; i <= 6; i += 3) {
		if (gameBoard[i] == gameBoard[i + 1] && gameBoard[i] == gameBoard[i + 2]) {
			if (gameBoard[i] == playerIcon) {
				return 0;
			}
			else if (gameBoard[i] == computerIcon) {
				return 1;
			}
		}
	}

	//Check each column - if all values are the same, see if they match the player or computer icon
	//Return the appropriate value (0 or 1) depending on who has all 3 spaces
	for (int i = 0; i <= 2; i += 1) {
		if (gameBoard[i] == gameBoard[i + 3] && gameBoard[i] == gameBoard[i + 6]) {
			if (gameBoard[i] == playerIcon) {
				return 0;
			}
			else if (gameBoard[i] == computerIcon) {
				return 1;
			}
		}
	}

	//Each "if" checks one set of diagonals to see if all 3 values are the same, checks if they match the player or computer icon
	//Returns the appropriate value (0 or 1) depending on who has all 3 spaces
	if (gameBoard[0] == gameBoard[4] && gameBoard[0] == gameBoard[8]) {
		if (gameBoard[0] == playerIcon) {
			return 0;
		}
		else if (gameBoard[0] == computerIcon) {
			return 1;
		}
	}
	if (gameBoard[2] == gameBoard[4] && gameBoard[2] == gameBoard[6]) {
		if (gameBoard[2] == playerIcon) {
			return 0;
		}
		else if (gameBoard[2] == computerIcon) {
			return 1;
		}
	}

	//If no winner was found, return -1
	return -1;
}

//Prints game board
void showBoard(char * gameBoard) {
	cout << endl;
	for (int i = 0; i < 9; i+=3)
	{
		cout << gameBoard[i] << " | " << gameBoard[i + 1] << " | " << gameBoard[i + 2] << endl;
		if (i < 6) {
			cout << "- | - | -" << endl;
		}
	}
	cout << endl;
}
