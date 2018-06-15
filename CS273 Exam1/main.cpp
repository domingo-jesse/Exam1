#include "Sedan.h"
#include "Racecar.h"
#include "Pickup.h"
//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///

//Nice work. 93/100

int main()
{

	Vehicle * Garage[4];
	// creation of objects here. 
	//color,seats,mph,numwheels,radius
	Garage[0] = new Sedan("brown", 5, 95, 4, 381);
	//  color, capacity, mph, int numwheels, int radius
	Garage[1] = new Pickup("blue", 600, 85, 4, 432);
	//  color, mph, numwheels, radius
	Garage[2] = new Racecar("red", 250, 4, 305);


	for (int i = 0; i < 3; ++i)

	{

		cout << Garage[i]->Description();

		cout << endl;
	}



}
