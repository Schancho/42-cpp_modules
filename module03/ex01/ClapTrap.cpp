#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Param ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints  = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " + this->_name + " attack " + target + " causing " << this->_attackDamage << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " + this->_name + " took " << amount  << " points of damage!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " + this->_name + " took " << amount  << " points of energy!"<< std::endl;
}

void ClapTrap::setName(std::string const name)
{
	_name = name;
}

void ClapTrap::setHitPoint(int const hp)
{
	_hitPoints = hp;
}

void ClapTrap::setEnergyPoints(int const ep)
{
	_energyPoints = ep;
}

void ClapTrap::setAttackDamage(int const ad)
{
	_attackDamage = ad;
}

std::string ClapTrap::getName(void)
{
	return _name;
}

int  ClapTrap::getHitPoint(void)
{
	return _hitPoints;
}

int  ClapTrap::getEnergyPoints(void)
{
	return _energyPoints;
}

int  ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */