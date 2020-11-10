#ifndef AFFICHEUR_H
#define AFFICHEUR_H
#include "PortLpt.h"

class Afficheur {
    private:
        PortLpt * mlpt;
    public:
        Afficheur(PortLpt * lpt);
    void setval(unsigned char val);
};

#endif // AFFICHEUR_H
