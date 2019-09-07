//Ship.hpp is the Ship class specification file.
#ifndef SHIP_HPP
#define SHIP_HPP

using std::string;

//Ship class declaration
class Ship {
	
	private:
		
		string name;
		int length;
		int damage;
	
	public:
		
		string getName();	//
		int getLength();	//getters
		int getDamage();	//
		
		Ship();	//default constructor
		Ship(string n, int l);	//overloaded constructor
		
		int takeHit();	//adds 1 to damage
};
#endif