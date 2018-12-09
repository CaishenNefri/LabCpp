#include "Napis.h"


using namespace std;


Napis::Napis()
{
}


Napis::~Napis()
{
}

const char * Napis::Zwroc() const
{
	return m_pszNapis;
}

void Napis::Ustaw(const char * nowy_napis)
{
	strcpy_s(m_pszNapis, nowy_napis);
}

void Napis::Wypisz() const
{
	cout << m_pszNapis;
}

//Co gdy dluzsze, krotsze
void Napis::Wpisz()
{
	cin >> m_pszNapis;
}

int Napis::SprawdzNapis(const char * por_napis) const
{
	std::string nowy = por_napis;
	std::string klasowy = m_pszNapis;

	return nowy.compare(klasowy);
}
