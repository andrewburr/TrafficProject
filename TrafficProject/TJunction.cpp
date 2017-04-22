//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "TJunction.h"



TJunction::TJunction(TimeClass* time_input, Road* input_inroad0, Road* input_inroad1, Road* input_inroad2, Road* input_outroad0, Road* input_outroad1, Road* input_outroad2, int input_xpos, int input_ypos, int input_orientation, bool inputoccupied)
{
	TimeRef = time_input;
	orientation = input_orientation;
	if (orientation == 0) // depending on the orientation, sets the in and out roads to the correct directions
	{
		inRoads[0] = *input_inroad0;
		inRoads[1] = *input_inroad1;
		inRoads[3] = *input_inroad2;
		outRoads[0] = *input_outroad0;
		outRoads[1]= *input_outroad1;
		outRoads[3] = *input_outroad2;
	}

	if (orientation == 1)
	{
		inRoads[0] = *input_inroad0;
		inRoads[1] = *input_inroad1;
		inRoads[2] = *input_inroad2;
		outRoads[0] = *input_outroad0;
		outRoads[1] = *input_outroad1;
		outRoads[2] = *input_outroad2;
	}

	if (orientation == 2)
	{
		inRoads[1] = *input_inroad0;
		inRoads[2] = *input_inroad1;
		inRoads[3] = *input_inroad2;
		outRoads[1] = *input_outroad0;
		outRoads[2] = *input_outroad1;
		outRoads[3] = *input_outroad2;
	}

	if (orientation == 3)
	{
		inRoads[0] = *input_inroad0;
		inRoads[2] = *input_inroad1;
		inRoads[3] = *input_inroad2;
		outRoads[0] = *input_outroad0;
		outRoads[2] = *input_outroad1;
		outRoads[3] = *input_outroad2;
	}
	this->setPosX(input_xpos);
	this->setPosY(input_ypos);
	occupied = inputoccupied;
	
}

int TJunction::getOrientation()
{
	return orientation;
}

TJunction::TJunction() // default constructor
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}

void TJunction::updateSignals()
{
	if (orientation == 0) 
	{
		int time = this->getTime(); // gets global time
		int stage = time % 12;		// finds the mod 12 of the time since the pattern repeats every 12 seconds

		if (0 <= stage <= 3)		// updates the traffic signals so that one is always green
		{
			signals[0] = 1;
			signals[1] = 0;
			signals[3] = 0;
		}

		if (4 <= stage <= 7)
		{
			signals[0] = 0;
			signals[1] = 1;
			signals[3] = 0;
		}

		if (8 <= stage <= 11)
		{
			signals[0] = 0;
			signals[1] = 0;
			signals[3] = 1;
		}

	}

	if (orientation == 1)
	{
		int time = this->getTime();
		int stage = time % 12;

		if (0 <= stage <= 3)
		{
			signals[0] = 1;
			signals[1] = 0;
			signals[2] = 0;
		}

		if (4 <= stage <= 7)
		{
			signals[0] = 0;
			signals[1] = 1;
			signals[2] = 0;
		}

		if (8 <= stage <= 11)
		{
			signals[0] = 0;
			signals[1] = 0;
			signals[2] = 1;
		}

	}

	if (orientation == 2)
	{
		int time = this->getTime();
		int stage = time % 12;

		if (0 <= stage <= 3)
		{
			signals[1] = 1;
			signals[2] = 0;
			signals[3] = 0;
		}

		if (4 <= stage <= 7)
		{
			signals[1] = 0;
			signals[2] = 1;
			signals[3] = 0;
		}

		if (8 <= stage <= 11)
		{
			signals[1] = 0;
			signals[2] = 0;
			signals[3] = 1;
		}

	}

	if (orientation == 3)
	{
		int time = this->getTime();
		int stage = time % 12;

		if (0 <= stage <= 3)
		{
			signals[0] = 1;
			signals[2] = 0;
			signals[3] = 0;
		}

		if (4 <= stage <= 7)
		{
			signals[0] = 0;
			signals[2] = 1;
			signals[3] = 0;
		}

		if (8 <= stage <= 11)
		{
			signals[0] = 0;
			signals[2] = 0;
			signals[3] = 1;
		}

	}
}
