/*
 * comptebanque.cpp
 *
 *  Created on: 14 sept. 2020
 *      Author: michel Arnaud
 */

#include "comptebanque.h"

CompteBanque::CompteBanque(int id,float so) {
	// TODO Auto-generated constructor stub
	this->ident=id;
	this->solde=so;
	tab=new float[100];
	nboperations=1;
}

CompteBanque::~CompteBanque() {
	// TODO Auto-generated destructor stub
}

void CompteBanque::afficherCompte(){
	cout<<"numéro compte:"<<this->ident<<"  le Solde:"<<this->solde<<endl;
}

float CompteBanque::getSolde(){
	return this->solde;
}

int CompteBanque::getId(){
	return this->ident;
}

void CompteBanque::deposer(float somme){
	tab[nboperations]=somme;
	nboperations++;
	this->solde+=somme;
}

bool CompteBanque::retirer(float somme){
	if ((this->solde-somme)>=0){
		this->solde-=somme;
		tab[nboperations]=-somme;
		nboperations++;
		return true;
	}
	return false;
}

void CompteBanque::operator +=(float somme){
	tab[nboperations]=somme;
	nboperations++;
	this->solde+=somme;
//	return *this;
}

bool CompteBanque::operator -=(float somme){
	if ((this->solde-somme)>=0){
		this->solde-=somme;
		tab[nboperations]=-somme;
		nboperations++;
		return true;
	}
	return false;
}

bool CompteBanque::virementCompte(CompteBanque& mc,float somme){
	if (mc-=somme){
		this->solde+=somme;
		this->tab[nboperations]=somme;
		this->nboperations++;
		return true;
	}
	return false;
}

void CompteBanque::afficherDerniereOperation(){
	cout<<"le dernier mouvement vaut: "<<tab[nboperations-1]<<endl;
}

void CompteBanque::afficherDerniereOperation(int n){
	int deb=0;
	if (nboperations>10)
		deb=nboperations-10;
	for(int i=deb+1;i<nboperations;i++)
		cout<<"mouvement:"<<i<<" est de:"<<tab[i]<<endl;
}
