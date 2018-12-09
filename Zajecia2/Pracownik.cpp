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
	m_Nazwisko.Wpisz();
	std::cout << "\nWpisz nazwisko: ";
	m_DataUrodzenia.Wpisz();
	std::cout << "\nWpisz date urodzenia: ";
}

int Pracownik::SprawdzImie(const char * por_imie) const
{
	std::string pierwsze(por_imie);
	std::string drugie(m_Imie.Zwroc());

	return pierwsze.compare(drugie);
}

int Pracownik::SprawdzNazwisko(const char * por_nazwisko) const
{
	std::string pierwsze(por_nazwisko);
	std::string drugie(m_Nazwisko.Zwroc());

	return pierwsze.compare(drugie);
}

int Pracownik::Porownaj(const Pracownik & wzorzec) const
{
	return 0;
}
