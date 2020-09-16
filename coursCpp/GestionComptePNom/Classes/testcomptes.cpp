#include "comptebanque.h"

int main() {
	CompteBanque *b=new CompteBanque(10,40);
	b->afficheCompte();
	b->GetSolde();
	b->GetId();
	CompteBanque *mcb=new CompteBanque(10);
	mcb->afficheCompte();
	mcb->GetSolde();
	mcb->GetId();
	//la suite
	mcb->deposer(30);
	mcb->GetSolde();
	mcb->retirer(45);
	mcb->GetSolde();
	cout << "virement mcb et b" << endl;
	mcb->virementComptes(*b, 3);
	mcb->GetSolde();
	b->GetSolde();
}
