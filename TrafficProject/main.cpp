//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Road.h"
#include "Box.h"
#include <iostream>

using namespace std;

int main()
{
	TimeClass globalTime;
	Map network;
	Car tempCar(&globalTime, 3, 3, 0);

	cout << tempCar.getOrientation() << endl;
	tempCar.rotateOrientation(2);
	cout << tempCar.getOrientation() << endl;
	tempCar.rotateOrientation(2);
	cout << tempCar.getOrientation() << endl;

	system("PAUSE");
	return 0;
}