#include "Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat's default constructer called!" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat's copy constructer called!" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat's destructer called!" << std::endl;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	_type = rhs._type;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Cat is making a sound!" << std::endl;
}