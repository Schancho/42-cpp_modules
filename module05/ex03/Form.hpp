#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <cmath>
class Bureaucrat;

class Form
{
	protected:
		std::string const _name;
		int const _signingGrade;
		int const _executeGrade;
		bool status;
	public:

		Form();
		Form(std::string const name, int const sGrade, int const eGrade);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );
	class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		
		};
		class notSigned : public std::exception
		{
			const char* what() const throw();
		};
		class notExecuted : public std::exception
		{
			const char* what() const throw();
		};
		std::string  getFormName() const;
		int  getFormSigningGrade() const;
		int getFormExecuteGrade() const;
		bool getFormStatus();
		void	beSigned(Bureaucrat & b);
		virtual void execute(Bureaucrat const & executor) const = 0;

		// std::ostream &			operator<<( std::ostream & o, Form  & i );

		//void execute(Bureaucrat const & executor) const;

};

std::ostream &			operator<<( std::ostream & o, Form  & i );

#endif /* ************************************************************ FORM_H */