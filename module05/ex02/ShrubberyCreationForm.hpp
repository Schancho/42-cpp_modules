#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		void execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */