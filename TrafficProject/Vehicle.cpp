#include "Vehicle.h"

Vehicle::Vehicle()
{
	TimeRef = NULL;
	pos_x = 0;
	pos_y = 0;
}

Vehicle::Vehicle(TimeClass* time_input, int x_input, int y_input)
{
	TimeRef = time_input;
	pos_x = x_input;
	pos_y = y_input;
}

Vehicle::~Vehicle(){};

void Vehicle::setPosX(int input)
{
	pos_x = input;
}

void Vehicle::setPosY(int input)
{
	pos_y = input;
}

int Vehicle::getPosX()
{
	return pos_x;
}

int Vehicle::getPosY()
{
	return pos_y;
}

int Vehicle::getTime()
{
	return TimeRef->getTime();
}