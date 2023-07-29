#include <iostream>
#include "partie1.h"

using namespace std;

int main()
{
	Point pt1(3, 5);
	pt1.afficher();
	pt1.deplacer(4, 2);
	cout << "apres deplacement:" << endl;
	pt1.afficher();
	Point pt2(8, 9);
	cout << "affichage du deuxieme point" << endl;
	pt2.afficher();
	float d;
	d = pt2.distance(pt1, pt2);
	cout << "la distance entre les deux points est:" << d << endl
		 << endl
		 << endl
		 << endl;
	cout << "partie cercle" << endl;
	Point centre(100, 100);
	Point point(200, 200);
	Cercle cercle1;
	cercle1.centre = &centre;
	cercle1.point = &point;
	float rayon1 = centre.distance(centre, point);
	cercle1.rayon = rayon1;

	Cercle cercle2;
	Point centre2(130, 100);
	cercle2.centre = &centre2;
	cercle2.rayon = 40;

	cercle1.afficher();
	cercle2.afficher();

	float p = cercle1.getperimetre();
	float p2 = cercle2.getperimetre();
	cout << "le rayon du premier cercle est" << cercle1.rayon << endl;
	cout << "le rayon du deuxieme cercle est" << cercle2.rayon << endl;
	Point pt(120, 100);
	bool a = cercle1.appartient(pt);
	bool b = cercle2.appartient(pt);
	if (a == true && b == true)
	{

		cout << "le point";
		pt.afficher();
		cout << "appartient a l'intersection des deux cercles" << endl;

		return 0;
	}
}
