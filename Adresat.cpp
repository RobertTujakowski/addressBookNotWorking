#include "Adresat.h"

void Adresat::ustawId(int noweId)
{
    if (noweId >= 0)
        id = noweId;
}
void ustawIdAdresata(int noweIdAdresata)
{
    idAdresata = noweIdAdresata;
}
void ustawImie(string noweImie)
{
    imie = noweImie;
}
void ustawNazwisko(string noweNazwisko)
{
    nazwisko = noweNazwisko;
}
void ustawNumerTelefonu(string nowyNumerTelefonu)
{
    numerTelefonu = nowyNumerTelefonu;
}
void ustawEmail(string nowyEmail)
{
    email = nowyEmail;
}
void ustawAdres(string nowyAdres)
{
    adres = nowyAdres;
}

int pobierzId()
{
    return id;
}
int pobierzIdUzytkownika()
{
    return idUzytkownika;
}
string pobierzImie()
{
    return imie;
}
string pobierzNazwisko()
{
    return nazwisko;
}
string pobierzNumerTelefonu()
{
    return numerTelefonu;
}
string pobierzEmail()
{
    return email;
}
string pobierzAdres()
{
    return adres;
}
