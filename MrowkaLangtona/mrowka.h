#ifndef mrowka_h
#define mrowka_h

class Mrowka
{
	friend class Gra;

public:
	//musze rozwiazac problem dostepnosci dla allokatora
	//vectora konstruktora kopiujacego mrowki
	Mrowka(const Mrowka& m);
	~Mrowka();

private:
	
	const int static North = 1;
	const int static East = 2;
	const int static South = 3;
	const int static West = 4;


	Mrowka& operator=(const Mrowka& m);

	struct coordinates
	{
		int x;
		int y;
	};

	coordinates coord;

	Mrowka();
	

	int direction;

	void move();
	void changeDirection(bool isWhite);
	//bool checkDirection();

};

#endif