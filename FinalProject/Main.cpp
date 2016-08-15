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
	//Prompt user for their name
	cout << endl << "Please enter your name: " << endl;
	getline(cin, Username);
	//Run the game at least once, then keep running it IF the user chooses to play again
	do{
		//Set playingGame back to false so game will only run again if user chooses to play again later
		playingGame = false;
		//Set endOfGame back to -1 to trigger false, turn number back to 1, user's move back to false, and easy mode back to false
		endOfGame = -1;
		turnNum = 1;
		userMove = -1;
		easyMode = false;
		
		//Ask user if they want to play in easy mode (and keep prompting until valid input is given)
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
		//Print the empty game board
		showBoard(gameBoard);
		
		//Play the game
		do{
			//IF the turn number is an odd number, it's the computer's turn
			if(turnNum % 2 != 0) {
				//Set turnOver to false (so program knows when the computer has made a move, later)
				turnOver = false;
				cout << "Computer's turn..." << endl;
				//Run winTry method
				turnOver = winTry(gameBoard);
				//If the computer didn't make a move in winTry, and the user isn't playing easy mode, run blockUser method
				if (turnOver == false && easyMode == false) {
					turnOver = blockUser(gameBoard);
				}
				//If the computer didn't make a move yet, and the user isn't playing easy mode, run chooseLogicalSpace
				if (turnOver == false && easyMode == false) {
					turnOver = chooseLogicalSpace(gameBoard);
				}
				//If the computer didn't make a move yet, and the user isn't playing easy mode, run chooseRandSpace
				if (turnOver == false && easyMode == true) {
					turnOver = chooseRandSpace(gameBoard);
				}
			}
			//ELSE it's the user's turn
			else{
				//Rest validSpace to false (would still be 'true' from previous turn)
				validSpace = false;
				do {
					//Prompt user to choose a valid game board space and keep prompting until a valid number/space is chosen
					cout << Username << " please enter what space number you want to choose." << endl << "This must be an unclaimed space" << endl;
					cin >> userMove;
					while(userMove < 1 || userMove > 9) {
						cout << "Please choose a valid space number." << endl;
						cin >> userMove;
					}
					//checkSpace returns a true/false to signal if the user has chosen a valid space or not
					validSpace = checkSpace(gameBoard, userMove);
				}while (!validSpace);
				//When the user chooses a valid space, makeMove updates the space to be theirs
				makeMove(gameBoard, userMove);
			}
			//Print the game board after each turn
			showBoard(gameBoard);
			//Run winCheck to see if either player has won the game
			endOfGame = winCheck(gameBoard, playerIcon, computerIcon);
			//Increase the turn number
			turnNum++;
		}while(endOfGame == -1 && turnNum < 10);

		//Display winner
		if (endOfGame == 1) {
			cout << "Computer wins!" << endl;
		}
		else if (endOfGame == 0) {
			cout << Username << " won!" << endl;
		}
		else {
			cout << "Tie!" << endl;
		}

		//Once the game is over, prompt the user to play again (and keep prompting until valid input is given)
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
	//Exit
	system("Pause");
}
