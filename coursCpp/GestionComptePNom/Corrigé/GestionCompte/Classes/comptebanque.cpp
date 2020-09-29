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
	this->solde+=somme;
}

bool CompteBanque::retirer(float somme){
	if ((this->solde-somme)>=0){
		this->solde-=somme;
		return true;
	}
	return false;
}

void CompteBanque::operator +=(float somme){
	this->solde+=somme;
//	return *this;
}

bool CompteBanque::operator -=(float somme){
	if ((this->solde-somme)>=0){
		this->solde-=somme;
		return true;
	}
	return false;
}

bool CompteBanque::virementCompte(CompteBanque& mc,float somme){
	if ((mc.solde-somme)>=0){
		this->solde+=somme;
		mc.solde-=somme;
		return true;
	}
	return false;
}
