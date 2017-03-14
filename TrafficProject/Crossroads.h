#ifndef CROSSROADS_H
#define CROSSROADS_H
#include "Junction.h"
#include "Road.h"

class Crossroads : public Junction
{
public:
	//Setters
	void setRoads(Road*, Road*, Road*, Road*);

	//Getters
	Road* getRoad(int);

	Crossroads(){};
	Crossroads(TimeClass*, Road*, Road*, Road*, Road*, int, int);
	~Crossroads();
protected:
	Road roads[4];
};

#endif