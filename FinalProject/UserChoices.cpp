#include "UserChoices.h"

//Checks to ensure user has chosen a valid (unclaimed) space
bool checkSpace(char * gameBoard, int userMove) {
	if (gameBoard[userMove - 1] == 'X' || gameBoard[userMove - 1] == 'O') {
		return false;
	}
	else {
		return true;
	}
}

//Sets the game board where the user choice to the user's symbol (O)
void makeMove(char * gameBoard, int userMove) {
	gameBoard[userMove - 1] = 'O';
}



