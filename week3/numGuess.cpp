/******************************************************
** Author: Joelle Perez
** Date: 4/18/18
** Description: Asks the user to enter an integer then asks another user to guess what the previous user inputted until guessed right.
******************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int number, guessNum, tries = 1;
	
	cout << "Enter the number for the player to guess." << endl;
	cin >> number;
	
	cout << "Enter your guess." << endl;
	cin >> guessNum;
	
	while(guessNum != number) {				//code to keep player guessing until the right number is guessed
		
		if(guessNum > number) {
			cout << "Too high - try again." << endl;
			tries = tries + 1;				//code to count number of current tries
		}
		
		if(guessNum < number) {
			cout  << "Too low - try again." << endl;
			tries = tries + 1;
		}
		
		cin >> guessNum;
		
	}
	
	cout << "You guessed it in " << tries << " tries." << endl;
	
	return 0;
}