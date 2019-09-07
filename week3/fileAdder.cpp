/***************************************************
** Author: Joelle Perez
** Date: 4/17/2018
** Description: Asks the user for a file to add all the integers and transfer the sum to another file.
****************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int value = 1, total = 0;
	std::string fileName;
	
	cout << "Please enter your filename." << endl;
	cin >> fileName;
	
	std::ifstream input;
	input.open(fileName);
	
	if(input.is_open()) {
	
		while(value != 0){			//code for finding sum of integers
		
			value = 0;
			
			input >> value;
			total = total + value;
		}
	
		std::ofstream output;		//code for sum.txt
		output.open("sum.txt");
		
		output << total << endl;
		
		input.close();
		output.close();
		
		cout << "result written to sum.txt" << endl;
	
	}
	
	else {
		cout << "could not access file" << endl;
	}
	
	return 0;
	
}