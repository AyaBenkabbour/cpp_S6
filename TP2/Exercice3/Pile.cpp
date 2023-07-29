#include <iostream>
using namespace std;
#include "Pile.h"



pile_entier :: pile_entier(int n){
	pile.resize(n);
	top=0;
}

pile_entier :: pile_entier(){
	pile.resize(3);
	top=0;
}

pile_entier :: ~pile_entier( ){
	   }
	   
	   
void pile_entier :: empile(int p){
        pile[top]=p;
        top++;
}

int pile_entier :: depile(){
    	int element=pile[top-1];
        pile.pop_back();
        top--;
        return element;
}

bool pile_entier :: vide(){
    return top==0;
}

bool pile_entier :: pleine(){
    return top==pile.size();
}

pile_entier :: pile_entier(const pile_entier &p){
	pile=p.pile;
	top=p.top;
}



