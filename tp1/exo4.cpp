#include <iostream>
#include <vector>
using namespace std;
int main()
{
    double *p;
    int n;
    std::cout << "entrez la taille du tableau: ";
    std::cin >> n;
    double *tab = new double(n);
    std::cout << "entrez les valeurs " << endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "t[" << i << "]=";
        std::cin >> *(tab + i);
    }
    p = tab + 4;
    std::cout << "p=" << *p << endl;
    return 0;
}