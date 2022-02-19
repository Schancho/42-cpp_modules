#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	(void)src;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target) :Form("Robot", 72, 45), _target(target)
{	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor!" << std::endl;
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
	if (this->getFormStatus() == false)
		throw notSigned();
	if (executor.getGrade() > getFormExecuteGrade())
		throw notExecuted();
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


std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Name: " + i.getFormName() <<std::endl;
	o << "Sgrade: " << i.getFormSigningGrade() <<std::endl;
	o << "Egrade: " << i.getFormExecuteGrade() <<std::endl;
	o << "status: "<< ((i.getFormStatus()) ? " Signed": " Not Signed") << std::endl;
	return o;
}
