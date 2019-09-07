/****************************************
** Author: Joelle Perez
** Date: 4/17/18
** Description: Asks the user how many integers they want then ask to enter that amount of integers then 
****************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int amountNum, number = 0, min = 0, max = 0;
	
	cout << "How many integers would you like to enter?" << endl;
	cin >> amountNum;
	
	cout << "Please enter " << amountNum << " integers." << endl;
	
	for(int i = 0; i < amountNum; i++) {
		
		cin >> number;
		
		if(number > max) {
			max = number;
		}
		
		else if(number < min) {
			min = number;
		}
		
	}
	
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	
	return 0;
}