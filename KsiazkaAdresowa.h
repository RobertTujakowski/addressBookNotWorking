#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer  uzytkownikMenedzer;  // tworzone wraz z ksiazka adresowa
    AdresatMenedzer *adresatMenedzer;
    const string  NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL; //puste miejsce w pamieci
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer; //usuwa to na co wskazuje ten adres w pamiêci
        adresatMenedzer = NULL;
    }
//---------------------------------------------------------------------------------------------------
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int    pobierzIdZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();
//---------------------------------------------------------------------------------------------------
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
 //---------------------------------------------------------------------------------------------------
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
