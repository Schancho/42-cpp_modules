#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() 
{
	_type = "Dog";
	std::cout << "Dog's default constructer called!" << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog's destructer called!" << std::endl;
	delete brain;
	
}

Dog &				Dog::operator=( Dog const & rhs )
{
	_type = rhs._type;
	this->brain = new Brain();
	// this->brain = rhs.brain;
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, rhs.brain->getIdea(i));	
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog is making a sound!" << std::endl;
}
Brain *Dog::getBrian()
{
	return this->brain;
}
