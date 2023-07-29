#include <iostream>
using namespace std;
#include "Point.h"
#include<cmath>

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x_p, int y_p)
{
	x=x_p;
	y=y_p;
}

void Point::Affiche()
{
	cout << "\nx=" << x << " ," << "y=" << y;
}

void Point::Deplace(int dx,int dy)
{
	x += dx;
	y += dy;
}


float Point::distance(Point p)
{
    return sqrt(pow(x - p.x , 2) + pow(y - p.y , 2));
}

