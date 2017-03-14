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

Junction::Junction(TimeClass* input_time, int inputX, int inputY, bool inputPed)
{
	pos_x = inputX;
	pos_y = inputY;
	pedestrian = inputPed;
	TimeRef = input_time;
}

Junction::~Junction(){}

int Junction::getTime()
{
	return TimeRef->getTime();
}