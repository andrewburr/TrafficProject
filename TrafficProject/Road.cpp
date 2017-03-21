//EE273 Project
//Cameron Fleming

#include "Road.h"
#include <iostream>
#include <string>

using namespace std;

Road::Road()
{
	Type = "temp";
	Orientation = true;
	Pos_X = 0;
	Pos_Y = 0;
}

Road::Road(string Type, int Orientation, int X_input, int Y_input)
{
	this->Type = Type;
	this->Orientation = Orientation;
	Pos_X = X_input;
	Pos_Y = Y_input;
}

Road::~Road(){}

//Getter Functions
string Road::getType()
{
	return Type;
}

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

//Setter Functions
void Road::setType(string input)
{
	Type = input;
}

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