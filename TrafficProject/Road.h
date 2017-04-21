//EE273 Project
//Cameron Fleming

#ifndef ROAD_HPP_
#define ROAD_HPP_

#include <iostream>
#include <string>

using namespace std;

class Road
{
protected:
	string Type;
	int Orientation;
	int Pos_X;
	int Pos_Y;
	bool occupied;

public:
	Road();						//Constructor
	Road(string, int, int, int);
	virtual ~Road();			//Deconstructor

	//Getter Functions
	string getType();
	int getOrientation();
	int getPos_X();
	int getPos_Y();
	bool getOccupied();


	//Setter Functions
	void setType(string);
	void setOrientation(int);
	void setPos_X(int);
	void setPos_Y(int);
	void setOccupied(bool);
};

#endif 
