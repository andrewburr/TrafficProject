//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "Map.h"

//~~Getter Function
Box* Map::getBox(int inputX, int inputY)
{
	return &grid[inputX][inputY];
}