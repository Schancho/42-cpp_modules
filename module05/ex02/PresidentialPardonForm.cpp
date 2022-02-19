#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) 
{
	(void)src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor!" << std::endl;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getFormStatus() == false)
		throw notSigned();
	if (executor.getGrade() > getFormExecuteGrade())
		throw notExecuted();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	executor.executeForm(*this);
}


std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "Name: " + i.getFormName() <<std::endl;
	o << "Sgrade: " << i.getFormSigningGrade() <<std::endl;
	o << "Egrade: " << i.getFormExecuteGrade() <<std::endl;
	o << "status: "<< ((i.getFormStatus()) ? " Signed": " Not Signed") << std::endl;
	return o;
}
