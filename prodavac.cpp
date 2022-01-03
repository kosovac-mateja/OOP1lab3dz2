#include "prodavac.h"

const string &Prodavac::getNaziv() const {
    return naziv;
}

void Prodavac::obrada(Posiljka &p) {
    for (Lista<Trojka>::Cvor *tren = katalog.pocetak; tren; tren = tren->sled) {
        if (tren->pod.art == p.getArt()) {
            p.agrDetalji.cekanje += tren->pod.nabavka;

            p.agrDetalji.cenaPosiljke += prodajnaCena(tren->pod);

            return;
        }
    }
}
