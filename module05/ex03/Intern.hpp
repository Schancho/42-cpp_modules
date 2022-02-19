
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &);
        Intern & operator=(Intern const &);
        ~Intern();
        Form *makeForm(std::string, std::string);

};
