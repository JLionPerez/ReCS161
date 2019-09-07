/***************************************************************************
 * Author: Joelle Perez
 * Date: 4/4/2018
 * Description: This program asks the user to input five numbers then prints out the average of those five numbers.
 * *************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	double num1, num2, num3, num4, num5;

	cout << "Please enter five numbers." << endl;
	cin >> num1;
	cin	>> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	double average = (num1 + num2 + num3 + num4 + num5)/5.0; //formula for finding the average of 5 numbers only

	cout << "The average of those numbers is:";
	cout << "\n" << average << endl;

	return 0;

}
