/*
 * pointcol.cpp
 *
 *  Created on: 21 sept. 2020
 *      Author: local
 */

#include "pointcol.h"
// Coloration d’un point
void pointcol::colore(unsigned char R,unsigned char G,unsigned char B )
{
	byred = R;
	bygreen = G;
	byblue = B;
}
void pointcol::Initcol( int Abs, int Ord, unsigned char r, unsigned char g, unsigned char b )
{
Point::Init(Abs, Ord);
byred =r;
bygreen = g;
byblue = b;
}
pointcol::pointcol( int Abs, int Ord, unsigned char r, unsigned char g, unsigned char b) :
Point(Abs, Ord)
{
byred = r;
bygreen = g;
byblue = b;
}

void pointcol::Affichecol()
{
cout << "Point (" << x << ", "<< y << ") ";
cout << "de couleur : RGB("<<(int)byred<<","<<(int)bygreen;
cout << "," << (int)byblue << ")." << endl;
}
void pointcol::Affiche()
{
	cout << "Couleur : RGB(" << (int)byred << "," << (int)bygreen;
	cout << "," << (int)byblue << ")." << endl;
}
//Destructeur


pointcol::pointcol() {
	// TODO Auto-generated constructor stub

}
/*
pointcol::~pointcol() {
	// TODO Auto-generated destructor stub
}
*/
