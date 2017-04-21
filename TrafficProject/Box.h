//EE273 Project
//Cameron Fleming
#ifndef BOX_HPP_
#define BOX_HPP_

#include "Road.h"
#include "TJunction.h"


class Box
{

protected:
	int Pos_X;
	int Pos_Y;
	Road* pointerRoad;
	TJunction* pointerTJunction;
	Junction* pointerJunction;
	

public:
	Box();				//Constructor
	Box(int, int);
	virtual ~Box(){};		//Deconstructor

	//Getter Functions
	int getPos_X();
	int getPos_Y();
	Road* getPointerRoad();
	TJunction* getPointerTJunction();
	Junction* getPointerJunction();
	

	//Setter Functions
	void setOccupied(bool);
	void setPos_X(int);
	void setPos_Y(int);
	void setPointerRoad(Road*);
	void setPointerTJunction(TJunction*);
	void setPointerJunction(Junction*);

	//Other
	int checkContent();

};

#endif
