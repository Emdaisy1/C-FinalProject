#include "ComputerChoices.h"

//Check if computer can win first, if not, THEN check is user needs to be blocked, if neither, then choose best option

bool winTry(char * gameBoard) {
	cout << "Win try" << endl;
	for (int i = 0; i <= 6; i += 3) {
		if (gameBoard[i] == 'X' && gameBoard[i + 1] == 'X' && gameBoard[i + 2] != 'O' ) {
			gameBoard[i + 2] = 'X';
			return true;
		}
		if (gameBoard[i + 1] == 'X' && gameBoard[i + 2] == 'X' && gameBoard[i] != 'O' ) {
			gameBoard[i] = 'X';
			return true;
		}

		if (gameBoard[i] == 'X' && gameBoard[i + 2] == 'X' && gameBoard[i + 1] != 'O' ) {
			gameBoard[i + 1] = 'X';
			return true;
		}
	}

	for (int i = 0; i <= 6; i += 3) {
		if (gameBoard[i] == 'X' && gameBoard[i + 3] == 'X' && gameBoard[i + 6] != 'O' ) {
			gameBoard[i + 6] = 'X';
			return true;
		}

		if (gameBoard[i + 3] == 'X' && gameBoard[i + 6] == 'X' && gameBoard[i] != 'O' ) {
			gameBoard[i] = 'X';
			return true;
		}

		if (gameBoard[i] == 'X' && gameBoard[i + 6] == 'X' && gameBoard[i + 3] != 'O' ) {
			gameBoard[i + 3] = 'X';
			return true;
		}
	}

	if (gameBoard[0] == 'X' && gameBoard[4] == 'X' && gameBoard[8] == '9') {
		gameBoard[8] = 'X';
		return true;
	}
	if (gameBoard[4] == 'X' && gameBoard[8] == 'X' && gameBoard[0] == '1') {
		gameBoard[0] = 'X';
		return true;
	}
	if (gameBoard[0] == 'X' && gameBoard[8] == 'X' && gameBoard[4] == '5') {
		gameBoard[4] = 'X';
		return true;
	}

	if (gameBoard[6] == 'X' && gameBoard[4] == 'X' && gameBoard[2] == '3') {
		gameBoard[2] = 'X';
		return true;
	}
	if (gameBoard[4] == 'X' && gameBoard[2] == 'X' && gameBoard[6] == '7') {
		gameBoard[6] = 'X';
		return true;
	}
	if (gameBoard[2] == 'X' && gameBoard[6] == 'X' && gameBoard[4] == '5') {
		gameBoard[4] = 'X';
		return true;
	}
	return false;
}

bool blockUser(char * gameBoard) {
	cout << "Block user" << endl;
	for (int i = 0; i <= 6; i += 3) {
		if (gameBoard[i] == 'O' && gameBoard[i + 1] == 'O' && gameBoard[i + 2] != 'O' && gameBoard[i + 2] != 'X' ) {
			gameBoard[i + 2] = 'X';
			return true;
		}

		if (gameBoard[i + 1] == 'O' && gameBoard[i + 2] == 'O' && gameBoard[i] != 'O' && gameBoard[i] != 'X' ) {
			gameBoard[i] = 'X';
			return true;
		}

		if (gameBoard[i] == 'O' && gameBoard[i + 2] == 'O' && gameBoard[i + 1] != 'O' && gameBoard[i + 1] != 'X' ) {
			gameBoard[i + 1] = 'X';
			return true;
		}
	}

	for (int i = 0; i <= 6; i += 3) {
		if (gameBoard[i] == 'O' && gameBoard[i + 3] == 'O' && gameBoard[i + 6] != 'O' && gameBoard[i + 6] != 'X') {
			gameBoard[i + 6] = 'X';
			return true;
		}

		if (gameBoard[i + 3] == 'O' && gameBoard[i + 6] == 'O' && gameBoard[i] != 'O' && gameBoard[i] != 'X') {
			gameBoard[i] = 'X';
			return true;
		}

		if (gameBoard[i] == 'O' && gameBoard[i + 6] == 'O' && gameBoard[i + 3] != 'O' && gameBoard[i + 3] != 'X') {
			gameBoard[i + 3] = 'X';
			return true;
		}
	}

	if (gameBoard[0] == 'O' && gameBoard[4] == 'O' && gameBoard[8] == '9') {
		gameBoard[8] = 'X';
		return true;
	}
	if (gameBoard[4] == 'O' && gameBoard[8] == 'O' && gameBoard[0] == '1') {
		gameBoard[0] = 'X';
		return true;
	}
	if (gameBoard[0] == 'O' && gameBoard[8] == 'O' && gameBoard[4] == '5') {
		gameBoard[4] = 'X';
		return true;
	}
	if (gameBoard[6] == 'O' && gameBoard[4] == 'O' && gameBoard[2] == '3') {
		gameBoard[2] = 'X';
		return true;
	}
	if (gameBoard[4] == 'O' && gameBoard[2] == 'O' && gameBoard[6] == '7') {
		gameBoard[6] = 'X';
		return true;
	}
	if (gameBoard[6] == 'O' && gameBoard[2] == 'O' && gameBoard[4] == '5') {
		gameBoard[4] = 'X';
		return true;
	}
	return false;
}

void computerMove(char * gameBoard) {
	cout << "Couldn't win or block user";
}