#include <stdio.h>

class A {
private:
    int privado;
protected:
    int protegido;
public:
    int publico;
    int get_privado_A();
        return privado;
};
//OS ATRIBUTOS E FUNCOES PUBLIC E PROTECTED SERAO COPIADOS COMO PROTECTED
class B : protected A {
/* protected:
    int protegido;
    int publico; 

    int get_privado_A() {
        return privado;
    }
*/
public:
    int get_publico() {
        return publico;
    }
    int get_protegido() {
        return protegido;
    }
    int get_privado_B() {
        return get_privado_A();
    }
};

int main() {
    B objeto;
    objeto.get_publico();
    objeto.get_protegido();
    objeto.get_privado_B();
