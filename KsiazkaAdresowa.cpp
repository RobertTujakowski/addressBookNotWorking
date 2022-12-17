#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{

    uzytkownikMenedzer.logowanieUzytkownika();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}
//---------------------------------------------------------------------------------------------------
void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.ustawIdZalogowanegoUzytkownika( uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() );
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
