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

void Junction::setRoads(Road* input0, Road* input1, Road* input2, Road* input3)
{
	roads[0] = *input0;
	roads[1] = *input1;
	roads[2] = *input2;
	roads[3] = *input3;
}

Road* Junction::getRoad(int input)
{
	return &roads[input];
}

Junction::Junction(TimeClass* input_time, int inputX, int inputY, bool inputPed, Road* input_road0, Road* input_road1, Road* input_road2, Road* input_road3)
{
	pos_x = inputX;
	pos_y = inputY;
	pedestrian = inputPed;
	TimeRef = input_time;
	roads[0] = *input_road0;
	roads[1] = *input_road1;
	roads[2] = *input_road2;
	roads[3] = *input_road3;
}


int Junction::getSignal(int input)
{
	return signals[input];
}