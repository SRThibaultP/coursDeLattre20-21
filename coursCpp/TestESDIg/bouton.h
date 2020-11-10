#ifndef BOUTON_H
#define BOUTON_H
#include "PortLpt.h"
#define BOUTONDEMANDE 0x20

class Bouton
{
protected:
    PortLpt *mlpt;
    bool e_s;
public:
    Bouton(PortLpt *lpt);
    virtual ~Bouton();
    virtual bool getDemande();
};

#endif // BOUTON_H
