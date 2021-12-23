#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("Shrubbery", 145, 137), _target(target)
{
<<<<<<< HEAD
=======
	std::string line;
	std::ifstream f("tree");
	//f.open("trele");
	target.append("_shrubbery");
	std::ofstream file;
	file.open(target);
	if (!file.is_open() || !f.is_open())
    {
        std::cout << "File error "  << std::endl;
        exit(1);
    }
	while (std::getline(f, line))
	{
		file << line << std::endl;
>>>>>>> 282d3fef49a0f9e8b912471c3c6ebca766c12e98

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

<<<<<<< HEAD
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->status == false)
		throw notSigned();
	std::string line;
	std::ifstream f("tree");
	//f.open("treee");
	std::string target(executor.getName());
	target.append("_shrubbery");
	std::ofstream file;
	file.open(target);
	if (!file.is_open() || !f.is_open())
    {
        std::cout << "File error "  << std::endl;
        exit(1);
    }
	while (std::getline(f, line))
	{
		file << line << std::endl;
	}
	
=======
>>>>>>> 282d3fef49a0f9e8b912471c3c6ebca766c12e98
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */