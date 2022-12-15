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
    int idZalogowanegoAdresata;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    void pobierzDaneAdresata();
    Adresat  podajDaneNowegoAdresata();
    void pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){};
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
