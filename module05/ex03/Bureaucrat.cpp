#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}
Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->_grade = src._grade;
	this->_name = src._name;
}

void Bureaucrat::signForm(Form& src)
{
	if (src.getFormStatus())
		std::cout << this->_name << " signs " << src.getFormName() << std::endl;
	else
		std::cout << this->_name << " cannot signs " << src.getFormName() <<" because garde is to low"<<std::endl;


}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & src )
{
	this->_name = src._name;
	this->_grade = src._grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}
std::string Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::incrementGrade()
{
	//if (this->_grade == 1)
	//	throw GradeTooHighException();
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();

}
void Bureaucrat::decrementGrade()
{
	//if(this->_grade == 150)
	//	throw GradeTooLowException();
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void 	Bureaucrat::executeForm(Form const & form) const
{
	std::cout << this->getName() << " executes " << form.getFormName() << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */