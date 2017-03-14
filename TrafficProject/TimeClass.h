#ifndef TIMECLASS_H
#define TIMECLASS_H
#include <iostream>

using namespace std;

class TimeClass
{
public:
	// Setter functions
	void incrementTime();
	void resetTime();
	
	// Getter Functions
	int getTime();


	TimeClass();				//Constructor
	virtual ~TimeClass();		//Destructor

protected:
	int time;						//Time data members in seconds
};

#endif