#include "ComputerChoices.h"
int main() {
	//Set up global variables
	bool playingGame = false;
	string playAgain;
	char computerIcon, playerIcon;
	bool endOfGame = false;
	//Run the game at least once, then keep running it IF the user chooses to play again
	do{
		//Set playingGame back to false so game will only run again if user chooses to play again later
		playingGame = false;
		//Create an empty game board
		char gameBoard[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		//Computer set to'X'and user set to O
		computerIcon = 'X';
		playerIcon = 'O';

		//Notify user computer will start
		cout << "The computer will begin the game.";

		showBoard(gameBoard);
		
		//Play the game
		do {
			winTry(gameBoard);
			showBoard(gameBoard);
			endOfGame = winCheck(gameBoard);
		} while (endOfGame);

		//Once the game is over, prompt the user to play again
		cout << "Would you like to play again? Enter 'y' or 'n'." << endl;
		getline(cin, playAgain);
		playAgain = tolower(playAgain.at(0));
		while (playAgain != "y" && playAgain != "n") {
			cout << endl << "Please enter a valid input of 'y' or 'n'." << endl;
			getline(cin, playAgain);
			playAgain = tolower(playAgain.at(0));
		}
		if (playAgain == "y") {
			playingGame = true;
		}
	} while (playingGame);
	//Bid the user farewell
	cout << "Thanks for playing!" << endl << "Goodbye!" << endl;
	system("Pause");
}