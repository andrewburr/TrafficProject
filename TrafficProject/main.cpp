#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Motorbike.h"
#include "Road.h"
#include "Pedestrian.h"
#include "TJunction.h"
#include "Crossroads.h"


using namespace std;

int main()
{
	TimeClass globalTime;
	Road testroads[5];

	for (int i = 0; i < 5; i++)
	{
		testroads[i] =  Road("oneway", 1, 0, i);
	}

	TJunction test(&globalTime, &testroads[0], &testroads[1], &testroads[2], 0, 2);

	globalTime.incrementTime();

	cout << "Road : " << test.getRoad(0)->getType() << endl;


	test.~TJunction();
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	system("Pause");
	return 0;
}