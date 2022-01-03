
#include "posiljka.h"


#include "rukovalac.h"
#include "greske.h"

int Posiljka::br = 0;

void Posiljka::operator+=(Rukovalac &r) {
    if (stanje == 1) throw GDodoavanjeRukovaoca();
    lista += &r;
}

const Artikal &Posiljka::getArt() const {
    return art;
}

int Posiljka::getId() const {
    return id;
}

const Posiljka::Detalji &Posiljka::getAgrDetalji() const {
    if (stanje == 0) throw GDohvatanjeDetalja();
    return agrDetalji;
}

void Posiljka::izracunajDetalje() {
    for (Lista<Rukovalac *>::Cvor *tren = lista.pocetak; tren; tren = tren->sled)
        tren->pod->obrada(*this);

    stanje = 1;
}

ostream &operator<<(ostream &os, const Posiljka &p) {
    return os << "Posiljka[" << p.getId() << ", " << p.getArt().getNaziv() << "]" << endl;
}


