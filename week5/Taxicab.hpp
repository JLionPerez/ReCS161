//Taxicab.hpp is the Taxicab class specification file.
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

//Taxicab class declaration
class Taxicab {
	
	private:
		
		int coordX;
		int coordY;
		int distanceTraveled;
	
	public:
		
		int getXCoord();			//
		int getYCoord();			//getters
		int getDistanceTraveled();	//
		
		void moveX(int x);	//distance of x
		void moveY(int y);	//distance of y
		
		Taxicab();
		Taxicab(int x, int y);
};
#endif