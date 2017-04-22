//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#ifndef TIMECLASS_H
#define TIMECLASS_H
#include <iostream>

using namespace std;

class TimeClass
{
protected:
	int time;				//Time data member in seconds

public:
	//~~Getter Functions
	int getTime();			// returns time in seconds
	
	//~~Setter Functions
	void incrementTime();	// increases the number of seconds by 1
	void resetTime();		// sets the number of seconds to 0
	
	//~~Constructor Function
	TimeClass();			// sets time to 0

	//~~Destructor Function
	virtual ~TimeClass(){};
};

#endif