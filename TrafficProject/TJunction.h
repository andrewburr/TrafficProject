#ifndef TJUNCTION_H
#define TJUNCTION_H
#include "Junction.h"
#include "Road.h"

class TJunction : public Junction
{
public:
	//Setters
	void setRoads(Road*, Road*, Road*);

	//Getters
	Road* getRoad(int);
	int getOrientation();
	int getSignal(int);

	TJunction(){};
	TJunction(TimeClass*, Road*, Road*, Road*, int, int, int);
	~TJunction(){};
protected:
	Road roads[3];
	int signals[3];
	int orientation;
};

#endif