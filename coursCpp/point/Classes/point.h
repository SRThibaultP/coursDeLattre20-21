#include <iostream>
using namespace std ;


class Point {
private :
int x;
int y;

public :
void Init(int a, int b) ;
void Deplace(int a, int b) ;
void Affiche() ;
int GetX();
int GetY();
void SetX(int);
void SetY(int);
};
