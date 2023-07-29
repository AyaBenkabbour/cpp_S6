#include "partie1.h"
#include<iostream>
#include<cmath>
using namespace std;

Cercle::Cercle(){
	this->point=new Point(0,0);
	this->centre=new Point(0,0);
}

float Cercle::getperimetre(){
	float p;
	p=2* M_PI *this->rayon;
	return p;
	
}
float Cercle::getsurface(){
	float s;
	s=M_PI * pow(this->rayon,2);
	return s;
}
bool Cercle::appartient(Point p){
	float d;
	d=p.distance( *this->centre , p );
	return (d==this->rayon);
	
}
void Cercle::afficher(){
	cout<<"les coordonnees du centre du cercle sont"<<endl;
	this->centre->afficher();
	cout<<"le rayon du cercle est"<<this->rayon<<endl;
}



