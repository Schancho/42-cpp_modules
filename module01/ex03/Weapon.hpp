#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		std::string const & getType() const;
		void setType(std::string type);
		Weapon(std::string const type);
		
		Weapon & operator = (const Weapon & w);
};


#endif /* ********************************************************** WEAPON_H */