/**********************************************
** Author: Joelle Perez
** Date: 5/21/2018
** Description: A program that sorts through an array listing any integers from least to greatest.
**********************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void smallSort2 (int* firstNum, int* secondNum, int* thirdNum);		//function prototype

/* int main() {
	
	int first = 14;
	int second = -90;
	int third = 0;
	
	smallSort2 (&first, &second, &third);
	cout << first << ", " << second << ", " << third << endl;
	
	return 0;
} */

/********************************************
** Description: This function sorts through the referenced integers from least to greatest.
********************************************/

void smallSort2 (int* firstNum, int* secondNum, int* thirdNum) {
	
	int copyTemp = 0;
	
	for(int i = 0; *firstNum > *secondNum || *secondNum > *thirdNum; i++){
		
		if (*firstNum > *secondNum) {		//swapper of first number and second number
			copyTemp = *firstNum;
			*firstNum = *secondNum;
			*secondNum = copyTemp;
		}
		
		if (*secondNum > *thirdNum) {		//swapper of second number and third number
			copyTemp = *secondNum;
			*secondNum = *thirdNum;
			*thirdNum = copyTemp;
		}
	}
}