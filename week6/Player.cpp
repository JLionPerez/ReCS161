/*********************************************
** Author: Joelle Perez
** Date: 5/9/2018
** Description: This program sets a player a name, how many points they have, rebounds, and assists and returns them.
**********************************************/

#include <iostream>
#include <cstring>
#include "Player.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Player::Player() {	//default constructor
	
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

Player::Player(string n, int p, int r, int a) { //overloaded constructor
	
	name = n;
	setPoints(p);
	setRebounds(r);
	setAssists(a);
}

/***********************************************
** Description: This function returns the name from the private value of the class.
***********************************************/
string Player::getName() {
	return name;
}

/*********************************************
** Description: This function returns the points from the private value of the class.
*********************************************/
int Player::getPoints() {
	return points;
}

/*********************************************
** Description: This function returns the rebounds from the private value of the class.
*********************************************/
int Player::getRebounds() {
	return rebounds;
}

/********************************************
** Description: This functin returns the assists from the private value of the class.
********************************************/
int Player::getAssists() {
	return assists;
}

/********************************************
** Description: This function sets the player's points into the private variable.
********************************************/
int Player::setPoints(int p){
	points = p;
}

/*********************************************
** Description: This function sets the player's rebounds into the private variable.
*********************************************/
int Player::setRebounds(int r) {
	rebounds = r;
}

/*********************************************
** Description: This funtion sets the player's assists into the private variable.
**********************************************/
int Player::setAssists(int a) {
	assists = a;
}

/*********************************************
** Description: This function returns true or false depending if the executed player's points is greater or lesser than the compared player's points.
**********************************************/
bool Player::hasMorePointsThan(Player member) {
	if ( points > member.getPoints()) {
		return true;
	}
	
	return false;
}