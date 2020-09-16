#include "comptebanque.h"

int CompteBanque::GetIdent(){
	return ident;
}
float CompteBanque::GetSolde(){
	return solde;
}
void CompteBanque::SetIdent(int a){
	this -> ident = a;
}

void CompteBanque::SetSolde(float b){
	this -> solde = b;
}

CompteBanque::CompteBanque(int a, float b){
	cout << "--Constructeur (a(ident),b(solde))--" << endl;
	Init(a,b);
}

void CompteBanque::Init(int a, float b)
{
	ident = a;
	solde = b;
}

void CompteBanque::Init(int a)
{
	Init(a,20);
}

void CompteBanque::afficheCompte()
{
cout << this->ident<<" , " <<this->solde<< endl;
}

