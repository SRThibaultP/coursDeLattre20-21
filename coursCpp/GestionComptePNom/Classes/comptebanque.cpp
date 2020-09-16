#include "comptebanque.h"

int CompteBanque::GetId(){
	cout << "id: "<< ident << endl;
	return ident;
}
float CompteBanque::GetSolde(){
	cout << "solde: " << solde << endl;
	return solde;
}
void CompteBanque::SetId(int a){
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

//la suite

void CompteBanque::deposer(float somme){
	solde = solde + somme;
}
//qu11
CompteBanque& CompteBanque::operator+=(const CompteBanque &mc){
	this -> ident = mc.ident + this -> ident;
	this -> solde = mc.solde + this -> solde;
	return *this;
}
//qu11
bool CompteBanque::retirer(float somme){
	float tmp;
	tmp = solde - somme;
	if(tmp>=0){
		solde = tmp;
		return true;
	}
	else return false;
}

bool CompteBanque::virementComptes(CompteBanque & mc, float somme) {
	int tmp;
	tmp = solde - somme;
	if(tmp >= 0){
		mc.solde = mc.solde + somme;
		solde = tmp;
		return true;
	}
	else return false;
}
