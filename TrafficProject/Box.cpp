//EE273 Project
//Cameron Fleming

#include "Box.h"
#include <iostream>

using namespace std;

Box::Box()
{
	Pos_X = -1;
	Pos_Y = -1;
	pointerRoad = NULL;
	pointerTJunction = NULL;
	pointerJunction = NULL;
}

Box::Box(int input_x, int input_y)
{
	Pos_X = input_x;
	Pos_Y = input_y;
}

int Box::getPos_X()
{
	return Pos_X;
}

int Box::getPos_Y()
{
	return Pos_Y;
}

void Box::setPos_X(int input)
{
	Pos_X = input;
}

void Box::setPos_Y(int input)
{
	Pos_Y = input;
}

Road* Box::getPointerRoad()
{
	return pointerRoad;
}

TJunction* Box::getPointerTJunction()
{
	return pointerTJunction;
}

Junction* Box::getPointerJunction()
{
	return pointerJunction;
}

void Box::setPointerRoad(Road* input)
{
	pointerRoad = input;
}

void Box::setPointerTJunction(TJunction* input)
{
	pointerTJunction = input;
}

void Box::setPointerJunction(Junction* input)
{
	pointerJunction = input;
}

int Box::checkContent()		//Checks what type of object occupies the box
{
	if (pointerJunction == NULL && pointerRoad == NULL && pointerTJunction == NULL)
	{
		return 0;	//returns 0 if empty
	}
	else if (pointerRoad != NULL)
	{
		return 1;	//returns 1 if road
	}
	else if (pointerTJunction != NULL)
	{
		return 2;	//returns 2 if TJunction
	}
	else if (pointerJunction != NULL)
	{
		return 3;	//returns 3 if Crossroads
	}
}

void Box::setOccupied(bool input)
{
	int content = this->checkContent();

	if (content == 1)
	{
		Road* tempRoad;
		tempRoad = this->getPointerRoad();
		tempRoad->setOccupied(input);
	}

	if (content == 2)
	{
		TJunction* tempTJ;
		tempTJ = this->getPointerTJunction();
		tempTJ->setOccupied(input);
	}

	if (content == 1)
	{
		Junction* tempJunction;
		tempJunction = this->getPointerJunction();
		tempJunction->setOccupied(input);
	}
}