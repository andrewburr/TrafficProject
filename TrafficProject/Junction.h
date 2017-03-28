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
	Road* getRoad(int);
	int getSignal(int);

	//Setters
	void setPosX(int);
	void setPosY(int);
	void setPedestrian(bool);
	void setRoads(Road*, Road*, Road*, Road*);

	//Constructors and Destructors
	Junction();
	Junction(TimeClass*, int, int, bool, Road*, Road*, Road*, Road*);
	~Junction(){};
protected:
	Road roads[4];
	int signals[4];
	int pos_x;
	int pos_y;
	bool pedestrian;
	TimeClass* TimeRef;
};

#endif