#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->status == false)
		throw notSigned();
	if (executor.getGrade() > _executeGrade)
		throw notSigned();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	executor.executeForm(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */