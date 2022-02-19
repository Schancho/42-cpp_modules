
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureau_a("Bureau_A", 1);
        Bureaucrat bureau_b("Bureau_B", 7);

        ShrubberyCreationForm shru("Shru");
        PresidentialPardonForm presd("Presd");
        RobotomyRequestForm robo("Robo");


        bureau_b.signForm(shru);
        bureau_b.signForm(robo);
        bureau_b.signForm(presd);

        presd.beSigned(bureau_b);
        shru.beSigned(bureau_b);
        robo.beSigned(bureau_b);

        shru.execute(bureau_b);
        presd.execute(bureau_b);
        robo.execute(bureau_b);

        std::cout << "############" << std::endl;
        Bureaucrat failure("B", 7000);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
