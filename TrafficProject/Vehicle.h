#ifndef VEHICLE_H
#define VEHICLE_H
#include "TimeClass.h"

class Vehicle
{
public:
	// Setters
	void setPosX(int);
	void setPosY(int);

	// Getters
	int getPosX();
	int getPosY();
	int getTime();

	Vehicle();				//Constructors
	Vehicle(TimeClass*, int, int);
	virtual ~Vehicle();		//Destructor
protected:
	int pos_x;
	int pos_y;
	TimeClass* TimeRef;
};

#endif