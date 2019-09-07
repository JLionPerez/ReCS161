/**************************************************************************
 * Author: Joelle Perez
 * Date: 4/5/18
 * Description: This program asks the user to input an amount in cents less than a dollar then prints out how many quarters, dimes, nickels, and pennies they would need to fulfil that amount.
 * ***********************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int cents = 0;

	cout << "Please enter an amount in cents less than a dollar."<< endl;
	cin >> cents;

	cout << "Your change will be:" << endl;

	int quarters = (cents - cents % 25) / 25;	//formula for the amount of quarters within the given value

	cout << "Q: " << quarters << endl;
	cents = cents - (quarters * 25);			//formula for the remainding cents after quarters are taken out

	int dimes = (cents - cents % 10) / 10;		//formula for the amount of dimes within the given value

	cout << "D: " << dimes << endl;
	cents = cents - (dimes * 10);				//formula for the remainding cents after dimes are taken out

	int nickels = (cents - cents % 5) / 5;		//formula for the amount of nickels within the given value
	
	cout << "N: " << nickels << endl;
	cents = cents - (nickels * 5);				//formula for the remainding cents after nickels are taken out
	
	int pennies = cents;						//formula for remainding cents
	
	cout << "P: " << pennies << endl;

	return 0;

}
