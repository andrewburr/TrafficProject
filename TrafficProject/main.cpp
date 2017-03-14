#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Motorbike.h"


using namespace std;

int main()
{
	TimeClass globalTime;
	Motorbike test(&globalTime, 0, 2, 1);

	globalTime.incrementTime();

	cout << "Pos : " << test.getPosX() << " " << test.getPosY() << endl;
	cout << "Time : " << test.getTime() << endl;
	cout << "Orientation: " << test.getOrientation() << endl;

	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	system("Pause");
	return 0;
}