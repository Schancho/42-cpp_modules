#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
class PresidentialPardonForm : public Form
{
	std::string target;

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		std::string _target;
};


std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */