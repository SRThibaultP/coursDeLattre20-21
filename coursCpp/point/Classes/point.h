#ifndef CLASSES_POINT
#define CLASSES_POINT


#include <iostream>
using namespace std ;


class Point
{
protected :
	int x;
	int y;
public :
Point(int a=0, int b=0) ;
//Point();
//Point(Point & pt) ;// Constructeur par recopie
Point operator+(const Point & a);
Point& operator=(const Point & a);
bool operator==(const Point & a);
Point& operator+=( const Point & a);
bool Coincide(Point & p);
//Point();
//Point(int,int);
~Point();
void Init(int a, int b) ;
void Init(int a); // Initialisation avec une même valeur
void Deplace(int a, int b) ;
void Deplace(int a);
void Affiche() ;
void AfficheTout();
void Affiche(char* strMesg); // Affichage avec un message
int GetX();
int GetY();
void SetX(int);
void SetY(int);

};
#endif /* CLASSES_POINTCOL_H_ */
