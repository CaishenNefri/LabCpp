#include "ListaPracownikow.h"

//Instrukcja: https://www.p-programowanie.pl/cpp/lista-jednokierunkowa-c/


ListaPracownikow::ListaPracownikow()
{
	m_pPoczatek = nullptr;
	m_nLiczbaPracownikow = 0;
}


ListaPracownikow::~ListaPracownikow()
{
}

void ListaPracownikow::Dodaj(const Pracownik & p)
{
	Pracownik *nowy = new Pracownik;
	*nowy = p;

	if (m_pPoczatek == nullptr)
		m_pPoczatek = nowy;
	else
	{
		Pracownik *temp = m_pPoczatek;

		// znajdujemy wskaznik na ostatni element
		while (temp->m_pNastepny)
		{
			temp = temp->m_pNastepny;
		}

		temp->m_pNastepny = nowy;
		nowy->m_pNastepny = nullptr;
	}
}

void ListaPracownikow::Usun(const Pracownik & wzorzec)
{

}

void ListaPracownikow::WypiszPracownikow() const
{
	Pracownik *wskaznik = m_pPoczatek;
	while (wskaznik->m_pNastepny != nullptr)
	{
		wskaznik->Wypisz();
		wskaznik = wskaznik->m_pNastepny;
	}
}

const Pracownik * ListaPracownikow::Szukaj(const char * nazwisko, const char * imie) const
{
	Pracownik *wskaznik = m_pPoczatek;
	if (wskaznik != nullptr)
	{
		do
		{
			if (!wskaznik->SprawdzImie(imie) && !wskaznik->SprawdzNazwisko(nazwisko))
				return wskaznik;
		} while (wskaznik->m_pNastepny != nullptr);
	}
	
	return nullptr;
}
