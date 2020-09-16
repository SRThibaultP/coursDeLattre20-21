#include <iostream>
using namespace std ;

class CompteBanque {
	int ident;
	float solde;
	float *tab;
	int nboperations;
public:
	//CompteBanque(int id, float so);
	void deposer(float somme);
	bool retirer(float somme);
	float getSolde();
	void afficherSolde();
	void afficherDerniereOperation(int n);
	bool virementComptes(CompteBanque & mc, float somme);
	void afficherDerniereOperation();
	void getId();

	CompteBanque(int a=0, float b=20);
	int GetId();
	float GetSolde();
	void SetId(int);
	void SetSolde(float);
	void Init(int a, float b);
	void Init(int a);
	void afficheCompte();
	void newCompteBanque();
	//qu11
	CompteBanque& operator+=(const CompteBanque &mc);
};
