#include "ComputerChoices.h"

//check for win and display game board functions

bool winCheck() {
	if (true) { //placeholder
		return false;
	}
	else
	{
		return true;
	}
}

void showBoard(char * gameBoard) {
	for (int i = 0; i < 9; i+=3)
	{
		cout << gameBoard[i] << " | " << gameBoard[i + 1] << " | " << gameBoard[i + 2] << endl;
		if (i < 6) {
			cout << "- | - | -" << endl;
		}
	}
	cout << endl;
}