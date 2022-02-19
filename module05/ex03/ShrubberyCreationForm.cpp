#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	(void)src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor!" << std::endl;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getFormStatus() == false)
		throw notSigned();
	if (executor.getGrade() > getFormExecuteGrade())
		throw notExecuted();

	std::string line;
	std::ifstream f("tree");
	std::string target(this->_target);
	target.append("_shrubbery");
	std::ofstream file;
	file.open(target);
	if (file.is_open() )
    {
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

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "Name: " + i.getFormName() <<std::endl;
	o << "Sgrade: " << i.getFormSigningGrade() <<std::endl;
	o << "Egrade: " << i.getFormExecuteGrade() <<std::endl;
	o << "status: "<< ((i.getFormStatus()) ? " Signed": " Not Signed") << std::endl;
	return o;
}
