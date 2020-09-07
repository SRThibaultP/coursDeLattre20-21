#include "point.h"

void Point::Init(int a, int b) {
x = a;
y = b;
}
void Point::Deplace(int a, int b) {
x += a;
y += b;
}
void Point::Affiche() {
cout << this->x<<" , " <<this->y<< endl;
}
