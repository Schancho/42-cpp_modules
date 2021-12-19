#include "Dog.hpp"


Dog::Dog() 
{
	_type = "Dog";
	std::cout << "Dog's default constructer called!" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog's destructer called!" << std::endl;
	
}

Dog &				Dog::operator=( Dog const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	_type = rhs._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog is making a sound!" << std::endl;
}
