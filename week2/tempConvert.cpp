/**************************************************************************************
 * Author: Joelle Perez
 * Date: 4/4/2018
 * Description: This program asks the user for the temperature degree in celsius then converts and outputs the degrees into fahrenheit.
 * ***********************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	double celTemp;

	cout << "Please enter a Celsius temperature." << endl;
	cin >> celTemp;

	double fahTemp = (((9.0*celTemp)/5.0)+32.0); //formula to convert celsius into fahrenheit

	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fahTemp << endl;

	return 0;
}
