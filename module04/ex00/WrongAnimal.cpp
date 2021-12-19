#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructed called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal's copy constructed called!" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructed called!" << std::endl;
}

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & src )
{
	_type = src._type;
	return *this;
}


void WrongAnimal::makeSound()const
{
	std::cout << "WrongANIMAL is making a sound!" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	_type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}