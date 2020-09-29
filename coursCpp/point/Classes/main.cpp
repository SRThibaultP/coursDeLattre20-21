#include "pointcol.h"
#include "point.h"
int main()
{
	pointcol *ptc=new pointcol(5,10, 50,150,200);
	ptc->Affiche();
	Point *pt=new Point(52,17);
	pt->Affiche();
	ptc->AfficheTout();
	delete pt ; delete ptc ;
}
