#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon & type)
{
	w = &type;
}

void HumanB::attack(void)
{
	std::cout << _name + " attacks with his " + w->getType() << std::endl;
}
