#include <iostream>
using namespace std;
#include "Fraction.h"

fraction :: fraction()
    {
    }

fraction :: fraction(int a, int b)
    {
        num = a;
        den = b;
    }
void fraction :: afficher()
    {
        cout << num << "/" << den << endl;
    }
    
fraction fraction :: inverse()
    {
        fraction r;
        r.num = den;
        r.den = num;
        return r;
    }


fraction operator+(fraction const& f1, fraction const& f2)
    {
        fraction s;
        s.num = f1.num + f2.num;
        s.den = f1.den;
        return s;
    }
fraction operator-(fraction const& f1, fraction const& f2)
    {
         fraction s;
        s.num = f1.num - f2.num;
        s.den = f1.den;
        return s;
    }
fraction operator*(fraction const& f1, fraction const& f2)
    {
        fraction s;
        s.num = f1.num * f2.num;
        s.den = f1.den * f2.den;
        return s;
    }
fraction operator/(fraction const& f1, fraction f2)
    {
        return f1 * (f2.inverse());
    }
    
bool operator==(fraction const& f1, fraction const& f2)
    {
        return (f1.num == f2.num);
    }

    

