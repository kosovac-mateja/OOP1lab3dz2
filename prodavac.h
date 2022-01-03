#ifndef _prodavac_h_
#define _prodavac_h_

#include "rukovalac.h"
#include "artikal.h"
#include "lista.h"
#include "posiljka.h"
#include <iostream>

using namespace std;

class Posiljka;

class Prodavac : public Rukovalac {
    struct Trojka {
        Artikal art;

        double marza;

        int nabavka;

        Trojka(Artikal a, double m, int n) : art(a), marza(m), nabavka(n) {}

        friend ostream &operator<<(ostream &os, const Trojka &t) { return os; }
    };

    string naziv;

    Lista<Trojka> katalog;
public:
    Prodavac(string name) : naziv(name) {}

    double prodajnaCena(const Trojka &t) { return t.marza * t.art.getNabavnaCena(); }

    void prosiriKatalog(Artikal a, double m, int n) { katalog += Trojka(a, m, n); }

    const string &getNaziv() const;

    void obrada(Posiljka &p) override;

};


#endif
