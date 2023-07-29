#include <iostream>
using namespace std;
#include "Vecteur.h"


int main(void)
{
	Vecteur A;
	Vecteur B(1,2,-1);
	Vecteur C(1,1);
	A.affiche('A');
	B.affiche('B');
	C.affiche('C');
	cout << "********Passage par valeur********\n" << endl;
	cout << "le produit scalaire de B et C est : " << B.prod_scal_valeur(C) << endl;
	Vecteur S;
	S=B.somme_valeur(C);
	cout << "Le vecteur somme S des vecteurs B et C: " << endl;
	S.affiche('S');
	cout << "********Passage par adresse********\n" << endl;
	cout << "le produit scalaire de B et C est : " << B.prod_scal_adr(&C) << endl;
	S=B.somme_adr(&C);
	cout << "Le vecteur somme S des vecteurs B et C: " << endl;
	S.affiche('S');
	cout << "********Passage par reference********\n" << endl;
	cout << "le produit scalaire de B et C est : " << B.prod_scal_ref(C) << endl;
	S=B.somme_ref(C);
	cout << "Le vecteur somme S des vecteurs B et C: " << endl;
	S.affiche('S');

	return 0;
}
