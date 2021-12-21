#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

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
