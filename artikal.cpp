#include "artikal.h"

const string &Artikal::getNaziv() const {
    return naziv;
}

int Artikal::getBarkod() const {
    return barkod;
}

double Artikal::getNabavnaCena() const {
    return nabavnaCena;
}

bool operator==(const Artikal &a1, const Artikal &a2) {
    return a1.getBarkod() == a2.getBarkod();
}
