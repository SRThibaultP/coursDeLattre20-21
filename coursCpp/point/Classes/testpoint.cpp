#include "point.h"

int main()
{
Point *p=new Point;
//rebuild
p->Init(3,4);
p->Affiche();
p->Deplace(4,6);
p->Affiche();
delete p ;
return 0;
}
