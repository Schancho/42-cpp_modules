#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
  
    //Animal b;
    Animal *cat = new Cat();
    cat->makeSound();
    delete cat;


    return 0;
}
