#include "barrieresortie.h"

BarriereSortie::BarriereSortie(PortLpt * lpt) : Barriere(lpt)
{

}

void BarriereSortie::monter(){
    mlpt -> setBit(0x20, false);
    mlpt->setBit(0x10, true);
}
