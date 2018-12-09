#include "Data.h"

Data::Data()
{
	m_nDzien = 1;
	m_nMiesiac = 1;
	m_nRok = 2000;
}


Data::~Data()
{
}

void Data::Ustaw(int d, int m, int r)
{
	m_nDzien = d;
	m_nMiesiac = m;
	m_nRok = r;
}

int Data::Dzien() const
{
	return m_nDzien;
}

int Data::Miesiac() const
{
	return m_nMiesiac;
}

int Data::Rok() const
{
	return m_nRok;
}

void Data::Wypisz() const
{
	cout << m_nDzien << "-" << m_nMiesiac << "-" << m_nRok << endl;
}

void Data::Wpisz()
{
	cin >> m_nDzien >> m_nMiesiac >> m_nRok;
	Koryguj();
}

void Data::Koryguj()
{
	//miesiace z 31 dniami: 1 3 5 7 8 10 12
	if (m_nMiesiac == 2)
	{
		if (m_nRok % 4 == 0)
		{
			if (m_nDzien > 29)
				m_nDzien = 29;
		}
		else
		{
			if (m_nDzien > 28)
				m_nDzien = 28;
		}
	}
	
	if (m_nMiesiac > 12)
		m_nMiesiac = 12;
	else if (m_nMiesiac < 1)
		m_nMiesiac = 1;
	
	if (m_nMiesiac == (1 | 3 | 5 | 7 | 8 | 10 | 12))
	{
		if (m_nDzien > 31)
			m_nDzien = 31;
	}
	else
	{
		if (m_nDzien > 30)
			m_nDzien = 30;
	}

	if (m_nDzien < 1)
		m_nDzien = 1;
}
