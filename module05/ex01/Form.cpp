#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Form::Form(std::string const name, int const sGrade, int const eGrade) :_name(name), _signingGrade(sGrade), _executeGrade(eGrade), status(false)
{
	if (sGrade < 1 || eGrade < 1)
		throw GradeTooHighException();
	if (sGrade > 150 || eGrade > 150)
		throw GradeTooLowException();
}
Form::Form(): _name("name"), _signingGrade(0), _executeGrade(0), status(false)
{
}

Form::Form( const Form & src ) : _signingGrade(0), _executeGrade(0), status(false)
{
	this->status = src.status;
}

Form::~Form()
{
}

Form &				Form::operator=( Form const & src )
{
	this->status = src.status;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form  & i )
{
	o << "Name: " + i.getFormName() <<std::endl;
	o << "Sgrade: " << i.getFormSigningGrade() <<std::endl;
	o << "Egrade: " << i.getFormExecuteGrade() <<std::endl;
	o << "status: "<< ((i.getFormStatus()) ? " Signed": " Not Signed") << std::endl;
	return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

std::string  Form::getFormName() const
{
	return this->_name;
}
int  Form::getFormSigningGrade() const
{
	return this->_signingGrade;
}

int Form::getFormExecuteGrade() const
{
	return this->_executeGrade;
}

bool Form::getFormStatus()
{
	return this->status;
}

void	Form::beSigned(Bureaucrat & b)
{

	if (b.getGrade() <= this->_signingGrade)
	{
		status = true;
		b.signForm((*this));
	}
	else
		throw GradeTooLowException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */