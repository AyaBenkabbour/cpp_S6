#include <iostream>
#include <cmath>
using namespace std;
#include "Cercle.h"


Cercle::Cercle(Point p, float a){
		centre = p;
        r = a;
    }
    
Cercle::Cercle(Point c, Point a){
	
		centre = c;
		r = c.distance(a);
        
    }
    
void Cercle::afficher(){
    	
    	cout<<"Le rayon est: " << r << endl;
    	cout << "Le centre est : ";
        centre.Affiche();
        cout<<endl<<"-----"<<endl;
    }
    
float Cercle::getPerimetre(){
        return 2 * M_PI * r;
    }  
    
    
float Cercle::getSurface(){
        return r * r * M_PI;
    } 
     
	            	 
bool Cercle::appartient(Point p){
       	if(centre.distance(p) <= r){
           return true;
        }
        return false; 
    }             
