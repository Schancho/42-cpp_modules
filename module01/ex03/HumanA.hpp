#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	private:
		std::string _name;
		Weapon& w;

	public:

		HumanA(std::string name, Weapon &type);
		void	attack();
};


#endif /* ********************************************************** HUMANA_H */