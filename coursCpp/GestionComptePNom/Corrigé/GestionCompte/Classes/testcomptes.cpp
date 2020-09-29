/*
 * hello.cpp
 *
 *  Created on: 8 sept. 2020
 *      Author: Michel Arnaud
 */

//***************************
// Fichier: hello.cpp
//***************************
#include "comptebanque.h"

int main()
{
        CompteBanque *mcb=new CompteBanque(10);
        mcb->afficherCompte();
        *mcb+=10;
        mcb->afficherCompte();
        if (*mcb-=40){
        	cout<<"vous avez retirer de l'argent"<<endl;
        }
        else  cout<<"vous ne pouvez pas retirer de l'argent"<<endl;
        mcb->afficherCompte();
        CompteBanque *mcb11=new CompteBanque(11,15);
        mcb11->virementCompte(*mcb, 10);
        mcb11->afficherCompte();
        mcb->afficherCompte();
      return 0;
}


