#include "komorka.h"

Komorka::Komorka()
{
	isWhite = true;
}

Komorka::~Komorka()
{
	//EMPTY
}

bool Komorka::IsWhite() const
{
	return isWhite;
}

void Komorka::setIsWhite(bool isWhite_p)
{
	isWhite = isWhite_p;
}

void Komorka::change()
{
	if (isWhite == true)
	{
		isWhite = false;
	}
	else
	{
		isWhite = true;
	}
}