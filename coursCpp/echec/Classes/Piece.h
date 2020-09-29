/*
 * Piece.h
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#ifndef PIECE_H_
#define PIECE_H_

#include <iostream>
using namespace std;

class Piece {
	char x;
	char y;
	char couleur;
public :
	Piece(char a='A', char b='1', char coul='b');
	void Init(char a, char b, char coul);
	//void Init(char a, char b);
	//void Init(char a);
	void Affiche();
	void Affiche(char* strMesg);
};



#endif /* PIECE_H_ */
