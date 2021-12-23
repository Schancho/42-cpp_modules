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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
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

	}
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

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */