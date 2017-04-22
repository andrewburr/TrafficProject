//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "Box.h"
#include <iostream>

using namespace std;

//~~Getter Functions
int Box::getPos_X()
{
	return Pos_X;
}

int Box::getPos_Y()
{
	return Pos_Y;
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


//~~Setter Functions
void Box::setPos_X(int input)
{
	Pos_X = input;
}

void Box::setPos_Y(int input)
{
	Pos_Y = input;
}

void Box::setPointerRoad(Road* input)
{
	pointerRoad = input;
	pointerJunction = NULL;
	pointerTJunction = NULL;
}

void Box::setPointerTJunction(TJunction* input)
{
	pointerTJunction = input;
	pointerRoad = NULL;
	pointerJunction = NULL;
}

void Box::setPointerJunction(Junction* input)
{
	pointerJunction = input;
	pointerRoad = NULL;
	pointerTJunction = NULL;
}

//~~ Other Functions
int Box::checkContent()		//Checks what type of object occupies the box
{
	if (pointerJunction == NULL && pointerRoad == NULL && pointerTJunction == NULL) // checks if all pointers are NULL
	{
		return 0;	//returns 0 if empty
	}
	else if (pointerRoad != NULL) // checks if road pointer is not NULL
	{
		return 1;	//returns 1 if road
	}
	else if (pointerTJunction != NULL) // checks if TJunction pointer is not NULL
	{
		return 2;	//returns 2 if TJunction
	}
	else if (pointerJunction != NULL) // checks if crossroad pointer is not NULL
	{
		return 3;	//returns 3 if Crossroads
	}
}

void Box::setOccupied(bool input) // takes one boolean input parameter
{
	int content = this->checkContent(); // checks what is occupying the box

	if (content == 1)			// if the box is occupied by a road, sets the instance of the road's occupied data member to the input parameter
	{
		Road* tempRoad;
		tempRoad = this->getPointerRoad();
		tempRoad->setOccupied(input);
	}

	if (content == 2)			// if the box is occupied by a TJunction, sets the instance of the TJunction's occupied data member to the input parameter
	{
		TJunction* tempTJ;
		tempTJ = this->getPointerTJunction();
		tempTJ->setOccupied(input);
	}

	if (content == 1)			// if the box is occupied by a crossroad, sets the instance of the crossroad's occupied data member to the input parameter
	{
		Junction* tempJunction;
		tempJunction = this->getPointerJunction();
		tempJunction->setOccupied(input);
	}
}

//~~Constructors
Box::Box()			// default constructor
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
	pointerRoad = NULL;
	pointerTJunction = NULL;
	pointerJunction = NULL;
}
