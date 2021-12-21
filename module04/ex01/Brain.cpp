#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{

	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = "idea " + std::to_string(i);
	}
}

Brain::Brain( const Brain & src )
{
	*this = src;
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Barin Deleted" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = rhs.ideas[i];
	}
	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & b )
{

	for (size_t i = 0; i < 100; i++)
	{
		o << b.getIdea(i) << '\n';
	}
	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const 
{
	if (index < 100)
		return ideas[index];
	return ideas[0];
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */