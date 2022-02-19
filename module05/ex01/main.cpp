#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        
        Bureaucrat x("xxxx", 80);
        Form c("Forma", 100, 90);
        std::cout << x;
        c.beSigned(x);
        std::cout << c;
        x.signForm(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    

}