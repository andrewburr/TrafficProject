//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef ROAD_HPP_
#define ROAD_HPP_
#include <iostream>
#include <string>

using namespace std;

class Road
{
protected:
	int Orientation;
	int Pos_X;
	int Pos_Y;
	bool occupied;

public:

	//~~Getter Functions
	int getOrientation();
	int getPos_X();
	int getPos_Y();
	bool getOccupied();


	//~~Setter Functions
	void setOrientation(int);
	void setPos_X(int);
	void setPos_Y(int);
	void setOccupied(bool);

	//~~Constructor Functions
	Road();						
	Road(string, int, int, int, bool);
	
	//~~Destructor Function
	virtual ~Road(){};
};

#endif 
