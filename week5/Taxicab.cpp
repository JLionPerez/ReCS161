/*********************************************************
** Author: Joelle Perez
** Date: 5/2/2018
** Description: Asks the user to input x and y coordinates of their taxicab and then returns the distance traveled to new coordinates.
*********************************************************/

#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

using std::cout;
using std::cin;
using std::endl;

Taxicab::Taxicab() { //default constructor
	
	coordX = 0;
	coordY = 0;
	distanceTraveled = 0;
}

Taxicab::Taxicab(int x, int y) { //overloaded constructor
	
	coordX = x;
	coordY = y;
	distanceTraveled = 0;
}

/*********************************************************
** Description: This function returns the x coordinate from the private tag of the class.
*********************************************************/
int Taxicab::getXCoord() {
	return coordX;
}

/*********************************************************
** Description: This function returns the y coordinate from the private tag of the class.
*********************************************************/
int Taxicab::getYCoord() {
	return coordY;
}

/*********************************************************
** Description: This function returns the total distance from the private tag od the class.
*********************************************************/
int Taxicab::getDistanceTraveled() {
	return distanceTraveled;
}

/*********************************************************
** Description: This function uses an integer parameter to set the total distance and replace the coordinate of x.
*********************************************************/
void Taxicab::moveX(int x) {
	distanceTraveled += fabs(x);
	coordX += x;
}

/*********************************************************
** Description: This function uses an integer parameter to set the total distance and replace the coordinate of y.
*********************************************************/
void Taxicab::moveY(int y) {
	distanceTraveled += fabs(y);
	coordY += y;
}

int main() {
	
	return 0;
}