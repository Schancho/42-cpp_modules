#include "Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat's default constructer called!" << std::endl;
	brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat's copy constructer called!" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat's destructer called!" << std::endl;
	delete brain;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	_type = rhs._type;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, rhs.brain->getIdea(i));
		
	}
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Cat is making a sound!" << std::endl;
}

Brain *Cat::getBrian()
{
	return this->brain;
}