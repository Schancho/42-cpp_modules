#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		int _grade;
		std::string _name;
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		
		};
		
		int getGrade();
		std::string getName();
		void incrementGrade();
		void decrementGrade();
		void	signForm(Form& src);
		Bureaucrat &		operator=( Bureaucrat const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Bureaucrat  & i );

#endif /* ****************************************************** BUREAUCRAT_H */