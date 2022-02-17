#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor!" << std::endl;
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

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor!" << std::endl;
}

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
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();

}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void 	Bureaucrat::executeForm(Form const & form) const
{
	if (form.getFormStatus() && this->_grade <= form.getFormExecuteGrade())
		std::cout << this->getName() << " executed " << form.getFormName() << std::endl;
	else
		std::cout << this->getName() << " not executed " << form.getFormName() << std::endl;
}
