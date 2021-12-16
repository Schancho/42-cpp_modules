#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &type) : w(type)
{
	_name = name;
}


void HumanA::attack( void )
{
	std::cout << _name + " attacks with his " + w.getType() << std::endl;
}