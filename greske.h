#include <iostream>
#include <exception>

using namespace std;

class GNepravilanIndeks : public exception {
public:
    GNepravilanIndeks() : exception() { cout << "Greska: Ne postoji podatak na toj poziciji!"; }
};

class GDohvatanjeDetalja : public exception {
public:
    GDohvatanjeDetalja() : exception() { cout << "Greska: Detalji jos nisu izracunati!"; }
};

class GDodoavanjeRukovaoca : public exception {
public:
    GDodoavanjeRukovaoca() : exception() {
        cout << "Greska: Nije moguce dodavanje rukovaoca nakon izracunavanja detalja!";
    }
};