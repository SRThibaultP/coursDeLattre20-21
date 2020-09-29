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

Piece::~Piece(){
	cout << "--Destructeur--" << endl;
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

void Piece::Init(char a){
	Init(a);
}*/
char Piece::GetX(){
	return x;
}

char Piece::GetY(){
	return y;
}

char Piece::GetCouleur(){
	return couleur;
}

void Piece::SetX(char a){
	this -> x = a;
}

void Piece::SetY(char b){
	this -> y = b;
}

void Piece::SetCouleur(char coul){
	this -> couleur = coul;
}

int Piece::calculerPosition(){
	int position = ((int)8*(x-0x31)+(int)(y-0x41));
	return position;
}

int Piece::deplacer(char a, char b){
	int position = ((int)8*(a-0x31)+(int)(b-0x41));
	if(position <= 63){
		SetX(a);
		SetY(b);
		return position;
	}
	else return calculerPosition();
}
