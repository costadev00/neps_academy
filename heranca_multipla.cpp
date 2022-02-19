#include <stdio.h>

class Base1
{
public:
    int x;
    Base1() { x = 1; }
};

class Base2
{
public:
    int x;
    Base2() { x = 2; }
};

class Derivada : public Base1, public Base2
{
public:
    int z;
    // int Base1::x
    // int Base2::x
    Derivada() { z = 3; }
};

int main()
{
    Derivada objeto;
    printf("%d\n", objeto.Base1::x);
    printf("%d\n", objeto.Base2::x);
    printf("%d\n", objeto.z);
}
/*
Saída:
1
2
3
*/
