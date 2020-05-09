#include "graKonsola.h"

GraKonsola::GraKonsola(): Gra()
{
	//EMPTY
}

GraKonsola::~GraKonsola()
{
	//EMPTY
}

void GraKonsola::View()
{
	makeStep();

	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			if (tab[i][j].IsWhite())
			{
				std::cout << " ";
			}
			else
			{
				std::cout << "#";
			}
		}
		std::cout << std::endl;
	}
	
}