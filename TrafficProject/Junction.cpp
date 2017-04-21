#include "Junction.h"

int Junction::getPosX()
{
	return pos_x;
}

int Junction::getPosY()
{
	return pos_y;
}

bool Junction::getPedestrian()
{
	return pedestrian;
}

void Junction::setPosX(int input)
{
	pos_x = input;
}

void Junction::setPosY(int input)
{
	pos_y = input;
}

void Junction::setPedestrian(bool input)
{
	pedestrian = input;
}

Junction::Junction()
{
	pos_x = 0;
	pos_y = 0;
	pedestrian = false;
}

int Junction::getTime()
{
	return TimeRef->getTime();
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

Road* Junction::getInRoad(int input)
{
	return &inRoads[input];
}

Road* Junction::getOutRoad(int input)
{
	return &outRoads[input];
}


Junction::Junction(TimeClass* input_time, int inputX, int inputY, bool inputPed, bool inputoccupied, Road* input_inroad0, Road* input_inroad1, Road* input_inroad2, Road* input_inroad3, Road* input_outroad0, Road* input_outroad1, Road* input_outroad2, Road* input_outroad3)
{
	pos_x = inputX;
	pos_y = inputY;
	pedestrian = inputPed;
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


int Junction::getSignal(int input)
{
	return signals[input];
}

bool Junction::getOccupied()
{
	return occupied;
}

void Junction::setOccupied(bool input)
{
	occupied = input;
}

void Junction::updateSignals()
{
	int time = this->getTime();
	int stage = time % 16;
	
	if (0 <= stage <= 3)
	{
		signals[0] = 1;
		signals[1] = 0;
		signals[2] = 0;
		signals[3] = 0;
	}

	if (4 <= stage <= 7)
	{
		signals[0] = 0;
		signals[1] = 1;
		signals[2] = 0;
		signals[3] = 0;
	}

	if (8 <= stage <= 11)
	{
		signals[0] = 0;
		signals[1] = 0;
		signals[2] = 1;
		signals[3] = 0;
	}

	if (12 <= stage <= 15)
	{
		signals[0] = 0;
		signals[1] = 0;
		signals[2] = 0;
		signals[3] = 1;
	}
}