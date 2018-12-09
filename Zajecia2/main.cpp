#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"

int main()
{
	//Dodaj pracownika z klawiatury
	Pracownik nowy;
	printf("\nWprowadzanie danych: \n");
	nowy.Wpisz();
	printf("\nWypisywanie wprowadzonych danych: \n");
	nowy.Wypisz();

	/*std::cout << "Porownaj: \n";
	std::cout << nowy.SprawdzImie("Test") << endl;
	std::cout << nowy.SprawdzImie("Dupa") << endl;*/


	//Testy klasy napis
		cout << "-------Test klasy napis---------------";
		Napis napis;
		cout << "\n\t Wprowadzenia napisu: ";
		napis.Wpisz();
		cout << "\n\t Wypisz wprowadzony napis: ";
		napis.Wypisz();

		cout << "\nTest1:\n";
		cout << napis.SprawdzNapis("aest") << endl;
		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
		cout << napis.SprawdzNapis("Tesadsadsd") << endl;

		cout << "\nTest2:\n";
		napis.Ustaw("Tescik");
		cout << napis.SprawdzNapis("aest") << endl;
		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
		cout << napis.SprawdzNapis("Tesadsadsd") << endl;
	////////////////////////////////////////////////////////
	return 0;
}