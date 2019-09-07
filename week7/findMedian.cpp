/*************************************
** Author: Joelle Perez
** Date: 5/14/2018
** Description: This program finds the median of the array the user inputs then returns that value.
**************************************/

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::sort;

double findMedian (int myArray[], int sizeArray);

int main() {

	return 0;
}

/*********************************************
** Description: Sorts through the given array rearranging from least to greatest then finds the median of the array then returns the value.
*********************************************/

double findMedian (int myArray[], int sizeArray) {
	
	int medianSlot, medianRight, medianLeft;
	double median;
	
	sort(myArray, myArray + sizeArray);		//sorter
	
	if(sizeArray % 2 != 0) {
		medianSlot = (sizeArray + 1) / 2;	//formula for odd sized list
		median = myArray[medianSlot - 1];
	}
	
	else {
		medianRight	= sizeArray / 2;		//formula to find the right furthest median
		medianLeft = medianRight - 1;		//formula to find the left furthest median
		median = (myArray[medianRight] + myArray[medianLeft]) / 2.0;	//formula for average of two medians
	}
	
	return median;
}