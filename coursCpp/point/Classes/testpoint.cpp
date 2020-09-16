#include "point.h"

/*int main ()
{
Point *p=new Point(1,2);
p->Deplace(4);
p->Affiche("Le point vaut :");
p->Init(10,8);
p->Affiche("Le point vaut desormais :");
Point *pp=new Point(); //nvelle zone de mémoire
*pp = *p;
/*p->Deplace(12,13);
pp->Deplace(5);
p->Affiche("Le point p vaut ");
pp->Affiche("Le point pp vaut ");
delete pp ;
pp=new Point(2);
p=new Point(2,0);
if( p->Coincide(*pp) )
cout << "p et pp coincident !" << endl;
if( pp->Coincide(*p) )
cout << "pp et p coincident !" << endl;
*//*
pp->Affiche();
if((*pp)==(*p)){
	cout<<"points identiques"<<endl;
	}
else cout << "points différents "<<endl;
//Point *pt = new Point(1,2);
Point *pt = new Point(*pp);
pt->Affiche();
delete pp;
delete p;
delete pt;
return 0;
}*/




int main()
{
Point *p=new Point(7,2);
p->Affiche();
Point *pp=new Point(7,7);
pp->Affiche();
if ((*pp)==(*p))
cout<<"points identiques"<<endl;
else cout <<"points differents"<<endl;;
Point *p1=new Point();
p1->Affiche();
// (*p1)=(*pp);
// p1->Affiche();
(*p1)=(*pp)+(*p);
pp->Affiche();
p->Affiche();
p1->Affiche();
(*p1)+=(*p);
p1->Affiche();
return 0;
}



/*
int main()
{

Point *p=new Point(1,2);
p->Init(3,4);
p->Affiche();
p->Deplace(4,6);
p->Affiche();
p->SetX(25);
//p->y=p->x+10;

p->SetY(p->GetX()+10);
cout <<"le point est en "<<p->GetX()<<","<<p->GetY()<<endl;
p->Affiche();
delete p ;
return 0;
}*/
