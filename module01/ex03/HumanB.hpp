#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *w;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon & w);
};


#endif /* ********************************************************** HUMANB_H */