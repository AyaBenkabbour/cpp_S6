#include <iostream>
using namespace std;
int main()
{
    int t[10], minimum;
    int fonction_min(int *tab);
    std::cout << "entrez les 10 valeurs " << endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "t[" << i << "]=";
        std::cin >> t[i];
    }
    minimum = fonction_min(t);
    std::cout << "la valeur min est: " << minimum << ".";
    return 0;
}

int fonction_min(int *tab)
{
    int min;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    return min;
}