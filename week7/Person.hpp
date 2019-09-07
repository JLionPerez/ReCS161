//Person.hpp is the Person class specification file.
#ifndef PERSON_HPP
#define PERSON_HPP

using std::string;

//Person class declaration
class Person {
	
	private:
		
		string n;
		double a;
	
	public:
	
		string getName();		//string getter
		double getAge();		//double getter
	
		Person();	//default constructor
		Person(string name, double age);	//overloaded constructor
};
#endif