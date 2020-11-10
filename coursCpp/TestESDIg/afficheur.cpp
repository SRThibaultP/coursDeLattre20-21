#include "afficheur.h"

Afficheur::Afficheur(PortLpt * lpt){
    mlpt = lpt;
}

void Afficheur :: setval(unsigned char val){
    mlpt -> setLSB4(val);
}
