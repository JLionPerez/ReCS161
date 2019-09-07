//Player.hpp is the Player class specification file.
#ifndef PLAYER_HPP
#define PLAYER_HPP

using std::string;

//Player class declaration
class Player {
	
	private:
		
		string name; 
		int points;
		int rebounds;
		int assists;
	
	public:
	
		string getName();		//string getter
		int getPoints();		//
		int getRebounds();		//getters
		int getAssists();		//
		
		int setPoints(int p);		//
		int setRebounds(int r);		//setters
		int setAssists(int a);		//

		bool hasMorePointsThan(Player member);	//returns true or false when comparing points between players
		
		Player(); 	//default constructor
		Player(string n, int p, int r, int a); 	//overloaded constructor
};
#endif