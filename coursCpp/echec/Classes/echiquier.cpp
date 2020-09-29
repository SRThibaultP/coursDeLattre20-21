/*
 * echiquier.cpp
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#include "Piece.h"
#include "Pion.h"
/*
int main() {
	Piece *p = new Piece('1', 'A', 'b');
	p -> Affiche();
	Piece *p1 = new Piece();
	p1 -> Affiche();
	Piece *p2 = new Piece('D');
	p2 -> Affiche();
	Piece *p3 = new Piece('C', '1', 'n');
	p3 -> Affiche();
	//cout << p -> calculerPosition() << endl;
	p -> deplacer('3', 'A');
	//cout << p -> calculerPosition() << endl;
	p -> Affiche();
}
*/

int main(){
	Pion *b1 = new Pion('2', 'A', 'b');
	b1 -> Affiche();
	delete b1;
}

