#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main(int argc, char const *argv[])
// {
    //subtype poly'

    // Animal *a = new Animal();
    // Animal *c = new Cat();
    // Animal *d = new Dog();

    // Dog b;


    
    // a->makeSound();
    
    // c->makeSound();
    // d->makeSound();
    // b.makeSound();
    // //adhoc
    //subtype
    //coerence (forced)
    //
int main()
{
    Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
    Cat *c = new Cat();
    Cat cc(*c);
    delete c;
    std::cout << *cc.getBrian();

    Dog *d = new Dog();
    Dog dd(*d);
    delete d;
    std::cout << *dd.getBrian();



    return 0;
}
