#ifndef RACECAR_h
#define RACECAR_h
#include "Vehicle.h"
bool VaildRacecar( int mph, int numwheels, int rad)
{
	if ( mph < 0 || numwheels < 0 || rad < 0)
		return false;
	else
		return true;
}
class Racecar : public Vehicle {
private:

public:
	Racecar(string color, int mph, int numwheels, int rad) : Vehicle(color, mph, numwheels, rad) {


	}
	bool isRacecar() {
		if (_topspeed < 0 || Number_of_Wheels < 0 || newrad < 0)
			return false;
		else
			return true;
	}
	string Description() {

		if (isRacecar() == true) {
			cout << "I am a " << _color << " race car that can race " << _topspeed << "mph. Vroom!";

			for (int i = 0; i < Number_of_Wheels; i++)
				wheels.push_back(Wheel(newrad));
			cout << "I have " << wheels.size() << " wheels with each wheel having a radius of " << Wheel(newrad).getrad() << "mm" << endl;


			return "";
		}
		else
			return "Sorry the Specifications for the entered object is not possible";
		}
};

#endif
