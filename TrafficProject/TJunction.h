//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef TJUNCTION_H
#define TJUNCTION_H
#include "Junction.h"
#include "Road.h"

class TJunction : public Junction
{
protected:
	int orientation;		// int from 0 to 3

public:
	//~~Getter Function
	int getOrientation();	// returns orientation

	//~~Other Functions
	void updateSignals();	// updates the traffic signals based on the current time

	//~~Constructor Functions
	TJunction();			// sets coordinates to (0,0) and orientation to 0
	TJunction(TimeClass*, Road*, Road*, Road*, Road*, Road*, Road*, int, int, int, bool); // sets time reference, in roads, out roads, coordinates, orientation and occupied

	//~~Destructor Function
	~TJunction(){};

};

#endif