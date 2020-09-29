/*
 * comptebanque.h
 *
 *  Created on: 14 sept. 2020
 *      Author: michel Arnaud
 */

#ifndef CLASSES_COMPTEBANQUE_H_
#define CLASSES_COMPTEBANQUE_H_
#include <iostream>

using namespace std;

class CompteBanque {
	int ident;
	float solde;
public:
	CompteBanque(int id,float so=20.);
	virtual ~CompteBanque();
	void afficherCompte();
	float getSolde();
	int getId();
	bool retirer(float val);
	void deposer(float val);
	bool virementCompte(CompteBanque& mc,float somme);
    void operator+=( const float somme);
    bool operator-=( const float somme);


};

#endif /* CLASSES_COMPTEBANQUE_H_ */
