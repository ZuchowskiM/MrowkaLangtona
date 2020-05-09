#ifndef gra_h
#define gra_h
#include"komorka.h"
#include"mrowka.h"
#include<vector>

class Gra
{
private:
	Gra(const Gra& g);
	Gra& operator=(const Gra& g);
protected:
	Komorka** tab;
	std::vector<Mrowka> mrowki;
	int sizeX;
	int sizeY;
	
	Gra();
	virtual ~Gra();

	Komorka** getTab() const;
	void makeStep();
	virtual void View() = 0;
	int getSizeX() const;
	int getSizeY() const;

public:
	int setMrowka(int x, int y);

	


};

#endif 


