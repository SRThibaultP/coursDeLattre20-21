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

int Point::GetX() {
	return x;
}
int Point::GetY() {
	return y;
}
void Point::SetX(int tmp) {
	this -> x = tmp;
}

void Point::SetY(int tmp) {
	this -> y = tmp;
}

