#include "TimeClass.h"

TimeClass::TimeClass()
{
	time = 0;
}

TimeClass::~TimeClass(){}

void TimeClass::incrementTime()
{
	time++;
}

int TimeClass::getTime()
{
	return this->time;
}

void TimeClass::resetTime()
{
	time = 0;
}