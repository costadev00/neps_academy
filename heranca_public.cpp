class A
{
private:
    int privado;

protected:
    int protegido;

public:
    int publico;
    int get_privado()
    {
        return privado;
    }
};

//OS ATRIBUTOS E FUNÇÕES PUBLICOS E PROTECTED SERAO COPIADOS DE FORMA PUBLICA E PROTECTED
class B : public A
{
    // public: int publico;
    // protected: int protegido;
public:
    int get_protegido()
    {
        return protegido;
    }
};

int main()
{
    B objeto;
    objeto.publico = 0;
    objeto.get_protegido();
    objeto.get_privado();
}
