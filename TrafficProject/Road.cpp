//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "Road.h"
#include <iostream>
#include <string>

using namespace std;

//~~Getter Functions

int Road::getOrientation()
{
	return Orientation;
}

int Road::getPos_X()
{
	return Pos_X;
}

int Road::getPos_Y()
{
	return Pos_Y;
}

//~~Setter Functions

void Road::setOrientation(int input)
{
	Orientation = input;
}

void Road::setPos_X(int input)
{
	Pos_X = input;
}

void Road::setPos_Y(int input)
{
	Pos_Y = input;
}

bool Road::getOccupied()
{
	return occupied;
}

void Road::setOccupied(bool input)
{
	occupied = input;
}

//~~Constructor Functions
Road::Road()		//sets orientation to north, coordinates to (0,0), and occupied to false
{
	Orientation = 0;
	Pos_X = 0;
	Pos_Y = 0;
	occupied = false;
}

Road::Road(string Type, int Orientation, int X_input, int Y_input, bool occupied_input) // sets orientation, position and occupied
{
	this->Orientation = Orientation;
	Pos_X = X_input;
	Pos_Y = Y_input;
	occupied = occupied_input;
}