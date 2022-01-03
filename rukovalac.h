#ifndef _rukovalac_h_
#define _rukovalac_h_

#include "posiljka.h"

class Posiljka;

class Rukovalac {
public:
    virtual void obrada(Posiljka &p) = 0;
};


#endif
