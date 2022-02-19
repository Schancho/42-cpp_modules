
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat  b("B", 1);
    Intern      intern;
    Form        *f;
    std::cout << "############" << std::endl;
    f = intern.makeForm("ShrubberyCreationForm", "Bender");
    std::cout << "############" << std::endl;
    if (f)
    {
        f->beSigned(b);
        f->execute(b);
    }

    return 0;
}
