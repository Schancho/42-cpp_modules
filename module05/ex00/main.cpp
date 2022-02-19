#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat x("bureau", 160);
        std::cout << x;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}