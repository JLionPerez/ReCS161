//CFBoard.hpp is the CFBoard class specification file.
#ifndef CFBOARD_HPP
#define CFBOARD_HPP

enum gameState {X_WON, O_WON, DRAW, UNFINISHED};

class CFBoard {
	
	private:
	
		char board[6][7];
		gameState state;
	
	public:
		
		bool makeMove(int column, char piece); //records move
		gameState updateGameState(int row, int column); //updates state
		
		char getBoard(); //getter
		void printBoard(); //prints out board
		
		gameState getGameState(); //getter
		void setGameState(gameState s); //setter
		
		void initBoard(); //initializes board with dots
		
		CFBoard(); //default constructor
		CFBoard(gameState s); //overloaded constructor
	
};
#endif