/********************************************
** Author: Joelle Perez
** Date: 5/16/2018
** Description: This program takes the person's name and age then returns that person's name and age.
********************************************/

#include <iostream>
#include <cstring>
#include "Person.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Person::Person() {	//default constructor
	
	n = "";
	a = 0.0;
}

Person::Person(string name, double age) {	//overloaded constructor
	
	n = name;
	a = age;
}

/******************************************
** Description: This function gets the name variable from the private objects then returns it.
******************************************/

string Person::getName() {
	
	return n;
}

/*****************************************
** Description: This function gets the age variable from the private objects then returns it.
*****************************************/

double Person::getAge() {
	
	return a;
}
