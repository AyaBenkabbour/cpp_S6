#include <iostream>
#include <new>

using namespace std;
//fichier.h
class Pile{
	protected:
		int taille;
		int *pile;
		int taille_max;
		int courant;
	public:
		Pile(int n);
		Pile();
		~Pile();
		void empiler(int p);
		int depiler( );
		int pleine( );
		int vide( );	
};

//fichier.cpp
Pile::Pile(){
	this->pile=new int[20];
	if(pile==NULL)
		
			cout<<" Echec d'allouement de memoire";
	else
	{
			taille_max=20;
			courant=0;
			taille = 0;
			cout<<" pile cree ";
	}		
}
Pile::Pile(int n){
	this->pile=new int[n];
	if(pile==NULL)
		cout<<" Echec d'allouement de memoire";
	else
	{
			taille_max=n;
			courant=0;
			taille = 0;
			cout<<" pile cree";
	}
}
Pile::~Pile(){
	cout<<"la pile est liberee";
}
void Pile::empiler(int p){
	if(this->taille<this->taille_max){
	int n=this->taille;
	this->courant=pile[n];
	this->pile[n]=p;
	this->taille++;	}
	else{
		cout<<"la pile a atteint sa taille maximale";
	}
}
int Pile::depiler(){
	
	int n=this->taille;
	int s=this->pile[n];
	
	this->taille--;
	courant = pile[taille];
	return s;	
}
int Pile::pleine(){
	return(this->taille==this->taille_max)? 1:0;
}
int Pile::vide(){
	return(this->taille==0)? 1:0;
	
}

//fichier main.cpp

int main() {
	Pile pile(3);
	cout<<endl;
	pile.empiler(1);
	pile.empiler(3);
	pile.empiler(5);
	
	int p=pile.pleine();
	if(p==1)
		cout<<"pile pleine"<<endl;
	else
		cout<<"pile non pleine";
	int s=pile.depiler();
	cout<<"l'element depile est"<<s<<endl;
	s=pile.depiler();
	cout<<"l'element depile est"<<s<<endl;
	s=pile.depiler();
	cout<<"l'element depile est"<<s<<endl;
	int v=pile.vide();
	if(v==1)
		cout<<"pile vide"<<endl;
	else
		cout<<"pile non vide";
	

	return 0;
}







