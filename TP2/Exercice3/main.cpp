#include <iostream>
using namespace std;
#include "Pile.h"


int main(){

    pile_entier S;
  
    cout<<"\n Taille de la pile : "<< S.top<<endl;
    
    cout<<"\n ****************EMPILEMENT**************** \n"<<endl;
    
    while(!S.pleine()){
    	cout<<"\n Saisir l'entier a empiler : "<<endl;
	    int push1; 
	    cin>>push1;
	    S.empile(push1);
	    cout<<"\n Element empile, taille de la pile : "<< S.top <<endl;
	}
	
	pile_entier P(S);
	cout<<"\n Taille de la pile par recopie: "<< P.top<<endl;
	
	cout<<"\n ****************DEPILEMENT**************** \n"<<endl;
   
	while(!S.vide()){
		    int p = S.depile();
		    cout<<"\n Element "<< p <<" depile, ";
		    cout<<"taille de la pile : "<< S.top<<endl;
		}
		
	    	
    return 0;
}
