#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
// 
int main()
{

    try
    {
        Bureaucrat a("A", 5);
        //Bureaucrat b("B", 139);

        //ShrubberyCreationForm s("Home");
        PresidentialPardonForm p("President");
        //RobotomyRequestForm r("Robot");
        PresidentialPardonForm l = p ;
        l.beSigned(a);
        std::cout << p ;
        l.execute(a);
        // a.signForm(p);
        // s.beSigned(a);
        // r.beSigned(a);

    //     a.signForm(s);
    //     a.signForm(r);

        
    //     s.execute(a);
    //     r.execute(a);

    //     r.beSigned(a);
    //     r.execute(a);
        
    //     s.beSigned(a);
    //     s.execute(a);

        //Bureaucrat x("B", 700);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
// srabd(0);
// int rando = rand() % 2 + 1;
// if (rand == 1)
// std::cout<< 
// else
//     std::cout<<"failure"<<std::endl