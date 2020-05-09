#include "gra.h"

Gra::Gra()
{
	sizeX = 200;
	sizeY = 25;
	tab = new Komorka * [sizeY];

	for (int i = 0; i < sizeY;i++)
	{
		tab[i] = new Komorka[sizeX];
	}

}

Gra::~Gra()
{
	if(tab)
	{
		for (int i = 0; i < sizeY; i++)
		{
			delete[] tab[i];
		}
		delete[] tab;
	}
	
}

int Gra::setMrowka(int x, int y)
{
	if (x < sizeX && x >= 0 && y < sizeY && y >= 0)
	{
		Mrowka mrowka;

		mrowka.coord.x = x;
		mrowka.coord.y = y;

		mrowki.push_back(mrowka);
		return 0;
	}
	else
		return -1;
}

void Gra::makeStep()
{
	for (unsigned int i = 0; i < mrowki.size(); i++)
	{
		mrowki[i].changeDirection(tab[mrowki[i].coord.y][mrowki[i].coord.x].IsWhite());
		tab[mrowki[i].coord.y][mrowki[i].coord.x].change();
		mrowki[i].move();
	}
	
}

Komorka** Gra::getTab() const
{
	return tab;
}

int Gra::getSizeX() const
{
	return sizeX;
}


int Gra::getSizeY() const
{
	return sizeY;
}


