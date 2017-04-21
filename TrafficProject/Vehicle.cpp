#include "Vehicle.h"
#include <stdlib.h>

Vehicle::Vehicle()
{
	TimeRef = NULL;
	pos_x = 0;
	pos_y = 0;
}

Vehicle::Vehicle(TimeClass* time_input, int x_input, int y_input)
{
	TimeRef = time_input;
	pos_x = x_input;
	pos_y = y_input;
}

Vehicle::~Vehicle(){};

void Vehicle::setPosX(int input)
{
	pos_x = input;
}

void Vehicle::setPosY(int input)
{
	pos_y = input;
}

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

void Vehicle::setOrientation(int input)
{
	orientation = input;
}

bool Vehicle::checkNextBox(Map input)
{
	int x, y;
	x = this->getPosX();
	y = this->getPosY();
	if (orientation == 0)
	{
		if (input.getBox(x, y + 1)->checkContent() == 0)
		{
			return false;
		}
		
		if (input.getBox(x, y + 1)->checkContent() == 1)
		{
			Road* tempRoad;
			tempRoad = input.getBox(x, y + 1)->getPointerRoad();
			if (tempRoad->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}

		}
		
		else if (input.getBox(x, y + 1)->checkContent() == 2)
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x, y + 1)->getPointerTJunction();
			if (tempTJ->getOrientation() == 0)
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(2) == 1 && tempTJ->getOccupied() == false)
				{
					return true;
				}

				else
				{
					return false;
				}

			}
			
		}

		else if (input.getBox(x, y + 1)->checkContent() == 3)
		{
			Junction* tempJunction;
			tempJunction = input.getBox(x, y + 1)->getPointerJunction();
			if (tempJunction->getSignal(2) == 1 && tempJunction->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}
		}
	}

	if (orientation == 1)
	{
		if (input.getBox(x +1, y)->checkContent() == 0)
		{
			return false;
		}

		if (input.getBox(x + 1, y)->checkContent() == 1)
		{
			Road* tempRoad;
			tempRoad = input.getBox(x + 1, y)->getPointerRoad();
			if (tempRoad->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}

		}

		else if (input.getBox(x + 1, y)->checkContent() == 2)
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x + 1, y)->getPointerTJunction();
			if (tempTJ->getOrientation() == 1)
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(3) == 1 && tempTJ->getOccupied() == false)
				{
					return true;
				}

				else
				{
					return false;
				}

			}

		}

		else if (input.getBox(x + 1, y)->checkContent() == 3)
		{
			Junction* tempJunction;
			tempJunction = input.getBox(x + 1, y)->getPointerJunction();
			if (tempJunction->getSignal(3) == 1 && tempJunction->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}
		}
	}

	if (orientation == 2)
	{
		if (input.getBox(x , y - 1)->checkContent() == 0)
		{
			return false;
		}

		if (input.getBox(x, y - 1)->checkContent() == 1)
		{
			Road* tempRoad;
			tempRoad = input.getBox(x, y - 1)->getPointerRoad();
			if (tempRoad->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}

		}

		else if (input.getBox(x, y - 1)->checkContent() == 2)
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x, y - 1)->getPointerTJunction();
			if (tempTJ->getOrientation() == 2)
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(0) == 1 && tempTJ->getOccupied() == false)
				{
					return true;
				}

				else
				{
					return false;
				}

			}

		}

		else if (input.getBox(x, y - 1)->checkContent() == 3)
		{
			Junction* tempJunction;
			tempJunction = input.getBox(x, y - 1)->getPointerJunction();
			if (tempJunction->getSignal(0) == 1 && tempJunction->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}
		}
	}

	if (orientation == 3)
	{
		if (input.getBox(x - 1, y)->checkContent() == 0)
		{
			return false;
		}

		if (input.getBox(x - 1, y)->checkContent() == 1)
		{
			Road* tempRoad;
			tempRoad = input.getBox(x - 1, y)->getPointerRoad();
			if (tempRoad->getOccupied() == false)
			{
				return true;
			}

			else
			{
				return false;
			}

		}

		else if (input.getBox(x - 1, y)->checkContent() == 2)
		{
			TJunction* tempTJ;
			tempTJ = input.getBox(x - 1, y)->getPointerTJunction();
			if (tempTJ->getOrientation() == 3)
			{
				return false;
			}

			else
			{
				if (tempTJ->getSignal(1) == 1 && tempTJ->getOccupied() == false)
				{
					return true;
				}

				else
				{
					return false;
				}

			}

		}

		else if (input.getBox(x - 1, y)->checkContent() == 3)
		{
			Junction* tempJunction;
			tempJunction = input.getBox(x - 1, y)->getPointerJunction();
			if (tempJunction->getSignal(1) == 1 && tempJunction->getOccupied() == false)
			{
				return true;
			}

			else
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
	y = this->getPosY();

	Box* tempBox;
	tempBox = input.getBox(x, y);
	int content;
	content = tempBox->checkContent();

	if (content == 3)
	{
		int directionChange;
		directionChange = rand() % 1 + -1;
		this->rotateOrientation(directionChange);
	}

	if (content == 2)
	{
		int directionChange;
		directionChange = rand() % 1 + 0;
		
		if (tempBox->getPointerTJunction()->getOrientation() == 0)
		{
			if (this->getOrientation() == 2)
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
				if (directionChange == 1)
				{
					this->setOrientation(0);
				}
			}

		}

		if (tempBox->getPointerTJunction()->getOrientation() == 1)
		{
			if (this->getOrientation() == 3)
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

			else
			{
				if (directionChange == 1)
				{
					this->setOrientation(1);
				}
			}

		}
		if (tempBox->getPointerTJunction()->getOrientation() == 2)
		{
			if (this->getOrientation() == 0)
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
				if (directionChange == 1)
				{
					this->setOrientation(2);
				}
			}

		}
		if (tempBox->getPointerTJunction()->getOrientation() == 3)
		{
			if (this->getOrientation() == 1)
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

			else
			{
				if (directionChange == 1)
				{
					this->setOrientation(3);
				}
			}

		}
	}

	if (this->checkNextBox(input) == true)
	{
		if (this->getOrientation() == 0)
		{
			this->setPosY(y + 1);
			input.getBox(x, y)->setOccupied(false);
			input.getBox(x, y + 1)->setOccupied(true);
		}
		
		if (this->getOrientation() == 1)
		{
			this->setPosX(x + 1);
			input.getBox(x, y)->setOccupied(false);
			input.getBox(x + 1, y)->setOccupied(true);
		}
		
		if (this->getOrientation() == 2)
		{
			this->setPosY(y - 1);
			input.getBox(x, y)->setOccupied(false);
			input.getBox(x, y - 1)->setOccupied(true);
		}
		
		if (this->getOrientation() == 3)
		{
			this->setPosX(x - 1);
			input.getBox(x, y)->setOccupied(false);
			input.getBox(x - 1, y)->setOccupied(true);
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