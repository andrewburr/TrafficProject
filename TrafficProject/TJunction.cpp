#include "TJunction.h"



TJunction::TJunction(TimeClass* time_input, Road* input_road0, Road* input_road1, Road* input_road2, int input_xpos, int input_ypos, int input_orientation)
{
	TimeRef = time_input;
	roads[0] = *input_road0;
	roads[1] = *input_road1;
	roads[2] = *input_road2;
	this->setPosX(input_xpos);
	this->setPosY(input_ypos);
	orientation = input_orientation;
}

int TJunction::getOrientation()
{
	return orientation;
}

TJunction::TJunction()
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}
