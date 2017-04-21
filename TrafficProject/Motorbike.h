#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
	// Getters
	int getOrientation();

	// Setters
	void setOrientation(int);

	Motorbike();
	Motorbike(TimeClass*, int, int, int);
	virtual ~Motorbike();
protected:
	int speed = 2;
	//int orientation;
};

#endif                               