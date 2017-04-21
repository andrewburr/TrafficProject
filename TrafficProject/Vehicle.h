#ifndef VEHICLE_H
#define VEHICLE_H
#include "TimeClass.h"
#include "Box.h"
#include "Map.h"

class Vehicle
{
public:
	// Setters
	void setPosX(int);
	void setPosY(int);
	void setOrientation(int);
	void rotateOrientation(int);

	// Getters
	int getPosX();
	int getPosY();
	int getTime();
	int getOrientation();

	bool checkNextBox(Map);
	void moveNext(Map);

	Vehicle();				//Constructors
	Vehicle(TimeClass*, int, int);
	virtual ~Vehicle();		//Destructor
protected:
	int pos_x;
	int pos_y;
	int orientation;
	TimeClass* TimeRef;
	
};

#endif