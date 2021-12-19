#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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
const Animal* meta = new Animal();
const  Animal* j = new Dog();
const Cat* i = new Cat();
const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* c = new WrongCat();
Dog k;
Dog kelb(k);
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << c->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
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
