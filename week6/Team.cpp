/*********************************************
** Author: Joelle Perez
** Date: 5/9/2018
** Description: This program sets the point guard, shooting guard, small forward, power forward, and center of one's team.
**********************************************/
#include <iostream>
#include "Player.hpp"
#include "Team.hpp"

using std::cout;
using std::cin;
using std::endl;

Team::Team() {} //call for default; default constructor

Team::Team(Player pG, Player sG, Player sF, Player pF, Player c) { //overloaded constructor

	setPointGuard(pG);
	setShootingGuard(sG);
	setSmallForward(sF);
	setPowerForward(pF);
	setCenter(c);
}

/************************************************
** Description: This function returns the point guard from the private value of the class.
************************************************/
Player Team::getPointGuard() {
	return pointGuard;
}

/************************************************
** Description: This function returns the shooting guard from the private value of the class.
*************************************************/
Player Team::getShootingGuard() {
	return shootingGuard;
}

/************************************************
** Description: This function returns the small forward from the private value of the class.
************************************************/
Player Team::getSmallForward() {
	return smallForward;
}

/************************************************
** Description: This function retuns the power forward from the private value of the class.
************************************************/
Player Team::getPowerForward() {
	return powerForward;
}

/************************************************
** Description: This funtion retuns the center from the private value of the class.
************************************************/
Player Team::getCenter() {
	return center;
}

/************************************************
** Description: This function assigns the private point guard variable with the given value.
************************************************/
void Team::setPointGuard(Player pG) {
	pointGuard = pG;
}

/************************************************
** Description: This function assigns the private shooting guard variable with the given value.
************************************************/
void Team::setShootingGuard(Player sG) {
	shootingGuard = sG;
}

/************************************************
** Description: This function assigns the private small forward variable with the given value.
************************************************/
void Team::setSmallForward(Player sF) {
	smallForward = sF;
}

/************************************************
** Description: This function assigns the private power forward variable with the given value.
************************************************/
void Team::setPowerForward(Player pF) {
	powerForward = pF;
}

/************************************************
** Description: This function assigns the private center variable with the given value.
************************************************/
void Team::setCenter(Player c) {
	center = c;
}

/************************************************
** Description: This function adds up the total points of the team then returns the value.
************************************************/
int Team::totalPoints() {
	int tP = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
	return tP;
}

int main() {
	
	return 0;
}