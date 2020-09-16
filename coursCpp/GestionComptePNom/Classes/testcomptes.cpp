#include "comptebanque.h"

int main() {
	CompteBanque *b=new CompteBanque(10,40);
	b->afficheCompte();
	CompteBanque *mcb=new CompteBanque(10);
	mcb->afficheCompte();
}
