#include "ComputerChoices.h"

//Check if computer can win the game on this move
bool winTry(char * gameBoard) {
	//This "for" loop checks each row in the board to see if any row has 2 spaces belonging to the computer and a third unclaimed space
	//If it does, claim that third space for the computer to win and return 'true' so the game knows the computer's turn is over
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

	//This "for" loop checks each column in the board to see if any column has 2 spaces belonging to the computer and a third unclaimed space
	//If it does, claim that third space for the computer to win and return 'true' so the game knows the computer's turn is over
	for (int i = 0; i <= 2; i += 1) {
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

	//Each "if" checks a possible diagonal combination on the board and if two spaces on the diagonal are owned by the computer
	//and the third is empty/free, it claims it for the computer to win and returns 'true' so the game knows the computer's turn is over
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
	//If no move has been made (the computer could not win this turn) return false (this will allow the next computer function to run)
	return false;
}

//If the computer could not win that turn, check to see if the user needs to be blocked
bool blockUser(char * gameBoard) {
	
	//This "for" loop checks each row in the board to see if any row has 2 spaces belonging to the user and a third unclaimed space
	//If it does, claim that third space for the computer to block the user from winning and return 'true' so the game knows the computer's turn is over
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

	//This "for" loop checks each column in the board to see if any column has 2 spaces belonging to the user and a third unclaimed space
	//If it does, claim that third space for the computer to block the user from winning and return 'true' so the game knows the computer's turn is over
	for (int i = 0; i <= 2; i += 1) {
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

	//Each "if" checks a possible diagonal combination on the board and if two spaces on the diagonal are owned by the user
	//and the third is empty/free, it claims it for the computer to block the user and returns 'true' so the game knows the computer's turn is over
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
	//If the computer did not need to block the user, and thus has not moved, return false so the game knows to run the next function
	return false;
}

//Set the computer up to choose the most logical space to pre-emptively decrease the user's chances of winning and/or increase its odds of winning
bool chooseLogicalSpace(char * gameBoard) {
	//If the user chooses a corner choose the opposite corner to reduce chance of winning by getting a third corner and being impossible to block
	//and if both corners are taken then chooses one of the other corners so as to prevent the user from taking the third and possibly opening up two ways to win in one move
	//Returns true if a move is made, otherwise moves on to next check
	if (gameBoard[0] == 'O') {
		if (gameBoard[8] == '9') {
			gameBoard[8] = 'X';
			return true;
		}
		if (gameBoard[2] == '3') {
			gameBoard[2] = 'X';
			return true;
		}
		if (gameBoard[6] == '7') {
			gameBoard[6] = 'X';
			return true;
		}
	}
	if (gameBoard[8] == 'O') {
		if (gameBoard[0] == '1') {
			gameBoard[0] = 'X';
			return true;
		}
		if (gameBoard[2] == '3') {
			gameBoard[2] = 'X';
			return true;
		}
		if (gameBoard[6] == '7') {
			gameBoard[6] = 'X';
			return true;
		}
	}
	if (gameBoard[2] == 'O') {
		if (gameBoard[6] == '7') {
			gameBoard[6] = 'X';
			return true;
		}
		if (gameBoard[8] == '9') {
			gameBoard[8] = 'X';
			return true;
		}
		if (gameBoard[0] == '1') {
			gameBoard[0] = 'X';
			return true;
		}
	}
	if (gameBoard[6] == 'O') {
		if (gameBoard[2] == '3') {
			gameBoard[2] = 'X';
			return true;
		}
		if (gameBoard[8] == '9') {
			gameBoard[8] = 'X';
			return true;
		}
		if (gameBoard[0] == '1') {
			gameBoard[0] = 'X';
			return true;
		}
	}
	
	//If the computer owns a corner, choose the opposite corner to try and set up more paths to possibly win
	//Return true if a move is made, or carry on to next check
	if (gameBoard[0] == 'X' && gameBoard[8] == '9') {	
		gameBoard[8] = 'X';
		return true;
	}
	if (gameBoard[8] == 'X' && gameBoard[0] == '1') {
		gameBoard[0] = 'X';
		return true;
	}
	if (gameBoard[2] == 'X' && gameBoard[6] == '7') {
		gameBoard[6] = 'X';
		return true;
	}
	if (gameBoard[6] == 'X' && gameBoard[2] == '3') {
		gameBoard[2] = 'X';
		return true;
	}

	//If the player is not playing easy mode, but no logical/strategic options currently exist for the computer, choose a random corner space if possible
	//Return true if a move is made, or false so game knows to run next function
	srand(time(NULL));
	int compChoice;
	bool valid = true;
	do {
		compChoice = (rand() % 4 + 1);
		if (compChoice == 1 && gameBoard[0] == '1') {
			gameBoard[0] = 'X';
			valid = false;
			return true;
		}
		if (compChoice == 2 && gameBoard[2] == '3') {
			gameBoard[2] = 'X';
			valid = false;
			return true;
		}
		if (compChoice == 3 && gameBoard[6] == '7') {
			gameBoard[6] = 'X';
			valid = false;
			return true;
		}
		if (compChoice == 4 && gameBoard[8] == '9') {
			gameBoard[8] = 'X';
			valid = false;
			return true;
		}

	} while (valid);
	return false;
}

//Function runs on easy mode to choose a random space for the computer (it's not TRYING actively to beat the player)
bool chooseRandSpace(char * gameBoard) {
	//Advance randomizer seed froward by value of run time
	srand(time(NULL));
	int compChoice;
	bool valid = true;
	do {
		//Use rand to get a choice between position 0-8 and see if it is already occupied -  
		//if available claim the spot, keep running until another, valid spot is chosen
		compChoice = (rand() % 9);
		if (gameBoard[compChoice] != 'O' && gameBoard[compChoice] != 'X') {
			gameBoard[compChoice] = 'X';
			valid = false;
			return true;
		}
	} while (valid);
	return false;
}
