#include "partie1.h"
#include <iostream>
#include <cmath>
using namespace std;

void Point::afficher()
{
    cout << "l'abscisse du point est:" << this->x << endl;
    cout << "l'ordonnee du point est:" << this->y << endl;
}
Point::Point(int a, int b)
{
    this->x = a;
    this->y = b;
}
// void Point::initialiser(int a,int b){
//     this->x=a;
//     this->y=b;
// }
void Point::deplacer(int dx, int dy)
{
    this->x = this->x + dx;
    this->y = this->y + dy;
}
float Point::distance(Point p1, Point p2)
{
    float d;
    float e = pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2);
    d = sqrt(e);
    return d;
}
