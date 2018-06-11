//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///
#ifndef SEDAN_h
#define SEDAN_h
#include "Vehicle.h"
// this is for unit testing to make sure it is a vaild car. you cant have negitive wheels or mph or seats
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
	// inheritance from vechicle but adding seats 
	Sedan(string color, int seats, int mph, int numwheels, int rad) : Vehicle(color, mph, numwheels, rad) {
		number_of_seats = seats;

	}
	bool isSedan() {
		/// checks to see if it is vaild. 
		if (number_of_seats <= 0 || _topspeed < 0 || Number_of_Wheels < 0 || newrad < 0)
			return false;
		else
			return true;
	}

	string Description() {
		// if it is a vaild Sedan then displays speifications
		if (isSedan() == true) {

			cout << "I am a " << _color << " Sedan that can carry " << number_of_seats << " at " << _topspeed << " mph. Yay!";

			for (int i = 0; i < Number_of_Wheels; i++)
				wheels.push_back(Wheel(newrad));
			cout << "I have " << wheels.size() << " wheels with each wheel having a radius of " << Wheel(newrad).getrad() << "mm" << endl;
			return"";
		}
		// if not vaild pickup returns this message 
		else
			return "Sorry the Specifications for entered object is not possible";
	}
};

#endif
