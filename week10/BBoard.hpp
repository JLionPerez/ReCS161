//BBoard.hpp is the BBoard class specification file.
#ifndef BBOARD_HPP
#define BBOARD_HPP
// #include "Ship.cpp"
#include "Ship.hpp"

//BBoard class declaration
class BBoard {
	
	private:
		
		bool boolArray[10][10];
		Ship* shipPointers[10][10];
		int unsunk;
		
	public:
	
		bool getAttacksArrayElement(int row, int col);	//
		Ship* getShipsArrayElement(int row, int col);	//getters
		int getNumShipsRemaining();						//
		
		BBoard();	//default constructor
		BBoard(bool b, Ship* n);	//overloaded constructor
		
		// void printBoard(); 		//print board
		
		bool placeShip(Ship* ship, int row, int col, char o);	//places ship on board and recieves ship info
		bool attack(int row, int col);		//attacks, determines hit or miss
		bool allShipsSunk();	//determines unsunk equals 0
};
#endif