#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	// Getters
	int getOrientation();

	// Setters
	void setOrientation(int);

	Car();
	Car(TimeClass*, int, int, int);
	virtual ~Car();
protected:
	int speed = 2;
	int orientation;
};

#endif