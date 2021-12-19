#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		void	setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		Brain &		operator=( Brain const & rhs );


};
std::ostream &			operator<<( std::ostream & o, Brain const & i );


#endif