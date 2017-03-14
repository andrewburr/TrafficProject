#include "Crossroads.h"

void Crossroads::setRoads(Road* input0, Road* input1, Road* input2, Road* input3)
{
	roads[0] = *input0;
	roads[1] = *input1;
	roads[2] = *input2;
	roads[3] = *input3;
}

Road* Crossroads::getRoad(int input)
{
	return &roads[input];
}

Crossroads::Crossroads(TimeClass* time_input, Road* input_road0, Road* input_road1, Road* input_road2, Road* input_road3, int input_xpos, int input_ypos)
{
	TimeRef = time_input;
	roads[0] = *input_road0;
	roads[1] = *input_road1;
	roads[2] = *input_road2;
	roads[3] = *input_road3;
	this->setPosX(input_xpos);
	this->setPosY(input_ypos);
}

Crossroads::~Crossroads()
{
	delete roads;
}