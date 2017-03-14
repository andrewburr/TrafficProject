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

	TJunction(){};
	TJunction(TimeClass*, Road*, Road*, Road*, int, int);
	~TJunction();
protected:
	Road roads[3];
};

#endif