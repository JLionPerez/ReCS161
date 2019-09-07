/***********************************************
** Author: Joelle Perez
** Date: 5/1/2018
** Description: Asks the user for height, width, and length to calculate the volume and surface area of box.
************************************************/
#include <iostream>
#include "Box.hpp"

using std::cout;
using std::cin;
using std::endl;

Box::Box () {	//default constructor Box
	initialHeight = 0;
	initialWidth = 0;
	initialLength = 0;
	
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}
	
Box::Box (double h, double w, double l) {	//overloaded constructor
	initialHeight = h;
	initialWidth = w;
	initialLength = l;
	
	setHeight(h);
	setWidth(w);
	setLength(l);
}

/**********************************************
** Description: This function sets the double parameter h to the known variable height.
**********************************************/
void Box::setHeight(double h) {	//height setter function
	height = h;
}

/**********************************************
** Description: This function sets the double parameter w to the known variable width.
**********************************************/
void Box::setWidth(double w) {	//width setter function
	width = w;
}

/**********************************************
** Description: This function sets the double parameter l to the known variable length.
**********************************************/
void Box::setLength(double l) {	//length setter function
	length = l;
}

/**********************************************
** Description: This functions takes the double parameters of height, width, and length then calculates for the volume using their values.
**********************************************/
double Box::calcVolume () {
	double boxVolume;
	
	boxVolume = height * width * length;
	return boxVolume;
}

/**********************************************
** Description: This functions takes the double parameters of height, width, and length then calculates for the surface area using their values.
**********************************************/
double Box::calcSurfaceArea () {
	double boxSurfaceArea;
	
	boxSurfaceArea = 2*((length*width) + (length*height) + (width*height));
	return boxSurfaceArea;
}

int main() {
	
	return 0;
}