#include <iostream>
using namespace std;
#include "Fraction.h"


int main(){
	
	fraction f1(3, 5), f2(1, 5);
    cout << "Fraction F1 : ";
    f1.afficher();
    cout << "Fraction F2 : ";
    f2.afficher();
    
    cout << "F1 + F2 = ";
    (f1 + f2).afficher();
    
    cout << "F1 - F2 = ";
    (f1 - f2).afficher();
    
    cout << "F1 * F2 = ";
    (f1 * f2).afficher();
    
    cout << "F1 / F2 = ";
    (f1 / f2).afficher();
    
    if (f1 == f2)
        cout << "Les deux fractions sont egales" << endl;
    else
        cout << "Les deux fractions ne sont pas egales" << endl;


	
    return 0;
}
