#ifndef BARRIERESORTIE_H
#define BARRIERESORTIE_H

#include "PortLpt.h"
#include "barriere.h"

class BarriereSortie: public Barriere
{
public:
    BarriereSortie(PortLpt * lpt);
    void monter();
};

#endif // BARRIERESORTIE_H
