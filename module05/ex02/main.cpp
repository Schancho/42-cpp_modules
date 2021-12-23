#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
    try
    {
        /* code */
        Bureaucrat x("xxxx", 90);
        Form c("Forma", 100, 140);
        ShrubberyCreationForm W("some");
        // std::cout << x
        // c.beSigned(x);
    
        std::cout << c;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}