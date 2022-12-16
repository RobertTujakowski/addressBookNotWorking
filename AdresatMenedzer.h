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

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    Adresat  podajDaneNowegoAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){}; // przekazanie nazwy pliku, : lista inicjalizacyjna
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
