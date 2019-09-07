/**********************************************
** Author: Joelle Perez
** Date: 4/25/2018
** Description: Asks the user to input a positive integer then counts how many steps it takes to reach the integer one.
***********************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int hailstone(int posInt);

/* int main() {
	
	int number = 0;
	
	cout << "What is number: ";
	cin >> number;
	
	hailstone(number);
	
	return 0;
} */

/**********************************************
** Description: This function takes an integer parameter and determines whether it's odd or even then displays the number of steps it takes to reach one.
**********************************************/

int hailstone (int posInt) {
	
	int nextInt = 0;
	int steps = 0;
	
	for (int i = 0; posInt != 1 ;i++) {
		
		if (posInt % 2 == 0) {				
		
			nextInt = posInt / 2;			//formula for even number
		}
		
		if (posInt % 2 != 0) {
			
			nextInt = (posInt * 3) + 1;		//formula for odd number
		}
		
		posInt = nextInt;					//reassignment
		
		steps++;							//counter
	}
	
	cout << steps << endl;
	return steps;
}