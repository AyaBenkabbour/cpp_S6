
#include <iostream>
#include<cmath>
using namespace std;
//partie fichier.h
class Vecteur{
	public:
		float x;
		float y;
		float hauteur;
	public:
		void affiche();
		Vecteur();
		Vecteur(float x,float y, int c=0);
		~Vecteur();
		float prod_scal(Vecteur* vecteur1, Vecteur* vecteur2);
		Vecteur somme(Vecteur* vecteur1, Vecteur* vecteur2);
		
};
//partie fichier.cpp (implementation des fichiers)				
void Vecteur::affiche(){
	cout<<"l'abscisse du vecteur est:" << this->x<<"--"<<endl;
	cout<<"l'ordonnee du vecteur est:" <<this->y<<"--"<<endl;
	cout<<"la hauteur du vecteur est:" <<this->hauteur<<"--"<<endl;
}
Vecteur::Vecteur(){
	this->x=0;
	this->y=0;
	this->hauteur=0;
}
Vecteur::Vecteur(float x,float y, int c){
	this->x=x;
	this->y=y;
	this->hauteur=c;
}
Vecteur::~Vecteur(){
	cout<<"le vecteur est detruit son adresse est:"<<this<<endl;
}
float Vecteur::prod_scal(Vecteur* vecteur1, Vecteur* vecteur2){
	float p=(vecteur2->x * vecteur1->x)+(vecteur2->y * vecteur1->y);
	return p;
}
Vecteur Vecteur::somme(Vecteur* vecteur1, Vecteur* vecteur2){
	Vecteur somme;
	somme.x=vecteur2->x + vecteur1->x;
	somme.y=vecteur2->y + vecteur1->y;
	return somme;
}


//partie fichier main.cpp (fonction main)
int main() {
	Vecteur vecteur;
	cout<<"affichage des coordonnees du vecteur 1 initialiser par consructeur par defaut"<<endl;
	vecteur.affiche();
	cout<<endl;
	cout<<"affichage des coordonnees du vecteur 2"<<endl;
	Vecteur vecteur1(12,4);
	vecteur1.affiche();
	cout<<endl;
	Vecteur vecteur2(23,8);
	cout<<"affichage du vecteur 3"<<endl;
	vecteur2.affiche();
	cout<<endl;
	float produit=vecteur1.prod_scal(&vecteur1 , &vecteur2);
	cout<<"le produit scalaire des deux vecteurs est egale a:"<<produit<<endl;
	
	Vecteur somme=vecteur1.somme(&vecteur1 , &vecteur2);
	cout<<"le vecteur somme des deux produit est ";
	somme.affiche();
	cout<<endl;
}
