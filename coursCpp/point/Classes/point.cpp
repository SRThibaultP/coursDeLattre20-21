#include "point.h"


void Point::Affiche()
{
cout << this->x<<" , " <<this->y<< endl;
}

int Point::GetX(){
	return x;
}
int Point::GetY(){
	return y;
}
void Point::SetX(int a){
	this -> x = a;
}

void Point::SetY(int b){
	this -> y = b;
}
/*Point::Point()
{
cout << "--Constructeur par defaut--" << endl;
}*/

Point::Point(int a, int b)
{
cout << "--Constructeur (a,b)--" << endl;
Init(a,b);
}
Point::~Point()
{
cout << "--Destructeur--" << endl;
}

void Point::Init(int a, int b)
{
	x = a;
	y = b;
}

void Point::Init(int a)
{
	Init(a,a);
}

void Point::Deplace(int a, int b)
{
x += a;
y += b;
}

void Point::Deplace(int a)
{
Deplace(a,a);
}
void Point::Affiche(char *strMesg)
{
// On ne rajoute pas le paramètre par
// défaut dans l’implémentation !
cout << strMesg << x << ", " << y << endl;
}
bool Point::Coincide(Point &p)
{
	if (this -> x == p.x && this -> y == p.y  ){
		return true;
	}
	else {
		return false;
	}

}

