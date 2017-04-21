#include "Car.h"

Car::Car()
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}

Car::Car(TimeClass* time_input, int x_input, int y_input, int orientation_input)
{
	pos_x = x_input;
	pos_y = y_input;
	orientation = orientation_input;
	TimeRef = time_input;

}

Car::~Car(){}
/*
int Car::getOrientation()
{
	return orientation;
}

void Car::setOrientation(int input)
{
	orientation = input;
}
*/