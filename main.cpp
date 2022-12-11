#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    // ksiazkaAdresowa.rejestracjaUzytkownika();  // ok

    ksiazkaAdresowa.logowanieUzytkownika();  // ok

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();  // <-skasował wszystkich z pliku !

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();  // <-wypisał bez zmiany hasła

    //ksiazkaAdresowa.wylogujUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}

/*
oraz pierwsze 3 funkcjonalności związane z adresatami,
czyli dodawaniem nowego adresata, wyświetlaniem wszystkich adresatów
oraz wczytywanie ich do pamięci (vectora),
po tym jak program zostanie uruchomiony ponownie(nie więcej)
*/
