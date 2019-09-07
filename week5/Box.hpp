//Box.hpp is the Box class specification file.
#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box {
	
	private:
	
		double initialHeight;
		double initialWidth;
		double initialLength;
		
		double height;
		double width;
		double length;
	
	public:
	
		void setHeight(double h);		//
		void setWidth (double w);		//setters
		void setLength (double l);		//
		
		double calcVolume();
		double calcSurfaceArea();
		
		Box();							//default constructor Box
		Box(double h, double w, double l); //overloaded constructor
	
};
#endif