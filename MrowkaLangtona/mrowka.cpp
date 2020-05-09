#include "mrowka.h"

//implemencja potrzebna na potrzebê vectora w klasie Gra
Mrowka::Mrowka(const Mrowka& m)
{
	coord.x = m.coord.x;
	coord.y = m.coord.y;
	direction = m.direction;
}

Mrowka::Mrowka()
{
	coord.x = 0;
	coord.y = 0;
	direction = North;
}

Mrowka::~Mrowka()
{
	//EMPTY
}

void Mrowka::move()
{
	if (direction == North)
	{
		coord.y--;

		if (coord.y == -1)
			coord.y = 24;
	}
	else if (direction == East)
	{
		coord.x++;
		if (coord.x == 200)
			coord.x = 0;
	}
	else if (direction == South)
	{
		coord.y++;
		if (coord.y == 25)
			coord.y = 0;
	}
	else if(direction == West)
	{
		coord.x--;
		if (coord.x == -1)
			coord.x = 199;
	}
}

void Mrowka::changeDirection(bool isWhite)
{
	if (isWhite)
	{
		direction++;
	}
	else
	{
		direction--;
	}
	
	if (direction == 0)
	{
		direction = West;
	}
	else if (direction == 5)
	{
		direction = North;
	}
}

//bool Mrowka::checkDirection()
//{
//	if (tab[coord.y][coord.x].IsWhite())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}