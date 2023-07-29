#include <iostream>
using namespace std;
#include "Cercle.h"


int main(void)
{
	cout << "\n********PARTIE 1********\n";
	Point A(2,3);
	A.Affiche();
	A.Deplace(10, 10);
	A.Affiche();
	Point B(0,0);
	cout << '\n';
	cout<<"\nLa distance entre A et B : " << A.distance(B) << endl;
	cout << "\n********PARTIE 2********\n";
	Point centre1(100,100);
	Point P(200,200);
	Cercle C1(centre1,P);
	cout<<"\nLe cercle C1 : \n"; 
	C1.afficher();
	
	Point centre2(130,100);
	Cercle C2(centre2,40);
	cout<<"\nLe cercle C2 : \n";
	C2.afficher();
	
	cout<<"\nLe perimetre du cercle C1: " << C1.getPerimetre() << endl;
	cout<<"\nLa surface du cercle C1: " << C1.getSurface() << endl;
	cout<<"\nLe perimetre du cercle C2: " << C2.getPerimetre() << endl;
	cout<<"\nLa surface du cercle C2: " << C2.getSurface() << endl;
	
	Point P1(120,100);
	
	if(C1.appartient(P1)&&C2.appartient(P1)) cout<<"\n Le point P(120,100) appartient aux deux cercles"; 
	else cout<<"\n Le point P(120,100) n'appartient pas aux deux cercles"; 
	
	return 0;
}
