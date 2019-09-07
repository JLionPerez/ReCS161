/********************************************
** Author: Joelle Perez
** Date: 5/16/2018
** Description: This program calculates the popsulation standard deviation for the ages of the array.
********************************************/

#include <iostream>
#include "Person.hpp"

using std::cout;
using std::cin;
using std::endl;

double stdDev (Person objects[], int size);		//function protoype

int main() {
	
	return 0;
} 

/********************************************
** Description: This function returns the population standard deviation after it calculates the value.
********************************************/

double stdDev (Person objects[], int size) {
	
	double sumAges = 0;
	
	for(int i = 0; i < size; i++) {
		sumAges += objects[i].getAge();		//sum of ages
	}
	
	double mean = sumAges / size;
	
	double popDevNum = 0;
	
	for(int i = 0; i < size; i++) {

		popDevNum += pow(objects[i].getAge() - mean, 2); 	//numerator for std deviation
	}
	
	double popDev = sqrt(popDevNum / size); 	//final std deviation value
	
	return popDev;
}