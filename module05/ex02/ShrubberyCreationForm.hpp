#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;
class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
	private:
		std::string _target;
};

#endif