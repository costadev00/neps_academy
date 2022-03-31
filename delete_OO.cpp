#include <stdio.h>
#include <stdlib.h>

class A
{
public:
    int x;

    A()
    { // Construtor sem parâmetros
        x = 7;
    }
    A(int x)
    { // Construtor com parâmetros
        this->x = x;
    }

    ~A()
    {                         // Destrutor
        printf("Destruindo"); // Imprime "Destruindo" caso o destrutor seja chamado
    }
};

int main()
{
    A *p = new A;         // Alocando um elemento usando o construtor sem parâmetros
    printf("%d\n", p->x); // Imprime o atributo x do objeto: 7
    delete p;             // Desaloca a memória e chama o destrutor
}
