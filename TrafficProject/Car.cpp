//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "Car.h"

//~~Constructor Functions
Car::Car() // default constructor
{
	pos_x = 0;
	pos_y = 0;
	orientation = 0;
}

Car::Car(TimeClass* time_input, int x_input, int y_input, int orientation_input)
{
	pos_x = x_input;
	pos_y = y_input;
	orientation = orientation_input;
	TimeRef = time_input;

}
