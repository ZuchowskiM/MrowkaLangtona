#ifndef graKonsola_h
#define graKonsola_h
#include "gra.h"
#include<iostream>


class GraKonsola: public Gra
{
private:
	GraKonsola(const GraKonsola& g);
	GraKonsola& operator=(const GraKonsola& g);
public:
	GraKonsola();
	~GraKonsola();
	void View();
};

#endif