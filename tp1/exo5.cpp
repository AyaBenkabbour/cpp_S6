#include <iostream>
using namespace std;
void f(int x = 10, float y = 20);
void f(float m = 30, int n = 40);
int main()
{
    char c = 'A';
    int n = 0;
    float a = 3.14;
    f(n);
    f(a);
    f(c);
    f(n, a);
    f(a, n);
    f();
    return 0;
}
void f(int x, float y)
{
    cout << "x=" << x << "\ty=" << y << endl;
}
void f(float m, int n)
{
    cout << "m=" << m << "\tn=" << n << endl;
}