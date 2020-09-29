/*
 * hello.cpp
 *
 *  Created on: 8 sept. 2014
 *      Author: michel Arnaud
 */

//***************************
// Fichier: hello.cpp
//***************************
#include "comptebanque.h"

int main()
{
        CompteBanque *mcb=new CompteBanque(10);
        CompteBanque *mcb11=new CompteBanque(11,15);
        mcb->afficherCompte();
        *mcb+=10;
        mcb->afficherCompte();
        if (*mcb-=40){
        	cout<<"vous avez retirer de l'argent"<<endl;
        }
        else  cout<<"vous ne pouvez pas retirer de l'argent"<<endl;
         	mcb->afficherCompte();
            mcb11->virementCompte(*mcb, 10);
            mcb11->afficherCompte();
            mcb->afficherCompte();
            mcb11->afficherDerniereOperation(3);
            mcb->afficherDerniereOperation(3);

       return 0;
}


