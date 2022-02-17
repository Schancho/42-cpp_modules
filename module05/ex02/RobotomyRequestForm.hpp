#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		std::string _target;
};

#endif