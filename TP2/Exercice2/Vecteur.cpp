#include <iostream>
using namespace std;
#include "Vecteur.h"

Vecteur::Vecteur(void)
{
	abscisse = 0;
	ordonnee = 0;
	hauteur = 0;
	
}

Vecteur::Vecteur(float a,float o,float h)
{
	abscisse = a;
	ordonnee = o;
	hauteur = h;
}

Vecteur::~Vecteur()
{
}

void Vecteur::affiche(char caracter)
{
	cout << "Le Vecteur "<< caracter <<": abscisse= " << abscisse 
		<< "  ordonnee= " << ordonnee << "  hauteur= " << hauteur << endl;
}

//Passage par valeur
float Vecteur::prod_scal_valeur(const Vecteur B)
{
	return (abscisse*B.abscisse + ordonnee*B.ordonnee + hauteur*B.hauteur);
}

Vecteur Vecteur::somme_valeur(Vecteur A)
{
	Vecteur S;
	S.abscisse =abscisse+A.abscisse ;
	S.ordonnee =ordonnee+A.ordonnee ;
	S.hauteur  =hauteur+A.hauteur ;
	return S;
}

//Passage par référence
float Vecteur::prod_scal_ref(const Vecteur &B)
{
	return (abscisse*B.abscisse + ordonnee*B.ordonnee + hauteur*B.hauteur);
}

Vecteur Vecteur::somme_ref(Vecteur &A)
{
	Vecteur S;
	S.abscisse =abscisse+A.abscisse ;
	S.ordonnee =ordonnee+A.ordonnee ;
	S.hauteur  =hauteur+A.hauteur ;
	return S;
}

//Passage par adresse
float Vecteur::prod_scal_adr(const Vecteur* B)
{
	return (abscisse*B->abscisse + ordonnee*B->ordonnee + hauteur*B->hauteur);
}

Vecteur Vecteur::somme_adr(Vecteur* A)
{
	Vecteur S;
	S.abscisse =abscisse+A->abscisse ;
	S.ordonnee =ordonnee+A->ordonnee ;
	S.hauteur  =hauteur+A->hauteur ;
	return S;
}






