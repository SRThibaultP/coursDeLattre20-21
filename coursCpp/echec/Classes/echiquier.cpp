/*
 * echiquier.cpp
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#include "Piece.h"

int main() {
	Piece *p = new Piece('1', 'A', 'b');
	p -> Affiche();
	Piece *p1 = new Piece();
	p1 -> Affiche();
	Piece *p2 = new Piece('D');
	p2 -> Affiche();
	Piece *p3 = new Piece('C', '1', 'n');
	p3 -> Affiche();
	cout << p -> calculerPosition() << endl;
	p -> deplacer('8', 'H');
	cout << p -> calculerPosition() << endl;
	p -> Affiche();
}


