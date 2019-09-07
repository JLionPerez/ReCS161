/**********************************************
** Author: Joelle Perez
** Date: 4/25/2018
** Description: Asks the user to input a time in seconds and calculate the distance of that object falling.
***********************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fallDistance(double fallTime);

/* int main() {
	
	double seconds = 0;
	
	cout << "Please enter the time in seconds that the object has been falling." << endl;
	cin >> seconds;
	
	cout << "Here is the distance: ";
	fallDistance(seconds);
	
	return 0;
} */

/**********************************************
** Description: This function takes a double value parameter and returns the distance value.
**********************************************/

double fallDistance(double fallTime) {
	
	double g = 9.8;
	double t = fallTime;
	double d = (g/2) * (t*t);		//distance formula
	
	cout << d << endl;
	return d;
}
