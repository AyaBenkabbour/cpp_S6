#include <iostream>
#include <cmath>
using namespace std;
class fraction
{
    int num;
    int den;
public:
    fraction(int a = 1, int b = 1)
    {
        num = a;
        den = b;
    }
    void afficher()
    {
        cout << num << "/" << den << endl;
    }
    // pour la division
    fraction inverse()
    {
        fraction r;
        r.num = den;
        r.den = num;
        return r;
    }
    // Opérateurs entre deux fractions : fraction OP fraction
    fraction operator+(fraction f)
    {
        fraction s;
        s.num = num * f.den + den * f.num;
        s.den = den * f.den;
        return s;
    }
    fraction operator-(fraction f)
    {
        fraction s;
        s.num = num * f.den - den * f.num;
        s.den = den * f.den;
        return s;
    }
    fraction operator*(fraction f)
    {
        fraction s;
        s.num = num * f.num;
        s.den = den * f.den;
        return s;
    }
    fraction operator/(fraction f)
    {
        return *this * (f.inverse());
    }

    // Opérateurs entre une fraction et un nombre
    fraction operator+(int x)
    {
        fraction r(x, 1);
        return *this + r;
    }
    fraction operator-(int x)
    {
        fraction r(x, 1);
        return *this - r;
    }
    fraction operator*(int x)
    {
        fraction r(x, 1);
        return *this * r;
    }
    fraction operator/(int x)
    {
        fraction r(x, 1);
        return *this / r;
    }

    // Opérateurs entre un nombre et une fraction
    friend fraction operator+(int, fraction);
    friend fraction operator-(int, fraction);
    friend fraction operator*(int, fraction);
    friend fraction operator/(int, fraction);

    // Opérateurs de comparaison
    bool operator>(fraction f)
    {
        return (num * f.den > den * f.num);
    }
    bool operator>=(fraction f)
    {
        return (num * f.den >= den * f.num);
    }
    bool operator==(fraction f)
    {
        return (num * f.den == den * f.num);
    }
    bool operator<(fraction f)
    {
        return !(*this >= f);
    }
    bool operator<=(fraction f)
    {
        return !(*this > f);
    }
    bool operator!=(fraction f)
    {
        return !(*this == f);
    }
};
fraction operator+(int x, fraction f)
{
    // On appel l'opérateur : fraction + nombre)
    return f + x;
}
fraction operator-(int x, fraction f)
{
    return f - x;
}
fraction operator*(int x, fraction f)
{
    return f * x;
}
fraction operator/(int x, fraction f)
{
    return f / x;
}
int main()
{
    fraction f1(9, 5), f2(1, 2);
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

    cout << "F1 + 5 = ";
    (f1 + 5).afficher();

    cout << "3 * F2 = ";
    (3 * f2).afficher();

    if (f1 == f2)
        cout << "Les deux fractions sont egales" << endl;
    else
        cout << "Les deux fractions ne sont pas egales" << endl;

    if (f1 > f2)
    {
        cout << "La fraction la plus grande est : ";
        f1.afficher();
    }
    else if (f1 < f2)
    {
        cout << "La fraction la plus grande est : ";
        f2.afficher();
    }
}
