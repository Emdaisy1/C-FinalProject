#include "ComputerChoices.h"
int main() {
	bool playingGame = false;
	string playAgain;
	bool endOfGame = false;
	do{
		playingGame = false;
		char gameBoard[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		//play the game
		do {
			showBoard(gameBoard);
			endOfGame = winCheck();
		} while (endOfGame);

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
	cout << "Thanks for playing!" << endl << "Goodbye!" << endl;
	system("Pause");
}