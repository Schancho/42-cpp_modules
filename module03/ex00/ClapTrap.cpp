#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	this->_hitPoints  = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Hana hna" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
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

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " + this->_name + " attack " + target + " causing " << this->_hitPoints << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

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