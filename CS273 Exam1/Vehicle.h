//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///
#ifndef VECICLE_h
#define VECICLE_h
#include "Wheel.h"

class Vehicle

{

protected:
	//PT -- it's good to be consistent in your naming. Either prefix all member variables with _, or don't
	int newrad;
	int Number_of_Wheels;
	string _color;
	int _topspeed;
	vector<Wheel> wheels;

public:
	// Specifications for a Vehicle
	Vehicle(string color, int mph, int numwheels, int rad) {

		_color = color;
		_topspeed = mph;
		Number_of_Wheels = numwheels;
		newrad = rad;

	}

	// abstract class
	virtual string Description() = 0;

};
#endif
