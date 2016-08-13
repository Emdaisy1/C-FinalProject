#include "ComputerChoices.h"
#include "UserChoices.h"

//check for win and display game board functions

int winCheck(char * gameBoard, char& playerIcon, char& computerIcon) {
	//return of 0 means player wins, 1 means computer wins, -1 is no win

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

	return -1;
}

//displays game board
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