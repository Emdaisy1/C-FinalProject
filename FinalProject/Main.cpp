#include "ComputerChoices.h"
#include "UserChoices.h"

int main() {
	//Set up global variables
	bool playingGame = false;
	string playAgain, easyChoose, Username;
	char computerIcon, playerIcon;
	int endOfGame = -1;
	bool validSpace, turnOver, easyMode;
	int userMove, turnNum;
	//Run the game at least once, then keep running it IF the user chooses to play again
	cout << endl << "Please enter your name: " << endl;
	getline(cin, Username);
	do{
		//Set playingGame back to false so game will only run again if user chooses to play again later
		playingGame = false;
		endOfGame = -1;
		turnNum = 1;
		userMove = -1;
		easyMode = false;
		
		//ask user if they want to play in easy mode
		cout << endl << "Would you like to play on easy? Enter 'y' or 'n'." << endl;
		getline(cin, easyChoose);
		easyChoose = tolower(easyChoose.at(0));
		while (easyChoose != "y" && easyChoose != "n") {
			cout << endl << "Please enter a valid input of 'y' or 'n'." << endl;
			getline(cin, easyChoose);
			easyChoose = tolower(easyChoose.at(0));
		}
		if (easyChoose == "y") {
			easyMode = true;
		}
		
		//Create an empty game board
		char gameBoard[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		//Computer set to'X'and user set to O
		computerIcon = 'X';
		playerIcon = 'O';

		//Notify user computer will start
		cout << "The computer will begin the game." << endl;

		showBoard(gameBoard);
		
		//Play the game
		do{
			cout << "Turn num: " << turnNum << endl;
			if(turnNum % 2 != 0) {
				turnOver = false;
				cout << "Computer's turn..." << endl;
				turnOver = winTry(gameBoard);
				if (turnOver == false && easyMode == false) {
					turnOver = blockUser(gameBoard);
				}
				if (turnOver == false && easyMode == false) {
					turnOver = choseLogicalSpace(gameBoard);
				}
				if (turnOver == false && easyMode == true) {
					turnOver = choseRandSpace(gameBoard);
				}
				if (turnOver == false) {
					computerMove(gameBoard);
				}
			}
			else{
				validSpace = false;
				do {
					cout << Username << " please enter what space number you want to choose." << endl << "This must be an unclaimed space" << endl;
					cin >> userMove;
					while(userMove < 1 || userMove > 9) {
						cout << "Please choose a valid space number." << endl;
						cin >> userMove;
					}
					validSpace = checkSpace(gameBoard, userMove);
				}while (!validSpace);

				makeMove(gameBoard, userMove);
			}
			showBoard(gameBoard);
			endOfGame = winCheck(gameBoard, playerIcon, computerIcon);
			turnNum++;
		}while(endOfGame == -1 && turnNum < 10);

		//Display winner
		if (endOfGame == 1) {
			cout << "Computer wins!" << endl;
		}
		else if (endOfGame == 0) {
			cout << Username << " Won!" << endl;
		}
		else {
			cout << "Tie!" << endl;
		}

		//Once the game is over, prompt the user to play again
		cin.ignore();
		cout << Username << ", would you like to play again? Enter 'y' or 'n'." << endl;
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
	cout << "Thanks for playing!" << endl << "Goodbye "<< Username <<"!" << endl;
	system("Pause");
}
