//Team .hpp is the Team class specification file.
#ifndef TEAM_HPP
#define TEAM_HPP

//Team class declaration
class Team {
	
	private:
		
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player center;
		
	
	public:
		
		Player getPointGuard();			//
		Player getShootingGuard();		//
		Player getSmallForward();		//getters
		Player getPowerForward();		//
		Player getCenter();				//
		
		void setPointGuard(Player pG);			//
		void setShootingGuard(Player sG);		//
		void setSmallForward(Player sF);		//setters
		void setPowerForward(Player pF);		//
		void setCenter(Player c);				//
		
		int totalPoints();		//returns sum of team points
		
		Team(); //default constructer
		Team(Player pG, Player sG, Player sF, Player pF, Player c); //overloaded constructer
};
#endif