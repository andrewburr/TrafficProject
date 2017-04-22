//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef VEHICLE_H
#define VEHICLE_H
#include "TimeClass.h"
#include "Box.h"
#include "Map.h"

class Vehicle
{
protected:
	int pos_x;						// x coordinate
	int pos_y;						// y coordinate
	int orientation;				// integer from 0 to 3 for north, south, east, and west
	TimeClass* TimeRef;				// pointer to globaltime

public:
	//~~Getter Functions
	int getPosX();						// returns x coordinate
	int getPosY();						// returns y coordinate
	int getTime();						// returns time
	int getOrientation();				// returns orientation

	//~~Setter Functions
	void setPosX(int);					// sets x coordinate to input
	void setPosY(int);					// sets y coordinate to input
	void setOrientation(int);			// sets orientation to input
	void rotateOrientation(int);		// rotates the vehicle either a quarter or half turn in either direction

	//~~Other Functions
	bool checkNextBox(Map);				// checks to see if the vehicle can enter the next box
	void moveNext(Map);					// moves the vehicle to the next box

	//~~Contructor Functions
	Vehicle();							// default constructor, sets time ref pointer to null, coordinates to (0,0)
	Vehicle(TimeClass*, int, int, int);	// sets time ref, coordinates and orientation

	//~~Destructor Function
	virtual ~Vehicle(){};

};

#endif