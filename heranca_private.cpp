#include <stdio.h>

class A
{
private:
    int privado;

protected:
    int protegido;
    int get_privado_A()
    {
        return privado;
    }

public:
    int publico;
};
//OS ATRIBUTOS E FUNCOES PUBLICOS E PROTECTED VAO SER COPIADOS PARA A CLASSE B DE FORMA PRIVADA
class B : private A
{
    // private:
    // int publico;
    // int protegido;
    /*
    int get_privado_A() {
        return privado;
    }
    */
public:
    int get_publico()
    {
        return publico;
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
    objeto.get_publico();
    objeto.get_protegido();
    objeto.get_privado_B();
}
