/******************************************
** Author: Joelle Perez
** Date: 4/17/18
** Description: Asks the user how many integers they want, ask to enter that amount of integers, then find the minimum and maximum.
******************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int amountNum, number = 0, min = 9999, max = 0;
	
	cout << "How many integers would you like to enter?" << endl;
	cin >> amountNum;
	
	cout << "Please enter " << amountNum << " integers." << endl;
	
	for(int i = 0; i < amountNum; i++) {
		
		cin >> number;
		
		if(number > max) {			//code for finding maximum value
			max = number;
		}
		
		else if(number < min) {		//code for finding minimum value
			min = number;
		}
		
	}
	
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	
	return 0;
}
