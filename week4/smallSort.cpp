/**********************************************
** Author: Joelle Perez
** Date: 4/25/2018
** Description: Asks the user for first, second, and third number then reorders the numbers from least to greatest.
***********************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void smallSort(int& firstNum, int& secondNum, int& thirdNum);

/* int main(){
	
	int first = 0, second = 0, third = 0;
	
	cout << "Whats your first, second, and third numbers." <<endl;
	cin >> first;
	cin >> second;
	cin >> third;
	
	cout << first << ", " << second << ", " << third << endl;
	
	smallSort(first, second, third);
	
	return 0;
} */

/**********************************************
** Description: This function takes three integer parameters and swaps the values until the numbers are from least to greatest.
**********************************************/

void smallSort(int& firstNum, int& secondNum, int& thirdNum) {
	
	int copyTemp = 0;
	
	for(int i = 0; firstNum > secondNum || secondNum > thirdNum; i++){
		
		if (firstNum > secondNum) {		//swapper of first number and second number
			copyTemp = firstNum;
			firstNum = secondNum;
			secondNum = copyTemp;
		}
		
		if (secondNum > thirdNum) {		//swapper of second number and third number
			copyTemp = secondNum;
			secondNum = thirdNum;
			thirdNum = copyTemp;
		}
	}
	
	cout << firstNum << ", " << secondNum << ", " << thirdNum << endl;
}