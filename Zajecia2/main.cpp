#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"
#include "ListaPracownikow.h"


int main() {
	ListaPracownikow lista;
	Pracownik pracownik;
	Napis napis;
	Data data;
	Data D;

	int wybor;
	char imie[10], nazwisko[10];

	while (1) {
		cout << "1 - Dodaj pracownika\n";
		cout << "2 - Wyswietl pracownikow\n";
		cout << "3 - Usun pracownika\n";
		cout << "4 - Szukaj pracownika\n";
		cout << "5 - Podac i wyswietlic date\n";
		cout << "6 - Podac i wyswietlic napis\n";
		cout << "7 - Podac i wyswietlic pracownika\n";
		cout << "0 - Wyjscie\n";
		cin >> wybor;

		switch (wybor) {
		case 1:
			pracownik.Wpisz();
			lista.Dodaj(pracownik);
			break;
		case 2:
			cout << "WYPISANIE PRACOWNIKOW: \n";
			lista.WypiszPracownikow();
			break;
		case 3:
			cout << "WPISZ PRACOWNIKA DO USUNIECIA: \n";
			pracownik.Wpisz();
			lista.Usun(pracownik);
			break;
		case 4:

			cout << "PODAJ IMIE :\n";
			cin >> imie;
			cout << "PODAJ NAZWISKO :\n";
			cin >> nazwisko;

			if (lista.Szukaj(nazwisko, imie) == NULL)
				cout << "\n\nNIE MA TAKIEGO PRACOWNIKA\n\n";
			else
			{
				cout << "PRACOWNIKA ZNALEZIONO\n";
				pracownik = *lista.Szukaj(nazwisko, imie);
				pracownik.Wypisz();
			}
			break;

		case 5:
			cout << "PODA DATE: \n";
			data.Wpisz();
			cout << "WYPISUJE DATE: ";
			data.Wypisz();
			break;

		case 6:
			cout << "WPISZ NAPIS: \n";
			napis.Wpisz();
			cout << "WYPISZ NAPIS: \n";
			napis.Wypisz();
			break;

		case 7: 
			cout << "WPISZ PRACOWNIKA: \n";
			pracownik.Wpisz();
			cout << "WYPISZ PRACOWNIKA: \n";
			pracownik.Wypisz();
			break;
		case 0:
			return 0;
		}
	}

	return 0;
}

//int main()
//{
//	Pracownik nowy;
//	ListaPracownikow lista;
//
//	cout << endl << "Dodawanie pracownikow:";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << endl << i;
//		nowy.Wpisz();
//		lista.Dodaj(nowy);
//	}
//
//	cout << endl << "Wypisywanie pracownikow:" << endl;
//	lista.WypiszPracownikow();
//
//
//	cout << endl << endl << "Szukanie pracownika" << endl;
//	const Pracownik *wsk = lista.Szukaj("Bielak", "Rafal");
//	if (wsk != nullptr)
//		wsk->Wypisz();
//
//	wsk = lista.Szukaj("Terefere", "Rafal");
//	if (wsk != nullptr)
//		wsk->Wypisz();
//	return 0;
//}

//int main()
//{
//	//Dodaj pracownika z klawiatury
//	Pracownik nowy, stary;
//	printf("\nWprowadzanie danych: \n");
//	nowy.Wpisz();
//	printf("\nWypisywanie wprowadzonych danych: \n");
//	nowy.Wypisz();
//
//	/*std::cout << "Porownaj: \n";
//	std::cout << nowy.SprawdzImie("Test") << endl;
//	std::cout << nowy.SprawdzImie("Dupa") << endl;*/
//
//
//	//Testy klasy napis
//		cout << "-------Test klasy napis---------------";
//		Napis napis;
//		cout << "\n\t Wprowadzenia napisu: ";
//		napis.Wpisz();
//		cout << "\n\t Wypisz wprowadzony napis: ";
//		napis.Wypisz();
//
//		cout << "\nTest1:\n";
//		cout << napis.SprawdzNapis("aest") << endl;
//		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
//		cout << napis.SprawdzNapis("Tesadsadsd") << endl;
//
//		cout << "\nTest2:\n";
//		napis.Ustaw("Tescik");
//		cout << napis.SprawdzNapis("aest") << endl;
//		cout << napis.SprawdzNapis(napis.Zwroc()) << endl;
//		cout << napis.SprawdzNapis("Tesadsadsd") << endl;
//	////////////////////////////////////////////////////////
//		
//		printf("\nWprowadzanie danych: \n");
//		stary.Wpisz();
//		printf("\nWypisywanie wprowadzonych danych: \n");
//		stary.Wypisz();
//
//		cout << "\nPorownanie dwoch pracownikow: " << nowy.Porownaj(stary) << endl;
//		cout << "\nPorownanie dwoch pracownikow: " << stary.Porownaj(stary) << endl;
//		cout << "\nPorownanie dwoch pracownikow: " << stary.Porownaj(nowy) << endl;
//	return 0;
//}