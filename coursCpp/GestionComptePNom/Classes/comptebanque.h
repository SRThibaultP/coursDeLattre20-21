#include <iostream>
using namespace std ;

class CompteBanque {
	int ident;
	int solde;
	int *tab;
	int nboperations;
public:
	CompteBanque(int id, float so);
	void deposer(float somme);
	bool retirer(float somme);
	float getSolde();
	void afficherSolde();
	void afficherDerniereOperation(int n);
	bool virementComptres(CompteBanque & mc, float somme);
	void afficherDerniereOperation();
	void getId();

	void AfficherCompte(char *strMsg);
};
