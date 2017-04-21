#include "Bike.h"

Bike::Bike()
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}

Bike::Bike(TimeClass* time_input, int x_input, int y_input, int orientation_input)
{
	pos_x = x_input;
	pos_y = y_input;
	orientation = orientation_input;
	TimeRef = time_input;
}

Bike::~Bike(){}
/*
int Bike::getOrientation()
{
	return orientation;
}*/

/*void Bike::setOrientation(int input)
{
	orientation = input;
}*/