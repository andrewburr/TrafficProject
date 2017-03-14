//EE273 Project
//Cameron Fleming

#ifndef PEDESTRIAN_HPP_
#define PEDESTRIAN_HPP_

#include "TimeClass.h"
#include <iostream>

using namespace std;

class Pedestrian
{
protected:
	int Pos_X;
	int Pos_Y;
	TimeClass* TimeRef;
	int speed = 1;
public:
	Pedestrian();			//Constructor
	Pedestrian(int, int, TimeClass*);
	virtual ~Pedestrian();	//Deconstructor

	//Getter Functions
	int getPos_X();
	int getPos_Y();
	int getTime();

	//Setter Functions
	void setPos_X(int);
	void setPos_Y(int);

};




#endif