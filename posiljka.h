#ifndef _posiljka_h_
#define _posiljka_h_

#include "lista.h"
#include "artikal.h"
#include <iostream>

using namespace std;

class Rukovalac;

class Posiljka {

public:
    struct Detalji {
        int cekanje;

        double cenaPosiljke;

        Detalji(int n = 0, double cena = 0) : cekanje(n), cenaPosiljke(cena) {}
    };

private:
    Artikal art;

    static int br;

    int id;

    Detalji agrDetalji;

    Lista<Rukovalac *> lista;

    int stanje;
public:
    Posiljka(Artikal a) : art(a), id(br++), stanje(0) {}

    void operator+=(Rukovalac &r);

    void izracunajDetalje();

    const Artikal &getArt() const;

    int getId() const;

    const Detalji &getAgrDetalji() const;

    friend ostream &operator<<(ostream &os, const Posiljka &p);

    friend class Prodavac;
};


#endif
