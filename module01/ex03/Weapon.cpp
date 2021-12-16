#include "Weapon.hpp"

std::string const & Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string const type)
{
	setType(type);
}

Weapon & Weapon::operator=(const Weapon & w)
{
	_type = w.getType();
	return (*this);
}