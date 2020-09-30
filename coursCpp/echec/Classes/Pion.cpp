/*
 * Pion.cpp
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#include "Pion.h"
#include "Piece.h"

Pion::Pion(char a, char b, char coul) : Piece(a, b){
	this -> dejajoue = false;
}
/*
int deplacer(char a, char b){
	//return Piece::deplacer('a', 'b');
}*/
