#include "Pracownik.h"



Pracownik::Pracownik()
{
	m_pNastepny = nullptr;
}


Pracownik::~Pracownik()
{
}

const char * Pracownik::Imie() const
{
	return m_Imie.Zwroc();
}

const char * Pracownik::Nazwisko() const
{
	return m_Nazwisko.Zwroc();
}

void Pracownik::Imie(const char * nowe_imie)
{
	m_Imie.Ustaw(nowe_imie);
}

void Pracownik::Nazwisko(const char * nowe_nazwisko)
{
	m_Nazwisko.Ustaw(nowe_nazwisko);
}

void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok)
{
	m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
}

void Pracownik::Wypisz() const
{
	cout << m_Imie.Zwroc() << '\t' << m_Nazwisko.Zwroc() << '\t';
	m_DataUrodzenia.Wypisz();
}

void Pracownik::Wpisz()
{
	std::cout << "\nWpisz imie: ";
	m_Imie.Wpisz();
	std::cout << "\nWpisz nazwisko: ";
	m_Nazwisko.Wpisz();
	std::cout << "\nWpisz date urodzenia: ";
	m_DataUrodzenia.Wpisz();
	
}

int Pracownik::SprawdzImie(const char * por_imie) const
{
	m_Imie.SprawdzNapis(por_imie);
}

int Pracownik::SprawdzNazwisko(const char * por_nazwisko) const
{
	return m_Nazwisko.SprawdzNapis(por_nazwisko);
}


int Pracownik::Porownaj(const Pracownik & wzorzec) const
{
	int a, b, c;
	a = SprawdzImie(wzorzec.Imie);
	b = SprawdzNazwisko(wzorzec.Nazwisko);
	b = m_DataUrodzenia.Porownaj(wzorzec.DataUrodzenia);
	return 0;
}
