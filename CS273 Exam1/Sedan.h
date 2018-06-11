#ifndef SEDAN_h
#define SEDAN_h
#include "Vehicle.h"

 bool VaildSedan(int seats, int mph, int numwheels, int rad)
{
	 if (seats <= 0 || mph < 0 || numwheels < 0 || rad < 0)
		 return false;
	 else
		 return true;
}

class Sedan : public Vehicle {

private:
	int number_of_seats;


public:
	Sedan(string color, int seats, int mph, int numwheels, int rad) : Vehicle(color, mph, numwheels, rad) {
		number_of_seats = seats;

	}
	bool isSedan() {
		if (number_of_seats <= 0 || _topspeed < 0 || Number_of_Wheels < 0 || newrad < 0)
			return false;
		else
			return true;
	}

	string Description() {

		if (isSedan() == true) {

			cout << "I am a " << _color << " Sedan that can carry " << number_of_seats << " at " << _topspeed << " mph. Yay!";

			for (int i = 0; i < Number_of_Wheels; i++)
				wheels.push_back(Wheel(newrad));
			cout << "I have " << wheels.size() << " wheels with each wheel having a radius of " << Wheel(newrad).getrad() << "mm" << endl;
			return"";
		}
		else
			return "Sorry the Specifications for entered object is not possible"; 
}
	};

#endif
