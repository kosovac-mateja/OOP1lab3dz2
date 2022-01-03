#ifndef _artikal_h_
#define _artikal_h_

#include <iostream>

using namespace std;

class Artikal {
    string naziv;

    int barkod;

    double nabavnaCena;
public:
    Artikal(string naz, int bar, double nc) : naziv(naz), barkod(bar), nabavnaCena(nc) {}

    const string &getNaziv() const;

    int getBarkod() const;

    double getNabavnaCena() const;

    friend bool operator==(const Artikal &a1, const Artikal &a2);
};


#endif
