//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef MAP_H
#define MAP_H
#include "Box.h"

class Map
{
protected:
	Box grid[20][20];			// creates a 20 by 20

public:
	//~~Getter Function
	Box* getBox(int, int);		// returns pointer to box at given coordinates

	//~~Constructor Function
	Map(){};

	//~~Destructor Function
	~Map(){};
};


#endif