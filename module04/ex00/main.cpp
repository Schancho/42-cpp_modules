#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Cat* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    Dog k;
    Dog kelb(k);
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    i->makeSound();
    k.makeSound();
    meta->makeSound();
    c->makeSound();
    wrongMeta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete c;
    delete wrongMeta;
    return 0;
}
