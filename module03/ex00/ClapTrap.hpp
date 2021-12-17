#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _name ;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string const name);
		void setHitPoint(int const hp);
		void setEnergyPoints(int const ep);
		void setAttackDamage(int const ad);
		std::string getName(void);
		int  getHitPoint(void);
		int  getEnergyPoints(void);
		int  getAttackDamage(void);




};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */