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

	Wheel(int radius) { _radius = radius; }
	int getrad() {
		return _radius;
	}


};
#endif
