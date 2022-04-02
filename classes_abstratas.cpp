#include <stdio.h>

class Animal
{
public:
    virtual void emitirsom() = 0;
};

class Gato : public Animal
{
public:
    void emitirsom()
    {
        printf("Som do gato\n");
    }
};
class Cachorro : public Animal
{
public:
    void emitirsom()
    {
        printf("Som do cachorro\n");
    }
};

int main()
{
    Gato cat;
    Animal *ponteiro = &cat;
    ponteiro->emitirsom();
}
