#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		std::string getType(void)const;
		void setType(std::string type);
		void makeSound()const;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif 