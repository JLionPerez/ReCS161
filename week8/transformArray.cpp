/*********************************************
** Author: Joelle Perez
** Date: 5/23/2018
** Description: This program adds to the add existing values to 1 then uses that new value and inserts it into the new indexes within the array.
**********************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void transformArray(int *&array, int size);	//function prototype

int main() {
	
	int* myArray = new int[3];
	myArray[0] = 4;
	myArray[1] = 2;
	myArray[2] = 5;
	
	transformArray(myArray, 3);
	
	for (int i = 0; i < 6; i++)
		cout << myArray[i] << endl;
	
	delete [] myArray;
	
	return 0;
}

/*********************************************
** Description: This function creates new indexes for the new values of the array.
*********************************************/

void transformArray(int *&array, int size) {
    int *temp = new int[size * 2];
 
    for (int i = 0; i < size; i++) {
        temp[i] = array[i];
    }
 
    for (int i = 0; i < size; i++) {
        temp[i + size] = array[i] + 1;
    }
	
    delete [] array;
    array = temp;
}