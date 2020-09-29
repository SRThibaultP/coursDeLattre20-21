/*
 * Piece.cpp
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#include "Piece.h"

Piece::Piece(char a, char b, char coul){
	cout << "--Constructeur (a,b,coul)--" << endl;
	Init(a,b,coul);
}

void Piece::Affiche(){
cout << this->x<<" , " <<this->y<< " , " << this->couleur<<endl;
}

void Piece::Affiche(char *strMesg){
cout << strMesg << x << ", " << y << ", " << couleur << endl;
}

void Piece::Init(char a, char b, char coul){
	this -> x = a;
	this -> y = b;
	this -> couleur = coul;
}
/*
void Piece::Init(char a, char b){
	Init(a,b);
}
/*
void Piece::Init(char a){
	Init(a);
}*/
