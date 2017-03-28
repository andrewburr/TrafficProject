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

int Vehicle::getOrientation()
{
	return orientation;
}

void Vehicle::setOrientation(int input)
{
	orientation = input;
}

/*bool Vehicle::checkNextBox(Map input)
{
	int x, y;
	x = this->getPosX();
	y = this->getPosY();
	if (orientation == 0)
	{
		if (input.getBox(x, y + 1)->checkContent() == 1)
		{
			return true;
		}
		else if (input.getBox(x, y + 1)->checkContent() == 2)
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x, y + 1)->getPointerTJunction();
			//tempTJ->getSignal;
		}
	}
}*/