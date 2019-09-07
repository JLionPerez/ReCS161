/***************************************
** Author: Joelle Perez
** Date: 6/8/2018
** Description: This program lets the user set a ship with it's name and length.
***************************************/

#include <iostream>
#include <cstring>
#include "Ship.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Ship::Ship() {
	
	name = "";
	length = 0;
	damage = 0;
}

Ship::Ship(string n, int l) {
	
	name = n;
	length = l;
}

/**************************************
** Description: This function returns the name of the ship.
**************************************/

string Ship::getName() {
	
	return name;
}

/**************************************
** Description: This funtion retuns the length of the ship.
**************************************/

int Ship::getLength() {
	
	return length;
}

/**************************************
** Description: This function returns the damage status of the ship.
**************************************/

int Ship::getDamage() {
	
	return damage;
}

/**************************************
** Description: This function increments the damage status when a ship has been hit.
**************************************/

int Ship::takeHit() {
	
	damage++;
}

/* int main() {
	
	Ship lol("LOL", 3);
	
	cout << lol.getName() << " " << lol.getLength() << endl;
	
	return 0;
} */