//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///
#ifndef WHEEL_h
#define WHEEL_h
#include <iostream>

#include <string>

#include <vector>

using std::cout;

using std::endl;

using std::string;

using std::vector;

class Wheel

{

private:

	int _radius;

public:
	// the wheel and the radius of it 
	Wheel(int radius) { _radius = radius; }

	//a get the radius function to help display it. 
	int getrad() {
		return _radius;
	}


};
#endif