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
        Bureaucrat a("A", 137);
        Bureaucrat b("B", 7);

        ShrubberyCreationForm s("S");
        // PresidentialPardonForm p("P");
        // RobotomyRequestForm r("R");

        // p.beSigned(a);
        s.beSigned(a);
        // r.beSigned(a);

        a.signForm(s);
       // a.signForm(r);

       // a.signForm(p);
        
        s.execute(a);
        // p.execute(a);
        // r.execute(a);

        // r.beSigned(a);
        // r.execute(a);
        
        // s.beSigned(a);
        // s.execute(a);

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