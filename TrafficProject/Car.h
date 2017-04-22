//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	//~~Constructor Functions
	Car();							// sets coordinates to (0,0), orientation to north
	Car(TimeClass*, int, int, int);	// instance has pointer to globalTime instance, sets coordinates and orientation

	//~~Destructor Functions
	virtual ~Car(){};
};

#endif