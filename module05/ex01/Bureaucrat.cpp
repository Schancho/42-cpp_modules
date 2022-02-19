#include "Bureaucrat.hpp"

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
Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	this->_grade = src._grade;
}

void Bureaucrat::signForm(Form& src)
{
	if (src.getFormStatus())
		std::cout << this->_name << " signs " << src.getFormName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << src.getFormName() <<" because garde is too low"<<std::endl;


}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & src )
{
	//this->_name = src._name;
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

int Bureaucrat::getGrade()
{
	return this->_grade;
}
std::string Bureaucrat::getName()
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
