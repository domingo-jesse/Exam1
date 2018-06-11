#ifndef VECICLE_h
#define VECICLE_h
#include "Wheel.h"

class Vehicle

{

protected:
	int newrad;
	int Number_of_Wheels;
	string _color;
	int _topspeed;
	vector<Wheel> wheels;
	
public:
	
	Vehicle(string color, int mph, int numwheels, int rad) {

		_color = color;
		_topspeed = mph;
		Number_of_Wheels = numwheels;
		newrad = rad;
		
	}
	

	virtual string Description() = 0;

};
#endif
