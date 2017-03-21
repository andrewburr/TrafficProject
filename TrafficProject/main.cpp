#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Motorbike.h"
#include "Road.h"
#include "Pedestrian.h"
#include "Box.h"

using namespace std;

int main()
{
	TimeClass globalTime;
	Road testRoads[4];
	Crossroads test(&globalTime, &testRoads[0], &testRoads[1], &testRoads[2], &testRoads[3], 4, 4);

	cout << "signal 0: " << test.getSignal(0) << endl;
	cout << "signal 3: " << test.getSignal(3) << endl;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	system("Pause");
	return 0;
}