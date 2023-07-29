#include <iostream>
using namespace std;
void test1()
{
    int *p;
    int x = 17;
    p = &x;
    x++;
    (*p)++;
    cout << "x=" << x << " *p=" << *p << endl;
}
void test2()
{
    char *pc, *pb, c, car;
    c = 't';
    pc = &car;
    pb = pc;
    c = c - 'a' + 'A';
    cout << c << *pc << *pb << endl;
}
void test3()
{
    char mot[10];
    strcpy(mot, "iaseist");
    cout << "*mot=" << *mot << endl;
    *mot = *(mot + 2) = 't';
    cout << mot << endl;
}
int main()
{
    test1();
    test2();
    test3();
    return 0;
}