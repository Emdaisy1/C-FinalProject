//#include "ComputerChoices.h"
//
////Check if computer can win first, if not, THEN check is user needs to be blocked, if neither, then choose best option
//
//winTry() {
//	for (int i = 0; i <= 6; i += 3) {
//		if (gameBoard[i] == X && gameBoard[i + 1] == X && gameBoard[i + 2] = i + 3) {
//			gameBoard[i + 2] == X
//		}
//		if (gameBoard[i + 1] == X && gameBoard[i + 2] == X && gameBoard[i] = i + 1) {
//			gameBoard[i] == X
//		}
//
//		if (gameBoard[i] == X && gameBoard[i + 2] == X && gameBoard[i + 1] = i + 2) {
//			gameBoard[i + 1] == X
//		}
//	}
//
//	for (int i = 0; i <= 6; i += 3) {
//		if (gameBoard[i] == X && gameBoard[i + 3] ++X && gameBoard[i + 6] == i + 7) {
//			gameBoard[i + 6] == X
//		}
//
//		if (gameBoard[i + 3] == X && gameBoard[i + 6] ++X && gameBoard[i] == i + 1) {
//			gameBoard[i] == X
//		}
//
//		if (gameBoard[i] == X && gameBoard[i + 6] ++X && gameBoard[i + 3] == i + 4) {
//			gameBoard[i + 3] == X
//		}
//	}
//
//	if (gameBoard[0] == X && gameBoard[4] == X && gameBoard[8] == 9) {
//		gameBoard[8] == X;
//	}
//	if (gameBoard[4] == X && gameBoard[8] == X && gameBoard[0] == 1) {
//		gameBoard[0] == X;
//	}
//	if (gameBoard[0] == X && gameBoard[8] == X && gameBoard[4] == 5) {
//		gameBoard[4] == X;
//	}
//}
//
//blockUser() {
//	for (int i = 0; i <= 6; i += 3) {
//		if (gameBoard[i] == O && gameBoard[i + 1] == O && gameBoard[i + 2] = i + 3) {
//			gameBoard[i + 2] == X
//		}
//
//		if (gameBoard[i + 1] == O && gameBoard[i + 2] == O && gameBoard[i] = i + 1) {
//			gameBoard[i] == X
//		}
//
//		if (gameBoard[i] == O && gameBoard[i + 2] == O && gameBoard[i + 1] = i + 2) {
//			gameBoard[i + 1] == X
//		}
//	}
//
//	for (int i = 0; i <= 6; i += 3) {
//		if (gameBoard[i] == O && gameBoard[i + 3] ++O && gameBoard[i + 6] == i + 7) {
//			gameBoard[i + 6] == X
//		}
//
//		if (gameBoard[i + 3] == O && gameBoard[i + 6] ++O && gameBoard[i] == i + 1) {
//			gameBoard[i] == X
//		}
//
//		if (gameBoard[i] == O && gameBoard[i + 6] ++O && gameBoard[i + 3] == i + 4) {
//			gameBoard[i + 3] == X
//		}
//	}
//
//	if (gameBoard[0] == O && gameBoard[4] == O && gameBoard[8] == 9) {
//		gameBoard[8] == X;
//	}
//	if (gameBoard[4] == O && gameBoard[8] == O && gameBoard[0] == 1) {
//		gameBoard[0] == X;
//	}
//	if (gameBoard[0] == O && gameBoard[8] == O && gameBoard[4] == 5) {
//		gameBoard[4] == X;
//	}
//}