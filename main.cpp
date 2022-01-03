#include <iostream>
#include "lista.h"
#include "prodavac.h"

int main() {
    try {
        Artikal a1("Gaming slusalice", 1234, 2999), a2("Mis", 1222, 500);

        Artikal a3("Sluske", 1234, 4000);

        Prodavac pr1("Jovan"), pr2("Nikola");

        pr1.prosiriKatalog(a1, 1.2, 2);
        pr2.prosiriKatalog(a3, 1.5, 3);

        pr2.prosiriKatalog(a2, 1.2, 2);

        pr1.prosiriKatalog(a2, 1.2, 2);

        Posiljka p(a1);
///////////////////////////
        p += (Rukovalac &) pr1;

        p += (Rukovalac &) pr2;
/////////////////////////
        Posiljka::Detalji d = p.getAgrDetalji();

        p.izracunajDetalje();

        cout << p;

        cout << d.cenaPosiljke << " " << d.cekanje;

    }
    catch (exception e) {

    }
}
