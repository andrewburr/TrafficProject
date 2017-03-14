//EE273 Project
//Cameron Fleming

#include "Pedestrian.h"
#include <iostream>

using namespace std;

//Constructor
Pedestrian::Pedestrian()
{	
	Pos_X = 0;
	Pos_Y = 0;
	TimeRef = NULL;
}

Pedestrian::Pedestrian(int x_input, int y_input, TimeClass* time_input)
{
	Pos_X = x_input;
	Pos_Y = y_input;
	TimeRef = time_input;
}

//Deconstructor
Pedestrian::~Pedestrian(){}

//Getter Functions
int Pedestrian::getPos_X()
{
	return Pos_X;
}

int Pedestrian::getPos_Y()
{
	return Pos_Y;
}

int Pedestrian::getTime()
{
	return TimeRef->getTime();
}

//Setter Functions
void Pedestrian::setPos_X(int input)
{
	Pos_X = input;
}

void Pedestrian::setPos_Y(int input)
{
	Pos_Y = input;
}
