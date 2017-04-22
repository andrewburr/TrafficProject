//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "TimeClass.h"

TimeClass::TimeClass()
{
	time = 0;
}

void TimeClass::incrementTime()
{
	time++;
}

int TimeClass::getTime()
{
	return time;
}

void TimeClass::resetTime()
{
	time = 0;
}