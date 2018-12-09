#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"

int main()
{
	//Dodaj pracownika z klawiatury
	Pracownik nowy;
	nowy.Wpisz();	
	nowy.Wypisz();

	std::cout << "Porownaj: \n";
	std::cout << nowy.SprawdzImie("Test");
	std::cout << nowy.SprawdzImie("Dupa");
	int m;
	std::cin >> m;
}