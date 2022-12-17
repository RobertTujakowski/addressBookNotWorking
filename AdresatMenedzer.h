#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    Adresat  podajDaneNowegoAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)
    {

    };
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void ustawIdZalogowanegoUzytkownika(int idUzytkownikaAktualny);
};

#endif
