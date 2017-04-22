//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef BOX_HPP_
#define BOX_HPP_
#include "Road.h"
#include "TJunction.h"

class Box
{
protected:
	int Pos_X;								// x coordinate
	int Pos_Y;								// y coordinate
	Road* pointerRoad;						// if box is occupied by a road, points to road instance. Otherwise, null
	TJunction* pointerTJunction;			// if box is occupied by a TJunction, points to TJunction instance. Otherwise, null
	Junction* pointerJunction;				// if box is occupied by a crossroad, points to junction instance. Otherwise, null

public:
	//~~Getter Functions
	int getPos_X();							// returns x coordinate
	int getPos_Y();							// returns y coordinate
	Road* getPointerRoad();					// returns pointer to instance of road being occupied by the box
	TJunction* getPointerTJunction();		// returns pointer to instance of TJunction being occupied by the box
	Junction* getPointerJunction();			// returns pointer to instance of junction being occupied by the box
	
	//~~Setter Functions
	void setPos_X(int);						// sets x coordinate to integer input
	void setPos_Y(int);						// sets y coordinate to integer input
	void setPointerRoad(Road*);				// sets pointer to instance of road being occupied by the box
	void setPointerTJunction(TJunction*);	// sets pointer to instance of TJunction being occupied by the box
	void setPointerJunction(Junction*);		// sets pointer to instance of junction being occupied by the box

	//~~Other Functions
	int checkContent();						// if the box is empty, return 0, if occupied by a road, return 1, if occupied by TJunction, return 2, and if occupied by junction, return 3
	void setOccupied(bool);					// if the box is occupied by a road, TJunction or crossroad, set that instance to occupied

	//~~Constructors
	Box();									// default constructor, pointers = NULL, coordinates (-1, -1)
	Box(int, int);							// sets coordinates to input parameters, pointers = NULL

	//~~Deconstructor
	virtual ~Box(){};
};

#endif
