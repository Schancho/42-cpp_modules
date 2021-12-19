#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		void	attack(std::string const & target);
		ScavTrap &		operator=( ScavTrap const & rhs );
		void guardGate(void);

};


#endif /* ******************************************************** SCAVTRAP_H */