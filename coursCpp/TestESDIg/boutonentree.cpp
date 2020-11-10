#include "boutonentree.h"

BoutonEntree::BoutonEntree(PortLpt *lpt):Bouton(lpt)
{

}

BoutonEntree::~BoutonEntree(){

}

bool BoutonEntree::getDemande(){
    if (mlpt->getBit(BOUTONDEMANDE,false))
        return false;
    return true;
}
