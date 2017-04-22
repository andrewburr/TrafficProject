//EE273 Project - Group 24
//Cameron Fleming and Andrew Burrs

#include "Junction.h"

//~~Getter Functions
int Junction::getPosX()
{
	return pos_x;
}

int Junction::getPosY()
{
	return pos_y;
}

int Junction::getTime()
{
	return TimeRef->getTime();
}

Road* Junction::getInRoad(int input)
{
	return &inRoads[input];
}

Road* Junction::getOutRoad(int input)
{
	return &outRoads[input];
}

int Junction::getSignal(int input)
{
	return signals[input];
}

bool Junction::getOccupied()
{
	return occupied;
}


//~~ Setter Functions
void Junction::setPosX(int input)
{
	pos_x = input;
}

void Junction::setPosY(int input)
{
	pos_y = input;
}

void Junction::setInRoads(Road* input0, Road* input1, Road* input2, Road* input3)
{
	inRoads[0] = *input0;
	inRoads[1] = *input1;
	inRoads[2] = *input2;
	inRoads[3] = *input3;
}

void Junction::setOutRoads(Road* input0, Road* input1, Road* input2, Road* input3)
{
	outRoads[0] = *input0;
	outRoads[1] = *input1;
	outRoads[2] = *input2;
	outRoads[3] = *input3;
}

void Junction::setOccupied(bool input)
{
	occupied = input;
}

void Junction::updateSignals()
{
	int time = this->getTime(); // gets current time
	int stage = time % 16;		// finds the mod 16 of time, since the pattern is repeated every 16 seconds
	
	if (0 <= stage <= 3)		// north signal set to green, all others to red 
	{
		signals[0] = 1;
		signals[1] = 0;
		signals[2] = 0;
		signals[3] = 0;
	}

	if (4 <= stage <= 7)		// east signal set to green, all others to red
	{
		signals[0] = 0;
		signals[1] = 1;
		signals[2] = 0;
		signals[3] = 0;
	}

	if (8 <= stage <= 11)		// south signal set to green, all others to red
	{
		signals[0] = 0;
		signals[1] = 0;
		signals[2] = 1;
		signals[3] = 0;
	}

	if (12 <= stage <= 15)		// west signal set to green, all others to red
	{
		signals[0] = 0;
		signals[1] = 0;
		signals[2] = 0;
		signals[3] = 1;
	}
}

//~~Constructor Functions
Junction::Junction()			// Default Constructor
{
	pos_x = 0;
	pos_y = 0;
}

Junction::Junction(TimeClass* input_time, int inputX, int inputY, bool inputoccupied, Road* input_inroad0, Road* input_inroad1, Road* input_inroad2, Road* input_inroad3, Road* input_outroad0, Road* input_outroad1, Road* input_outroad2, Road* input_outroad3)
{
	pos_x = inputX;
	pos_y = inputY;
	TimeRef = input_time;
	inRoads[0] = *input_inroad0;
	inRoads[1] = *input_inroad1;
	inRoads[2] = *input_inroad2;
	inRoads[3] = *input_inroad3;
	outRoads[0] = *input_outroad0;
	outRoads[1] = *input_outroad1;
	outRoads[2] = *input_outroad2;
	outRoads[3] = *input_outroad3;
	occupied = inputoccupied;
}
