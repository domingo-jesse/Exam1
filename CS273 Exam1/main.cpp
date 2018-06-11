#include "Sedan.h"
#include "Racecar.h"
#include "Pickup.h"
int main()
		{

			Vehicle * Garage[4];

			//color,seats,mph,numwheels,radius
			Garage[0] = new Sedan("brown", 5, 95, 4, 381);
			//  color, capacity, mph, int numwheels, int radius
			Garage[1] = new Pickup("blue", 600, 85 ,4, 432);
			//  color, mph, numwheels, radius
			Garage[2] = new Racecar ("red", 250,4,305);

			
				for (int i = 0; i < 3; ++i)

				{ 

							cout << Garage[i]->Description();

							cout << endl;
				}
			
		

		}
		