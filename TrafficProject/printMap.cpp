// EE273 Project Group 24
// Andrew Burr & Cameron Fleming 

#include <iostream>
#include "Box.h"
#include "Map.h"



/* IF BOX IS EMPTY
{
	charArray[(3 * x)][(3 * y)] = { ' ' };
	charArray[(3 * x) + 1][(3 * y)] = { ' ' };
	charArray[(3 * x) + 2][(3 * y)] = { ' ' };
	charArray[(3 * x)][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { ' ' };
	charArray[(3 * x)][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 2] = { ' ' };
}

IF BOX CONTAINS VERTICAL ROAD
{
	charArray[(3 * x)][(3 * y)] = { 179 };
	charArray[(3 * x) + 1][(3 * y)] = { 179 };
	charArray[(3 * x) + 2][(3 * y)] = { 179 };
	charArray[(3 * x)][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { ' ' };
	charArray[(3 * x)][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 179 };
}

IF BOX CONTAINS HORIZONTAL ROAD	
{
	charArray[(3 * x)][(3 * y)] = { 196 };
	charArray[(3 * x) + 1][(3 * y)] = { ' ' };
	charArray[(3 * x) + 2][(3 * y)] = { 196 };
	charArray[(3 * x)][(3 * y) + 1] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { 196 };
	charArray[(3 * x)][(3 * y) + 2] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 196 };
}

IF BOX CONTAINS TJUNCTION
{
	charArray[(3 * x)][(3 * y)] = { 218 };
	charArray[(3 * x) + 1][(3 * y)] = { 179 };
	charArray[(3 * x) + 2][(3 * y)] = { 192 };
	charArray[(3 * x)][(3 * y) + 1] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { 196 };
	charArray[(3 * x)][(3 * y) + 2] = { 191 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 217 };
}

IF BOX CONTAINS CROSSROADS
{
	charArray[(3 * x)][(3 * y)] = { 218 };
	charArray[(3 * x) + 1][(3 * y)] = { 179 };
	charArray[(3 * x) + 2][(3 * y)] = { 192 };
	charArray[(3 * x)][(3 * y) + 1] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { 196 };
	charArray[(3 * x)][(3 * y) + 2] = { 191 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 217 };
}

IF BOX CONTAINS TOP LEFT CORNER
{
	charArray[(3 * x)][(3 * y)] = { 218 };
	charArray[(3 * x) + 1][(3 * y)] = { 179 };
	charArray[(3 * x) + 2][(3 * y)] = { 179 };
	charArray[(3 * x)][(3 * y) + 1] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { ' ' };
	charArray[(3 * x)][(3 * y) + 2] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 2] = { ' ' };
}

IF BOX CONTAINS TOP RIGHT CORNER
{
	charArray[(3 * x)][(3 * y)] = { 196 };
	charArray[(3 * x) + 1][(3 * y)] = { ' ' };
	charArray[(3 * x) + 2][(3 * y)] = { ' ' };
	charArray[(3 * x)][(3 * y) + 1] = { 196 };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { ' ' };
	charArray[(3 * x)][(3 * y) + 2] = { 191 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 179 };
}

IF BOX CONTAINS BOTTOM LEFT CORNER
{
	charArray[(3 * x)][(3 * y)] = { 179 };
	charArray[(3 * x) + 1][(3 * y)] = { 179 };
	charArray[(3 * x) + 2][(3 * y)] = { 192 };
	charArray[(3 * x)][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { 196 };
	charArray[(3 * x)][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 2] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 196 };
}

IF BOX CONTAINS BOTTOM RIGHT CORNER
{
	charArray[(3 * x)][(3 * y)] = { ' ' };
	charArray[(3 * x) + 1][(3 * y)] = { ' ' };
	charArray[(3 * x) + 2][(3 * y)] = { 196 };
	charArray[(3 * x)][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 1][(3 * y) + 1] = { ' ' };
	charArray[(3 * x) + 2][(3 * y) + 1] = { 196 };
	charArray[(3 * x)][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 1][(3 * y) + 2] = { 179 };
	charArray[(3 * x) + 2][(3 * y) + 2] = { 217 };
}

}*/