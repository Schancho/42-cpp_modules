#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();
		void	attack(std::string const & target);
		FragTrap &		operator=( FragTrap const & rhs );
		void highFivesGuys(void);

};


#endif /* ******************************************************** SCAVTRAP_H */