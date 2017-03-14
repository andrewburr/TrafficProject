#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Motorbike.h"
#include "Road.h"
#include "Pedestrian.h"


using namespace std;

int main()
{
	TimeClass globalTime;

	Pedestrian test(2, 1, &globalTime);

	globalTime.incrementTime();

	cout << "Pos : " << test.getPos_X() << " " << test.getPos_Y() << endl;
	cout << "Time : " << test.getTime() << endl;

	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	system("Pause");
	return 0;
}