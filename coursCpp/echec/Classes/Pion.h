/*
 * Pion.h
 *
 *  Created on: Sep 29, 2020
 *      Author: caiomi
 */

#ifndef CLASSES_PION_H_
#define CLASSES_PION_H_
#include "Piece.h"

class Pion : public Piece{
	bool dejajoue;
public :
	Pion(char a = '1', char b = '2', char coul = 'b');
	int deplacer(char a, char b);
};



#endif /* CLASSES_PION_H_ */
