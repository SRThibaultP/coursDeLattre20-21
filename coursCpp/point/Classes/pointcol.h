/*
 * pointcol.h
 *
 *  Created on: 21 sept. 2020
 *      Author: local
 */

#ifndef CLASSES_POINTCOL_H_
#define CLASSES_POINTCOL_H_

#include "point.h"

class pointcol: public Point {
	unsigned char byred; // La composante rouge
	unsigned char bygreen; // La composante verte
	unsigned char byblue; // La composante bleue
public:
	void colore(unsigned char R,unsigned char G,unsigned char B ) ;
	void Initcol( int Abs, int Ord, unsigned char r, unsigned char g, unsigned char b );
	pointcol();
//	virtual ~pointcol();
	pointcol( int Abs, int Ord, unsigned char r, unsigned char g, unsigned char b);
	void Affichecol();
	void Affiche();
};

#endif /* CLASSES_POINTCOL_H_ */

