/*************************************************
** Author: Joelle Perez
** Date: 6/8/2018
** Description: This program lets a user make a ship then place it on the board and have another attack the ship, a simple Battleship game.
**************************************************/

#include <iostream>
#include "BBoard.hpp"
// #include "Ship.cpp"
// #include <sstream>

using std::cout;
using std::cin;
using std::endl;

BBoard::BBoard() {	//default constructor
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			boolArray[i][j] = false; 	
		}
	}
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			shipPointers[i][j] = NULL;	
		}
	}
	
	unsunk = 0;
}

BBoard::BBoard(bool b, Ship* n) {	//overloaded constructor
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			boolArray[i][j] = b; 	
		}
	}
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			shipPointers[i][j] = n;	
		}
	}
}

/**************************************
** Description: This function returns how many ships are still floating.
**************************************/

int BBoard::getNumShipsRemaining(){
	
	return unsunk;
}

/**************************************
** Description: This function returns the element of the location on the ship array.
**************************************/

Ship* BBoard::getShipsArrayElement(int row, int col) {
	
	return shipPointers[row][col];		
}

/**************************************
** Description: This function returns the element of the location on the bool array.
**************************************/

bool BBoard::getAttacksArrayElement(int row, int col) {
	
	return boolArray[row][col];
}

/**************************************
** Description: This function returns either true or false to determine whether all of the ships have been sunk or not.
**************************************/

bool BBoard::allShipsSunk() {
	
	if (unsunk == 0) {	
		return true;
	}
	
	return false;
}

/**************************************
** Description: This function returns either true or false to determine whether a ship has been hit or not and if a ship has sunk.
**************************************/

bool BBoard::attack(int row, int col) {
	
	if(shipPointers[row][col] != NULL && boolArray[row][col] != false) {
		boolArray[row][col] = true;
		
		if((*shipPointers[row][col]).getLength() == (*shipPointers[row][col]).getDamage()) {
			cout << "They sank " << (*shipPointers[row][col]).getName() << "!" << endl;
			unsunk--;
		}
		
		return true;
	}
	
	if(shipPointers[row][col] != NULL && boolArray[row][col] == false) {
		(*shipPointers[row][col]).takeHit();
 		boolArray[row][col] = true;
		
		if((*shipPointers[row][col]).getLength() == (*shipPointers[row][col]).getDamage()) {
			cout << "They sank " << (*shipPointers[row][col]).getName() << "!" << endl;
			unsunk--;
		}
		
		return true;
	}
	
	return false;
}

/**************************************
** Description: This function returns true or not depending if the ship can be placed on the board or not then incrememnts the unsunk variable by one if the ship is placed.
**************************************/

bool BBoard::placeShip(Ship* ship, int row, int col, char o) {	
	
	int shipLength = (*ship).getLength();
	int maxX = 9, maxY = 9;
	
	if( o == 'C') {
		maxY = (10 - shipLength);
	}
	
	else {
		
		maxX = (10 - shipLength);
	}

	if(row >= 0 && row <= maxY && col >= 0 && col <= maxX) {	//can still go out of bounds when placed at the wrong spot
		if(shipLength > 0 && shipLength <= 10) {		//still goes out of bounds when placing ships
			if( o == 'C') {

				for(int i = 0; i < shipLength; i++) {
					if(shipPointers[row+i][col] == NULL) {
						
						shipPointers[row+i][col] = ship;
					}
				}
			}
			
			if( o == 'R') {
				for(int i = 0; i < shipLength; i++) {
					if(shipPointers[row][col+i] == NULL) {
						
						shipPointers[row][col+i] = ship;
					}
				}
			}

			unsunk++;
			return true;
		}
	}
	return false;
}

/* void BBoard::printBoard() {		//prints board (optional)
	
	cout << "     0  1  2  3  4  5  6  7  8  9 " << endl; //numbers for row on board
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		cout << " " << i << "| "; 		//numbers of column
		for(int j = 0; j < 10; j++) {
			cout << " " << shipPointers[i][j] << " ";
		}
		cout << endl;
	}
} */

int main() {
	
/* 	std::stringbuf sbuf(std::ios::out);
	auto oldbuf = std::cout.rdbuf(std::addressof(sbuf));

	BBoard board;
	Ship ship1("Boaty McBoatface", 2);
	board.placeShip(&ship1, 2, 2, 'R');
	board.attack(2, 3);
	board.attack(2, 2);
	board.attack(2, 3);
	ASSERT_EQ(sbuf.str(), "They sank Boaty McBoatface!\n");    */
	
/* 	Ship lol("LOL", 4);
	
	BBoard board;
	
	board.placeShip(&lol, 6, 8, 'C');
		board.placeShip(&lol, 6, 8, 'C');
	
	board.placeShip(&lol, 6, 8, 'R');
	
	board.placeShip(&lol, -1, 8, 'C');
	
	board.placeShip(&lol, 6, 18, 'C');
	
	board.placeShip(&lol, 6, -8, 'C');
	
	board.placeShip(&lol, -6, -8, 'D');
	

	cout << "\n" << lol.getName() << " " << lol.getLength() << endl;
	cout << "damage: " << lol.getDamage() << endl;
	
	cout << board.attack(6, 8) << endl;
	cout << board.attack(7, 8) << endl;
	cout << board.attack(9, 8) << endl;
	cout << board.attack(9, 8) << endl;
	
	board.printBoard();
	
	cout << "new damage: " << lol.getDamage() << endl;
	
	cout << "\ngetShipsArrayElement: " << board.getShipsArrayElement(0, 0) << endl;
	cout << "\ngetAttacksArrayElement: " << board.getAttacksArrayElement(6, 8) << endl;
	cout << "\ngetNumShipsRemaining: " << board.getNumShipsRemaining() << endl;
	cout << "\nallShipsSunk: " << board.allShipsSunk() << endl;
	
	return 0; */
}