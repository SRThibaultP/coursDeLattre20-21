#ifndef BARRIERE_H
#define BARRIERE_H
#include "PortLpt.h"
#include "barrieresortie.h"


class Barriere{
     PortLpt * mlpt;
public:

    Barriere(PortLpt * lpt);
    virtual void monter();
    //virtual void descendre();
};

#endif // BARRIERE_H
