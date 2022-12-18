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

    Adresat  podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void ustawIdZalogowanegoUzytkownika(int idUzytkownikaAktualny);
};

#endif
