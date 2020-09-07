#include "point.h"

int main()
{
Point *p=new Point;
//rebuild
p->Init(3,4);
p->Affiche();
p->Deplace(4,6);
p->Affiche();

p->x = 25; // Accès aux variables de la classe point
p ->y = p-> x + 10;
cout << "le point est en " << p->x << ", " << p->y << endl;
p -> Affiche() ;
delete p ;
return 0;
}
