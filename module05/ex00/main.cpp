#include "Bureaucrat.hpp"

int main()
{
    try
    {
        /* code */
        Bureaucrat x("xxxx", 100);
        std::cout << x;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}