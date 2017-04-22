//EE273 Project - Group 24
//Cameron Fleming and Andrew Burr

#include "Vehicle.h"
#include <stdlib.h>

//~~Getter Functions
int Vehicle::getPosX()
{
	return pos_x;
}

int Vehicle::getPosY()
{
	return pos_y;
}

int Vehicle::getTime()
{
	return TimeRef->getTime();
}

int Vehicle::getOrientation()
{
	return orientation;
}

//~~Setter Functions

void Vehicle::setPosX(int input)
{
	pos_x = input;
}

void Vehicle::setPosY(int input)
{
	pos_y = input;
}

void Vehicle::setOrientation(int input)
{
	orientation = input;
}

bool Vehicle::checkNextBox(Map input)
{
	int x, y;
	x = this->getPosX();
	y = this->getPosY(); // obtains coordinates for the vehicle
	if (orientation == 0)// if the vehicle is pointing north
	{
		if (input.getBox(x, y + 1)->checkContent() == 0)// if the next box is empty, return false
		{
			return false;
		}
		
		if (input.getBox(x, y + 1)->checkContent() == 1)// if the next box is a road
		{
			Road* tempRoad;
			tempRoad = input.getBox(x, y + 1)->getPointerRoad(); // creates a tempory pointer to the road in the next box
			if (tempRoad->getOccupied() == false) // if the next road is empty, return true
			{
				return true;
			}

			else // if the next road is occupied, return false
			{
				return false;
			}
				
		}
		
		else if (input.getBox(x, y + 1)->checkContent() == 2) // if the next box is a TJunction
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x, y + 1)->getPointerTJunction(); // creates a tempory pointer to the TJunction in the next box
			if (tempTJ->getOrientation() == 0) // if the TJunction is orientated such that there is no road for the vehicle to enter, return false
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(2) == 1 && tempTJ->getOccupied() == false) // if there is a green light and the junction is not occupied, return true
				{
					return true;
				}

				else // if there is a red light or the junction has a vehicle in it, return false
				{
					return false;
				}

			}
			
		}

		else if (input.getBox(x, y + 1)->checkContent() == 3)
		{
			Junction* tempJunction;	// creates a tempory pointer to the crossroad in the next box
			tempJunction = input.getBox(x, y + 1)->getPointerJunction();
			if (tempJunction->getSignal(2) == 1 && tempJunction->getOccupied() == false) // if the crossroad is not occupied and there is a green light, return true
			{
				return true;
			}

			else // if the crossroad is occuppied or there is a red light, return false
			{
				return false;
			}
		}
	}

	if (orientation == 1) // if the vehicle is pointing east
	{
		if (input.getBox(x +1, y)->checkContent() == 0) // if the next box is empty, return false
		{
			return false;
		}

		if (input.getBox(x + 1, y)->checkContent() == 1) // if the next box is a road
		{
			Road* tempRoad; // creates a tempory pointer to the road in the next box
			tempRoad = input.getBox(x + 1, y)->getPointerRoad();
			if (tempRoad->getOccupied() == false) // if the road does not have a vehicle in it, return true
			{
				return true;
			}

			else // if the road does have a vehicle in it, return false
			{
				return false;
			}

		}

		else if (input.getBox(x + 1, y)->checkContent() == 2) // if the next box is a TJunction
		{
			TJunction* tempTJ; // create a tempory pointer to the TJunction in the next box
			tempTJ = input.getBox(x + 1, y)->getPointerTJunction();
			if (tempTJ->getOrientation() == 1) // if the TJunction is orientated such that there is no road for the vehicle to enter, return false
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(3) == 1 && tempTJ->getOccupied() == false) // if there is a green light and the TJunction is not occupied, return true
				{
					return true;
				}

				else // if there is a red light or the TJunction is occupied, return false
				{
					return false;
				}

			}

		}

		else if (input.getBox(x + 1, y)->checkContent() == 3) // if the next box is a crossroads
		{
			Junction* tempJunction; // create a tempory pointer to the crossroads in the next box
			tempJunction = input.getBox(x + 1, y)->getPointerJunction();
			if (tempJunction->getSignal(3) == 1 && tempJunction->getOccupied() == false) // if there is a green light and the crossroads is not occupied, return true
			{
				return true;
			}

			else // if there is a red light or the crossroads is occupied, return false
			{
				return false;
			}
		}
	}

	if (orientation == 2) // if the vehicle is pointing south
	{
		if (input.getBox(x , y - 1)->checkContent() == 0) // if the next box is empty, return false
		{
			return false;
		}

		if (input.getBox(x, y - 1)->checkContent() == 1) // if the next box is a road
		{
			Road* tempRoad; // create a tempory pointer to the road in the next box
			tempRoad = input.getBox(x, y - 1)->getPointerRoad();
			if (tempRoad->getOccupied() == false) // if the next road is not occupied, return true
			{
				return true;
			}

			else // if the next road is occupied, return false
			{
				return false;
			}

		}

		else if (input.getBox(x, y - 1)->checkContent() == 2) // if the next box contains a TJunction
		{
			TJunction* tempTJ; // creates a tempory pointer to the TJunction in the next box
			tempTJ = input.getBox(x, y - 1)->getPointerTJunction();
			if (tempTJ->getOrientation() == 2) // if the TJunction is orientated such that there is no road for the vehicle to enter, return false 
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(0) == 1 && tempTJ->getOccupied() == false) // if there is a green light and the TJunction is not occupied, return true
				{
					return true;
				}

				else // if there is a red light or the TJunction is occupied, return false
				{
					return false;
				}

			}

		}

		else if (input.getBox(x, y - 1)->checkContent() == 3) // if the next box is a crossroads
		{
			Junction* tempJunction; // creates a tempory pointer to the crossroads in the next box
			tempJunction = input.getBox(x, y - 1)->getPointerJunction();
			if (tempJunction->getSignal(0) == 1 && tempJunction->getOccupied() == false) // if there is a green light and the crossroads is not occupied, return true
			{
				return true;
			}

			else // if there is a red light or the crossroads is occupied, return false
			{
				return false;
			}
		}
	}

	if (orientation == 3) // if the vehicle is pointing west
	{
		if (input.getBox(x - 1, y)->checkContent() == 0) // if the next box is empty, return false
		{
			return false;
		}

		if (input.getBox(x - 1, y)->checkContent() == 1) // if the next box is a road
		{
			Road* tempRoad; // create a tempory pointer to the road in the next box
			tempRoad = input.getBox(x - 1, y)->getPointerRoad();
			if (tempRoad->getOccupied() == false) // if the road is not occupied, return true
			{
				return true;
			}

			else // if the road is occupied, return false
			{
				return false;
			}

		}

		else if (input.getBox(x - 1, y)->checkContent() == 2) // if the next box is a TJunction
		{
			TJunction* tempTJ; // creates a tempory pointer to the TJunction in the next box
			tempTJ = input.getBox(x - 1, y)->getPointerTJunction();
			if (tempTJ->getOrientation() == 3) // if the TJunction is orientated such that there is no road for the vehicle to enter, return false 
			{
				return false;
			}

			else 
			{
				if (tempTJ->getSignal(1) == 1 && tempTJ->getOccupied() == false) // if there is a green light and the TJunction is not occupied, return true
				{
					return true;
				}

				else // if there is a red light or the TJunction is occupied, return false
				{
					return false;
				}

			}

		}

		else if (input.getBox(x - 1, y)->checkContent() == 3) // if the next box is a crossroads
		{
			Junction* tempJunction; // creates a tempory pointer to the crossroads in the next box
			tempJunction = input.getBox(x - 1, y)->getPointerJunction();
			if (tempJunction->getSignal(1) == 1 && tempJunction->getOccupied() == false) // if there is a green light and the crossroads in not occupied, return true
			{
				return true;
			}

			else // if there is a red light or the crossroads is occupied, return false
			{
				return false;
			}
		}
	}
}

void Vehicle::moveNext(Map input)
{
	int x, y;
	x = this->getPosX();
	y = this->getPosY(); // get the coordinates of the vehicle

	Box* tempBox;
	tempBox = input.getBox(x, y);
	int content;
	content = tempBox->checkContent(); // find out what type of 

	if (content == 3) // if the next box is a crossroads, pick a random direction - straight ahead, left, or right
	{
		int directionChange;
		directionChange = rand() % 1 + -1;
		this->rotateOrientation(directionChange);
	}

	if (content == 2)
	{
		
	if (this->checkNextBox(input) == true)
	{
		int directionChange;
		directionChange = rand() % 1 + 0;

		if (tempBox->getPointerTJunction()->getOrientation() == 0)
		{
			if (this->getOrientation() == 2) // if the vehicle is on the minor road, pick a random direction - left or right
			{
				if (directionChange == 0)
				{
					this->setOrientation(1);
				}
				else
				{
					this->setOrientation(3);
				}
			}

			else
			{
				if (directionChange == 1) // if the vehicle is on the major road, pick a random direction - straight ahead or minor road
				{
					this->setOrientation(0);
				}
			}

		}

		if (tempBox->getPointerTJunction()->getOrientation() == 1)
		{
			if (this->getOrientation() == 3)// if the vehicle is on the minor road, pick a random direction - left or right
			{
				if (directionChange == 0)
				{
					this->setOrientation(0);
				}
				else
				{
					this->setOrientation(2);
				}
			}

			else // if the vehicle is on the major road, pick a random direction - straight ahead or minor road
			{
				if (directionChange == 1)
				{
					this->setOrientation(1);
				}
			}

		}
		if (tempBox->getPointerTJunction()->getOrientation() == 2)
		{
			if (this->getOrientation() == 0) // if the vehicle is on the minor road, pick a random direction - left or right
			{
				if (directionChange == 0)
				{
					this->setOrientation(1);
				}
				else
				{
					this->setOrientation(3);
				}
			}

			else // if the vehicle is on the major road, pick a random direction - straight ahead or minor road
			{
				if (directionChange == 1)
				{
					this->setOrientation(2);
				}
			}

		}
		if (tempBox->getPointerTJunction()->getOrientation() == 3)
		{
			if (this->getOrientation() == 1) // if the vehicle is on the minor road, pick a random direction - left or right
			{
				if (directionChange == 0)
				{
					this->setOrientation(0);
				}
				else
				{
					this->setOrientation(2);
				}
			}

			else // if the vehicle is on the major road, pick a random direction - straight ahead or minor road
			{
				if (directionChange == 1)
				{
					this->setOrientation(3);
				}
			}

		}
	}

		if (this->getOrientation() == 0) // if the vehicle is pointing north
		{
			this->setPosY(y + 1); // move the vehicle north
			input.getBox(x, y)->setOccupied(false); // set the old box to unoccupied
			input.getBox(x, y + 1)->setOccupied(true); // set the new box to occupied
		}
		
		if (this->getOrientation() == 1) // if the vehicle is pointing east
		{
			this->setPosX(x + 1); // moves the vehicle east
			input.getBox(x, y)->setOccupied(false); // set the old box to unoccupied
			input.getBox(x + 1, y)->setOccupied(true); // set the new box to occupied
		}
		
		if (this->getOrientation() == 2) // if the vehicle is pointing south
		{
			this->setPosY(y - 1); // move the vehicle south
			input.getBox(x, y)->setOccupied(false); // set the old box to unoccupied
			input.getBox(x, y - 1)->setOccupied(true); // set the new box to occupied
		}
		
		if (this->getOrientation() == 3) // if the vehicle is pointing west
		{
			this->setPosX(x - 1); // move the vehicle west
			input.getBox(x, y)->setOccupied(false); // set the old box to unoccupied
			input.getBox(x - 1, y)->setOccupied(true); // set the new box to occupied
		}
	}
}

void Vehicle::rotateOrientation(int input)
{
	orientation = orientation + input;
	if (orientation < 0)
	{
		orientation = orientation + 4;
	}

	if (orientation > 3)
	{
		orientation = orientation - 4;
	}
}

//~~Constructor Functions
Vehicle::Vehicle() // default constructor
{
	TimeRef = NULL;
	pos_x = 0;
	pos_y = 0;
}

Vehicle::Vehicle(TimeClass* time_input, int x_input, int y_input, int orientation_input)
{
	TimeRef = time_input;
	pos_x = x_input;
	pos_y = y_input;
	orientation = orientation_input;
}