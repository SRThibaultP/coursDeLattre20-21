#ifndef BOUTONENTREE_H
#define BOUTONENTREE_H

#include "bouton.h"
#include "PortLpt.h"

class BoutonEntree: public Bouton
{
public:
    BoutonEntree(PortLpt *lpt);
    virtual ~BoutonEntree();
    bool getDemande();
};

#endif // BOUTONENTREE_H
