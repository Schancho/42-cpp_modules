#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target) :Form("Robot", 72, 45), _target(target)
{	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->status == false)
		throw notSigned();
	if (executor.getGrade() > _executeGrade)
		throw notSigned();
	srand(time(0));
    int rando = rand() % 2;
	if(rando == 0)
	{
		std::cout << this->_target << "  has been robotomized successfully!" << std::endl;
		executor.executeForm(*this);
	}
	else 
		std::cout << _target << " Failure!" << std::endl;
}

