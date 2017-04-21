#ifndef MAP_H
#define MAP_H
#include "Box.h"

class Map
{
protected:
	Box grid[20][20];

public:
	Map(){};
	~Map(){};

	//getters
	Box* getBox(int, int);
};


#endif