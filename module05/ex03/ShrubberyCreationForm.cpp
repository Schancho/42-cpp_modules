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

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->status == false)
		throw notSigned();
	if(executor.getGrade() > _executeGrade)
	{
		throw notExecuted();
	}

	std::string line;
	std::ifstream f("tree");
	//f.open("treee");
	std::string target(this->_target);
	target.append("_shrubbery");
	std::ofstream file;
	file.open(target);
	if (file.is_open() )//|| !f.is_open())
    {
        // std::cout << "File error "  << std::endl;
		file << "		                      ___"<<std::endl;
		file << "                _,-'""   """"`--."<<std::endl;
		file << "             ,-'          __,,--  "<<std::endl;
		file << "           ,'    __,--""""dF      )"<<std::endl;
		file << "          /   .- Hb_,--  dF      /"<<std::endl;
		file << "        ,'       _Hb ___dF -._,- "<<std::endl;
		file << "      ,'      _,-""""   ""--..__"<<std::endl;
		file << "     (     ,-'                  `."<<std::endl;
		file << "      `._,'     _   _             ;"<<std::endl;
		file << "       ,'     ,' `-'Hb-.___..._,-'"<<std::endl;
		file << "       \\    , Hb.-'HH`-.dHF "<<std::endl;
		file << "        `--'    Hb  HH  dF "<<std::endl;
		file << "                 Hb HH dF"<<std::endl;
		file << "                  HbHHdF"<<std::endl;
		file << "                  |HHHF"<<std::endl;
		file << "                  |HHH|"<<std::endl;
		file << "                  |HHH|"<<std::endl;
		file << "                  |HHH|"<<std::endl;
		file << "                  |HHH|"<<std::endl;
		file << "                  dHHHb"<<std::endl;
		file << "                .dFd|bHb.               o"<<std::endl;
		file << "      o       .dHFdH|HbTHb.          o /"<<std::endl;
		file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y"<<std::endl;
		file << "##########################################"<<std::endl;

    }
	file.close();
	executor.executeForm(*this);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */