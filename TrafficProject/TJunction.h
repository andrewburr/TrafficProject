#ifndef TJUNCTION_H
#define TJUNCTION_H
#include "Junction.h"
#include "Road.h"

class TJunction : public Junction
{
public:
	//Getters
	int getOrientation();


	TJunction();
	TJunction(TimeClass*, Road*, Road*, Road*, int, int, int);
	~TJunction(){};
protected:
	Road roads[4];
	int signals[4];
	int orientation;
};

#endif