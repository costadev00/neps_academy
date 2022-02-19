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
};

A soma(A a, A b)
{ // Uma função que realize a soma de dois objetos da classe A
    int novo_x = a.x + b.x;
    int novo_y = a.y + b.y;

    return A(novo_x, novo_y); // Retorna o novo objeto
}

int main()
{
    A a(1, 2), b(3, 4);
    A c = soma(a, b);
    printf("%d %d", c.x, c.y);
}
