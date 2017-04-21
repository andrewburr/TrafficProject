#ifndef TJUNCTION_H
#define TJUNCTION_H
#include "Junction.h"
#include "Road.h"

class TJunction : public Junction
{
public:
	//Getters
	int getOrientation();

	void updateSignals();


	TJunction();
	TJunction(TimeClass*, Road*, Road*, Road*, Road*, Road*, Road*, int, int, int, bool);
	~TJunction(){};
protected:
	int orientation;
};

#endif