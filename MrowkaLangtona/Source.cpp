#include<iostream>
#include"graKonsola.h"
#include<windows.h>

int main()
{
	GraKonsola g1;
	
	std::cout << "podaj ile mrowek chcesz umiescic na planszy (max: 10 min:1)" << std::endl;
	int liczbaMrowek;
	std::cin >> liczbaMrowek;
	
	if (liczbaMrowek > 10)
		liczbaMrowek = 10;
	else if (liczbaMrowek < 1)
		liczbaMrowek = 1;

	int cordX, cordY;
	for (int i = 0; i < liczbaMrowek; i++)
	{
		std::cout << "Podaj wsporzednaX" << std::endl;
		std::cin >> cordX;
		std::cout << "Podaj wsporzednaY" << std::endl;
		std::cin >> cordY;
		if (g1.setMrowka(cordX, cordY) == -1)
			std::cout << "umiesciles mrowke poza plansza" << std::endl;
		else
			std::cout << "mrowka dodana poprawnie" << std::endl;
	}

	int i = 0;

	while (i<100)
	{
		g1.View();
		Sleep(100);
		i++;
		//if(i<200)
		system("cls");
		
	}
		return 0;
}