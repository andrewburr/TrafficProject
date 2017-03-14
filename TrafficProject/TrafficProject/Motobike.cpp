#include "Motorbike.h"

Motorbike::Motorbike()
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}

Motorbike::Motorbike(TimeClass* time_input, int x_input, int y_input, int orientation_input)
{
	pos_x = x_input;
	pos_y = y_input;
	orientation = orientation_input;
	TimeRef = time_input;
}

Motorbike::~Motorbike(){}

int Motorbike::getOrientation()
{
	return orientation;
}

void Motorbike::setOrientation(int input)
{
	orientation = input;
}