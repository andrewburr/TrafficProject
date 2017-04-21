#ifndef JUNCTION_H
#define JUNCTION_H
#include "TimeClass.h"
#include "Road.h"

class Junction
{
public:
	//Getters
	int getPosX();
	int getPosY();
	bool getPedestrian();
	int getTime();
	Road* getInRoad(int);
	Road* getOutRoad(int);
	int getSignal(int);
	bool getOccupied();

	//Setters
	void setPosX(int);
	void setPosY(int);
	void setPedestrian(bool);
	void setInRoads(Road*, Road*, Road*, Road*);
	void setOutRoads(Road*, Road*, Road*, Road*);
	void setOccupied(bool);

	void updateSignals();

	//Constructors and Destructors
	Junction();
	Junction(TimeClass*, int, int, bool, bool, Road*, Road*, Road*, Road*, Road*, Road*, Road*, Road*);
	~Junction(){};
protected:
	Road inRoads[4];
	Road outRoads[4];
	int signals[4];
	int pos_x;
	int pos_y;
	bool pedestrian;
	TimeClass* TimeRef;
	bool occupied;
};

#endif