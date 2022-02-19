
#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor" << std::endl;
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern()
{
    std::cout << "Intern destructor" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Intern assignment operator" << std::endl;
    }
    return *this;
}


typedef struct s_form {
    std::string type;
    Form        *f;
}               t_form;

Form *Intern::makeForm(std::string req, std::string x)
{
    Form* result = 0;

    t_form forms[3] = {
        {"ShrubberyCreationForm", new ShrubberyCreationForm(x)},
        {"RobotomyRequestForm", new RobotomyRequestForm(x)},
        {"PresidentialPardonForm", new PresidentialPardonForm(x)},
    };

    for (size_t i = 0; i < 3; i++)
        if (forms[i].type == req)
            result = forms[i].f;
        else
            delete forms[i].f;
    if (result)
    {
        std::cerr << "Intern creates " << result->getFormName() << std::endl;
        return (result);
    }
    else
        std::cerr << "Intern counldn't create " <<  std::endl;
    return result;

}