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

void som(Animal &objeto)
{
    objeto.emitirsom()
}

int main()
{
    Animal animal;
    Gato cat;
    Cachorro dog;

    som(animal);
    som(cat);
    som(dog);
}
