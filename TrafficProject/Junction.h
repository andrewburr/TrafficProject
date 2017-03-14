#ifndef JUNCTION_H
#define JUNCTION_H
#include "TimeClass.h"

class Junction
{
public:
	//Getters
	int getPosX();
	int getPosY();
	bool getPedestrian();
	int getTime();

	//Setters
	void setPosX(int);
	void setPosY(int);
	void setPedestrian(bool);

	//Constructors and Destructors
	Junction();
	Junction(TimeClass*, int, int, bool);
	~Junction();
private:
	int pos_x;
	int pos_y;
	bool pedestrian;
	TimeClass* TimeRef;
};

#endif