#include <stdio.h>

class Animal
{
public:
    virtual void emitirsom()
    {
        printf("Som do animal\n");
    }
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
    Animal *animal;

    animal = new Gato();
    animal->emitirsom();

    animal = new Cachorro();
    animal->emitirsom();
}
