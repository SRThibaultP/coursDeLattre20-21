#include "comptebanque.h"

CompteBanque::CompteBanque(int id, float so){
	cout << "--Constructeur (id,so)--" << endl;

}

void CompteBanque::AfficherCompte(char *strMsg) {
	cout << strMsg << id << ", " << so << endl;
}
