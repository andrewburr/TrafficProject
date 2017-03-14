#include "TimeClass.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Motorbike.h"
#include "Junction.h"


using namespace std;

int main()
{
	TimeClass globalTime;
	Junction test(&globalTime, 0, 2, 1);

	globalTime.incrementTime();

	cout << "Pos : " << test.getPosX() << " " << test.getPosY() << endl;
	cout << "Time : " << test.getTime() << endl;
	cout << "Pedestrian: " << test.getPedestrian() << endl;

	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	system("Pause");
	return 0;
}