//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///
#ifndef RACECAR_h
#define RACECAR_h
#include "Vehicle.h"
// this is for unit testing to make sure it is a vaild car. you cant have negitive wheels or mph
bool VaildRacecar(int mph, int numwheels, int rad)
{
	if (mph < 0 || numwheels < 0 || rad < 0)
		return false;
	else
		return true;
}
class Racecar : public Vehicle {
private:

public:
	// inheritance from vechicle
	Racecar(string color, int mph, int numwheels, int rad) : Vehicle(color, mph, numwheels, rad) {


	}
	/// checks to see if it is vaild. 
	bool isRacecar() {
		if (_topspeed < 0 || Number_of_Wheels < 0 || newrad < 0)
			return false;
		else
			return true;
	}
	string Description() {
		// if it is a vaild racecar then displays speifications
		if (isRacecar() == true) {
			cout << "I am a " << _color << " race car that can race " << _topspeed << "mph. Vroom!";

			//PT -- probably better to do this in the constructor -- even better in Vehicle().
			//      the problem with putting it here is that each time Description is called, you'll
			//      add four wheels. So on the second call, you'll have an eight-wheel racecar.
			//  -5
			for (int i = 0; i < Number_of_Wheels; i++)
				wheels.push_back(Wheel(newrad));
			
			//PT -- This should be the string that is returned. Don't cout the result, return the string
			//      containing this content.
			//  -2
			cout << "I have " << wheels.size() << " wheels with each wheel having a radius of " << Wheel(newrad).getrad() << "mm" << endl;


			return "";
		}
		else
			// if not vaild returns this message
			return "Sorry the Specifications for the entered object is not possible";
	}
};

#endif
