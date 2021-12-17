#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int Int)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = (Int << _fractionalBits);
}

Fixed::Fixed(const float Float)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = (Float * (1 << _fractionalBits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & f )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = f._fixed;
	return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & f)
{
	os << f.toFloat();
	return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
int Fixed::toInt( void ) const
{
	return (_fixed >> _fractionalBits);
}
float Fixed::toFloat( void ) const
{
	return ((float)_fixed / (1 << _fractionalBits));
}
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */