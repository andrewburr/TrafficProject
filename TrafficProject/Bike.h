#ifndef BIKE_H
#define BIKE_H
#include "Vehicle.h"

class Bike : public Vehicle
{
public:
	// Getters
	//int getOrientation();

	// Setters
	//void setOrientation(int);

	Bike();
	Bike(TimeClass*, int, int, int);
	virtual ~Bike();
protected:
	int speed = 2;
	//int orientation;
};

#endif