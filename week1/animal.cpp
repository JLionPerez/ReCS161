/*************************************************************
 * Author: Joelle Perez
 * Date: 4/2/2018
 * Description: This program takes input from the user asking what animal they like and prints out their response with a text before hand to indicate their liked animal.
 *************************************************************/

#include <iostream>
#include <string>

using namespace std;

// a simple example program
int main() {

	string faveAnimal;

	cout << "Please enter your favorite animal: " << endl;
	cin >> faveAnimal;

	cout << "Your favorite animal is the " << faveAnimal;
	cout << "." <<endl;

	return 0;
}
