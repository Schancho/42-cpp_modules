#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat's default constructer called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat's copy constructer called!" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructer called!" << std::endl;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	_type = rhs._type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << "WrongCat is making a sound!" << std::endl;
}