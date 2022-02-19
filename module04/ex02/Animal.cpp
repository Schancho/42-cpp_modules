#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal's default constructed called!" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal's copy constructed called!" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal's destructed called!" << std::endl;
}

Animal &				Animal::operator=( Animal const & src )
{
	_type = src._type;
	return *this;
}


void Animal::makeSound() const
{
	std::cout << "ANIMAL is making a sound!" << std::endl;
}

void Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType(void) const
{
	return _type;
}