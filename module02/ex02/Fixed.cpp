#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed( Fixed const & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int Int)
{
	//std::cout << "Int constructor called" << std::endl;
	_fixed = (Int << _fractionalBits);
}

Fixed::Fixed(const float Float)
{
	//std::cout << "Float constructor called" << std::endl;
	_fixed = roundf( Float * (1 << _fractionalBits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & f )
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_fixed = f._fixed;
	return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & f)
{
	os << f.toFloat();
	return os;
}

bool	Fixed::operator==( Fixed const & f )
{
	return this->_fixed == f._fixed;
}

bool	Fixed::operator>( Fixed const & f )
{
	return this->_fixed > f._fixed;
}

bool	Fixed::operator<( Fixed const & f )
{
	return this->_fixed < f._fixed;
}

bool	Fixed::operator>=( Fixed const & f )
{
	return this->_fixed >= f._fixed;
}

bool	Fixed::operator<=( Fixed const & f )
{
	return this->_fixed <= f._fixed;
}

bool	Fixed::operator!=( Fixed const & f )
{
	return this->_fixed != f._fixed;
}

Fixed		Fixed::operator+( Fixed const & f ) 
{
	// this->_fixed = this->_fixed + f._fixed;
	// return (*this);
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed		Fixed::operator-( Fixed const & f )
{
	// this->_fixed = this->_fixed - f._fixed;
	// return (*this);
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed		Fixed::operator*( Fixed const & f )
{
	// this->_fixed = (this->_fixed * f._fixed) / 256; 
	// return (*this);
	//Fixed tmp;
	//tmp._fixed = (_fixed * f._fixed / (1 << 8));
	//return (tmp);
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed		Fixed::operator/( Fixed const & f )
{
	 if (f._fixed != 0)
		return Fixed(this->toFloat() / f.toFloat());
	 return (*this);
}

Fixed &		Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}
Fixed		Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}
Fixed &		Fixed::operator--()
{
	_fixed--;
	return (*this);
}
Fixed		Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return temp;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

Fixed &	Fixed::min(Fixed & f1, Fixed & f2)
{
	return f1.getRawBits() > f2.getRawBits() ? f2 : f1;
}
Fixed	& Fixed::max(Fixed & f1, Fixed &f2)
{
	return f1.getRawBits() < f2.getRawBits() ? f2 : f1;
}
const	Fixed & Fixed::min(const Fixed & f1, const Fixed &f2)
{
	return f1.getRawBits() > f2.getRawBits() ? f2 : f1;
}
const	Fixed & Fixed::max(const Fixed & f1, const Fixed &f2)
{
	return f1.getRawBits() < f2.getRawBits() ? f2 : f1;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */