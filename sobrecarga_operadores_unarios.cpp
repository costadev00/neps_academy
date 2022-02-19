#include <stdio.h>

class A
{
public:
    int x, y;

    A()
    {
        x = 0;
        y = 0;
    }
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    A operator+(A ob)
    {
        return A(x + ob.x, y + ob.y);
    }

    A operator+(int n)
    {
        return A(x + n, y + n);
    }

    A operator-()
    {
        return A(-x, -y);
    }

    A operator++()
    {
        return A(++x, ++y);
    }

    A operator++(int)
    {
        return A(x++, y++);
    }
};

int main()
{
    A a(1, 2);

    A b = ++a; //  Legal: o operador ++ foi sobrecarregado como prefixo
    A c = a++; //  Legal: o operador ++ foi sobrecarregado como sufixo
}
