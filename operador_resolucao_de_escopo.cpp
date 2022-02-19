#include <stdio.h>

class A
{
private:
    int privado;

protected:
    int protegido;

public:
    int publico;
    int get_privado_A()
    {
        return privado;
    }
    A()
    {
        publico = 1;
        protegido = 2;
        privado = 3;
    }
};
class B : private A
{
public:
    int publico;
    B()
    {
        publico = 4;
    }
    int get_publico()
    {
        return A::publico;
    }
    int get_protegido()
    {
        return protegido;
    }
    int get_privado_B()
    {
        return get_privado_A();
    }
};

int main()
{
    B objeto;
    printf("%d\n", objeto.get_publico());
    printf("%d\n", objeto.get_protegido());
    printf("%d\n", objeto.get_privado_B());
}
