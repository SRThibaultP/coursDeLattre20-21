#include "point.h"

int main() {
Point *p=new Point;
p->Init(3,4);
p->Affiche();
p->Deplace(4,6);
p->Affiche();
p->SetX(25);
//p->y=p->x+10;

p->SetY(p->GetX()+10);
cout << "Le point est en " << p->GetX() << "," << p->GetY() << endl;
p->Affiche();
delete p ;
return 0;
}
