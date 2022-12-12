#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}

/*
oraz pierwsze 3 funkcjonalności związane z adresatami,
czyli dodawaniem nowego adresata, wyświetlaniem wszystkich adresatów
oraz wczytywanie ich do pamięci (vectora),
po tym jak program zostanie uruchomiony ponownie(nie więcej)
*/
