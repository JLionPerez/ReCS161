/***********************************
** Author: Joelle Perez
** Date: 5/30/2018
** Description: This program lets two players play connect four.
***********************************/

#include <iostream>
#include "CFBoard.hpp"

using std::cout;
using std::cin;
using std::endl;

CFBoard::CFBoard() {	//default constructor
	
	gameState state = UNFINISHED;
	initBoard();
}

CFBoard::CFBoard(gameState s) { //overloaded constructor
	setGameState(s);
}	

/********************************
** Description: This function returns the board to the rest of the program.
********************************/
char CFBoard::getBoard() { //getter
	return board[6][7];
}

/********************************
** Description: This function sets the gameState to either of the options when updated.
********************************/
void CFBoard::setGameState(gameState s) { //setter
	state = s;
}

/********************************
** Description: This funtion returns the state of the game from the private section.
********************************/
gameState CFBoard::getGameState() { //getter
	return state;
}

/********************************
** Description: This function initializes the board with empty slots in the beginning of the game.
********************************/
void CFBoard::initBoard() { //initialize board with dots

	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 7; j++) {
			board[i][j] = '.';
		}
	}
}

/********************************
** Description: This function prints out the board when testing.
********************************/
void CFBoard::printBoard() {		//prints board (optional)
	
	cout << " 1  2  3  4  5  6  7 " << endl; //numbers for columns on board
	
	for(int i = 0; i < 6; i++) {		
		for(int j = 0; j < 7; j++) {
			cout << " " << board[i][j] << " ";
		}
		cout << endl;
	}
}

/********************************
** Description: This function records when a new move has been made.
********************************/
bool CFBoard::makeMove(int column, char piece) { //records moves
	
	for(int i = 0; i < 7; i++){
		if (state != UNFINISHED && board[0][i] != '.') {
			
			return false;
		}
	}
	
	if(column <= 7 && column >= 1) { //error bounds checking
		for(int i = 6; i >= 0; i--) {
			if(board[i][column - 1] == '.') {
				board[i][column - 1] = piece;
				break;
			}
		}
	}
	
	return true;
}

/********************************
** Description: This function updates the status of the game and returns that state.
********************************/
gameState CFBoard::updateGameState(int row, int column) { //needs development
	
	char start = board[row][column];
	
	for(int i = 0; i < 4; i++){
		if(row <= 2){
			if(board[row + i][column] != start) { //horizontal match
				setGameState(DRAW);
				cout << "draw" << endl;
					if (start == 'o') {
						setGameState(O_WON);
					}
					
					if (start == 'x') {
						setGameState(X_WON);
					}
			}
		}
			
		if(column <= 3){
			if(board[row][column + i] != start) { //vertical match
				setGameState(DRAW);
					if (start == 'o') {
						setGameState(O_WON);
					}
					
					if (start == 'x') {
						setGameState(X_WON);
					}
			}
		}
			
		if(column <= 3 && row >= 2) {	
			if(board[row + i][column + i] != start) { //diagonal up
				setGameState(DRAW);
				cout << "draw" << endl;
						setGameState(O_WON);
					}
					
					if (start == 'x') {
						setGameState(X_WON);
					}
			}
		}
			
		if(column >= 3 && row <= 2) {
			if(board[row + i][column - i] != start) { //diagonal down
				setGameState(DRAW);
					if (start == 'o') {
						setGameState(O_WON);
					}
					
					if (start == 'x') {
						setGameState(X_WON);
					}
			}
		}
	}
}

int main() {
	
	CFBoard cfb;
	cfb.makeMove(2, 'o');
	cfb.makeMove(3, 'o');
	cfb.makeMove(4, 'o');
	cfb.makeMove(5, 'o');
	
	cfb.printBoard();
	
	return 0;
}