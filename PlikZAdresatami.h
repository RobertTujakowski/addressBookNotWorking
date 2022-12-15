#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;

    string  zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami();
    bool czyPlikJestPusty();

public:
    void dopiszAdresataDoPliku(Adresat adresat);

};

#endif
