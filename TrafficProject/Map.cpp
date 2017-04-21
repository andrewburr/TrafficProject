#include "Map.h"

Box* Map::getBox(int inputX, int inputY)
{
	return &grid[inputX][inputY];
}