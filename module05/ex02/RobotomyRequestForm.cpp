#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	
}
std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

