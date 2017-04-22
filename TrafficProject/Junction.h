//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef JUNCTION_H
#define JUNCTION_H
#include "TimeClass.h"
#include "Road.h"

class Junction
{
protected:
	Road inRoads[4];				// array of 4 roads going into the junction
	Road outRoads[4];				// array of 4 roads going out of the junction
	int signals[4];					// array of 4 integers representing traffic signals
	int pos_x;						// x coordinate
	int pos_y;						// y coordinate
	TimeClass* TimeRef;				// pointer to globalTime instance
	bool occupied;					// if there is a vehicle in the junction, occupied is true


public:
	//~~Getter Functions
	int getPosX();					// returns x coordinate
	int getPosY();					// returns y coordinate
	int getTime();					// returns time from globalTime instance
	Road* getInRoad(int);			// gets pointer to in road based on direction
	Road* getOutRoad(int);			// gets pointer to out road based on direction
	int getSignal(int);				// gets traffic signal based on direction
	bool getOccupied();				// returns true if the junction has a vehicle in it, else returns false

	//~~Setter Functions
	void setPosX(int);								// sets x coordinate
	void setPosY(int);								// sets y coordinate
	void setInRoads(Road*, Road*, Road*, Road*);	// sets pointers for each in road in order n, e, s, w
	void setOutRoads(Road*, Road*, Road*, Road*);	// sets pointer for each out road in order n, e, s, w
	void setOccupied(bool);							// sets occupied to true or false

	//~~Other Functions
	void updateSignals();							// depending on global time, changes traffic signals

	//~~Constructor Functions
	Junction();	// default constructor, sets coordinates to (0,0)
	Junction(TimeClass*, int, int, bool, Road*, Road*, Road*, Road*, Road*, Road*, Road*, Road*); // assigns junction time, coordinates, occupied, in roads and out roads
	
	//~~Destructor Functions
	~Junction(){};
};

#endif