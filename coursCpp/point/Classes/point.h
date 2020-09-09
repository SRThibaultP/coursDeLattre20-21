#include <iostream>
using namespace std ;


class Point
{
private :
int x;
int y;
public :
Point(int a=0, int b=0) ;
bool Coincide(Point &);
//Point();
//Point(int,int);
~Point();
void Init(int a, int b) ;
void Init(int a); // Initialisation avec une même valeur
void Deplace(int a, int b) ;
void Deplace(int a);
void Affiche() ;
void Affiche(char* strMesg); // Affichage avec un message
int GetX();
int GetY();
void SetX(int);
void SetY(int);

};
