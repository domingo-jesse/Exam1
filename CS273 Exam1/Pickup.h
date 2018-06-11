
#ifndef PICKUP_h
#define PICKUP_h
#include "Vehicle.h"
bool VaildPickup(int capacity, int mph, int numwheels, int rad)
{
	if (capacity <= 0 || mph < 0 || numwheels < 0 || rad < 0)
		return false;
	else
		return true;
}
class Pickup : public Vehicle {
private:
	int hauling_capacity;
public:
	Pickup(string color, int capacity, int mph, int numwheels, int rad) : Vehicle(color, mph, numwheels, rad) {
		hauling_capacity = capacity;

	}
	bool isPickup() {
		if (hauling_capacity <= 0 || _topspeed < 0 || Number_of_Wheels < 0 || newrad < 0)
			return false;
		else
			return true;
	}
	string Description() {
		if (isPickup() == true) {
		cout << "I am a " << _color << " PickUp that can haul " << hauling_capacity << " sq.feet at " << _topspeed << "mph";
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
