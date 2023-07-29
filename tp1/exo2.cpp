#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    // premier
    int somme = 0, i, n, a;
    cin >> n;
    if (n != 0)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a < (a++))
            {
                somme += a;
            }
        }
    }

    // deuxieme
    int i, n = 10;
    double somme = 0;

    for (i = 0; i < n; i++)
    {
        if (i != 0)
            somme += 1 / double(i);
    }
    cout << "Resultat: " << somme;

    return 0;
}
